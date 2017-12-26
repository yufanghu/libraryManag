// Book.cpp: implementation of the CBook class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "libraryManage.h"
#include "Book.h"
#include <IO.H>
#include <STRING>

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif


//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CBook::CBook()
{

}

CBook::~CBook()
{

}



void CBook::setBorrowInfo(struct BorrowInfo& info)
{
	FILE *fp;
	bool bExist = isFileExist("book.txt");
	if ( !bExist)
	{
		if ( (fp = fopen("book.txt","w")) == NULL)
		{
			return;
		}
	}
	else
	{
		if ( (fp = fopen("book.txt","a")) == NULL)
		{
			return;
		}
	}

    CString temp;
	temp.Format("%s-%s-%s-%s-%s-%s-%s-",info.strId,info.strName, info.strCompany, info.strBookName, info.strBorrowDate,info.strBackDate,'0');

	fputs(temp, fp);
	
	fclose(fp);

}

bool CBook::isFileExist( CString fileName)
{
	if ( access(fileName,0))
	{
		return false;
	}

	return true;
	
}

int CBook::isIdExist(CString strName)
{
	FILE *fp;
	if ( (fp = fopen("book.txt","r")) == NULL)
	{
		return -1;
	}
	char strLine[4096] = {0};
	std::string tmp,tmp1;
	int iStart = 0 , iEnd=0;
	while( !feof(fp))
	{
		fgets(strLine,4096,fp); 
		tmp = strLine;
		iEnd = strlen(strLine);
		//tmp.
		iEnd = tmp.find('-');
	
		if ( iEnd != -1 )
		{
			tmp1 = tmp.substr(iStart, iEnd);
			if (CString(tmp1.c_str()) == strName)
			{
				return 1;
			}
			//return 1;
		}
	}

	return 0;

}

void  CBook::saveBorrowInfo(struct BorrowInfo& info)
{

//	mapBook[info.strId].push_back(info);
//	mapBookNum[info.strBookName].bookNumIN--;
//	mapBookNum[info.strBookName].bookNumOut++;
}
