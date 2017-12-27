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

#include "Reader.h"
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

using namespace std;

static vector<struct BorrowInfo > m_data;
static vector<struct bookInfo>  g_bookInfo;
CBook::CBook()
{
	

}

CBook::~CBook()
{

}



void CBook::setBorrowInfo(struct bookInfo info)
{

	vector<struct bookInfo>::iterator itr;
    for ( itr = g_bookInfo.begin(); itr != g_bookInfo.end(); ++itr)
    {
		if ( itr->strBookName == info.strBookName && itr->isReturn == _T("1")
			&& itr->isValid == _T("1"))
		{
				itr->isReturn = _T("0");
				itr->isValid = _T("1");
				g_bookInfo.push_back(info);
				break;

			
		}
    }
	//g_bookInfo.push_back(info);
	saveAllData();
	
}

vector<struct bookInfo> CBook:: getAllData()
{
	FILE *fp;
	
	if ( (fp = fopen("book.txt","r")) == NULL)
	{
		return NULL;
	}

	char strLine[4096] = {0};
	string tmp,tmp1;
	int iStart = 0 , iEnd=0;
	struct bookInfo info;
	while( !feof(fp))
	{
		fgets(strLine,4096,fp); 
		if ( strlen(strLine) < 2)
		{
			return NULL;
		}
		tmp = strLine;
		iEnd = tmp.find('-',iStart);
		
		tmp1 = tmp.substr(iStart, iEnd);   
		info.strBookName = CString(tmp1.c_str());   //书名

		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//图书编号
		{
			info.strBookId = "";
		}
		else
		{
			tmp1 = tmp.substr(iStart, iEnd - iStart);
			info.strBookId = CString(tmp1.c_str());
		}

		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//作者
		{
			info.strBookAuthor = "";
		}
		else
		{
			tmp1 = tmp.substr(iStart, iEnd - iStart);
			info.strBookAuthor =  CString(tmp1.c_str());
		}


		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//出版社
		{
			info.strBookPrint = "";
		}
		else
		{
			tmp1 = tmp.substr(iStart, iEnd - iStart );
			info.strBookPrint = CString(tmp1.c_str());
		}


		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//出版日期
		{
			info.strBookDate = "";
		}
		else
		{
			tmp1 = tmp.substr(iStart, iEnd - iStart );
			info.strBookDate = CString(tmp1.c_str());
		}

			
		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//图书价格
		{
			info.strBookPrice = "";
		}
		else
		{
			tmp1 = tmp.substr(iStart, iEnd - iStart );
			info.strBookPrice = CString(tmp1.c_str());
		}

		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//
		{
			info.isReturn = "";
		}
		else
		{
			tmp1 = tmp.substr(iStart, iEnd - iStart);
			info.isReturn = CString(tmp1.c_str());
		}

		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//
		{
			info.isValid = "";
		}
		else
		{
			tmp1 = tmp.substr(iStart, iEnd - iStart);
			info.isValid = CString(tmp1.c_str());
		}

	

		g_bookInfo.push_back(info);
	
	}

	return g_bookInfo;


}



int CBook::isIdExist(CString strName)
{
	vector<struct BorrowInfo>::iterator itr;
    for ( itr = m_data.begin(); itr != m_data.end(); ++itr)
    {
		if ( itr->strId == strName)
		{
			return 1;
		}
    }
	return 0;

}

void  CBook::saveBorrowInfo(struct bookInfo info)
{

//	mapBook[info.strId].push_back(info);
//	mapBookNum[info.strBookName].bookNumIN--;
//	mapBookNum[info.strBookName].bookNumOut++;
//	bookInfo.push_back(info);

}


 int CBook::  outOfDate(CString strName, CString strBook, CTime back)
 {
 
	 vector<struct BorrowInfo>::iterator itr;
	 int span = 0;
	 int day = 0;
	 for ( itr = m_data.begin(); itr != m_data.end(); ++itr)
	 {
		 if ( itr->strId == strName)
		 {
			if (itr->strBookName == strBook)
			{
				span =  atoi(itr->strBackDate) - back.GetTime();
				if ( span < 0 )
				{
					span = back.GetTime() - atoi(itr->strBackDate);
					day = span/(60*60*24);
				}
			}
		 }
    }
 	return day;
 }

 void  CBook:: saveReturnInfo(struct bookInfo info)
 {

	 vector<struct bookInfo>::iterator itr;
	 for ( itr = g_bookInfo.begin(); itr != g_bookInfo.end(); ++itr)
	 {
		 if ( itr->strBookId == info.strBookId && itr->strBookName == info.strBookName)
		 {
			 itr->isReturn = _T("1");
			 itr->isValid = _T("1");
		 }
	 }

 }

 bool CBook::deleteBook(struct bookInfo info)
 {
	 vector<struct bookInfo>::iterator itr;
	 for ( itr = g_bookInfo.begin(); itr != g_bookInfo.end(); ++itr)
	 {
 		 if ( itr->strBookName == info.strBookName && itr->strBookId == info.strBookId )
 		 {
 				itr->isReturn = "1";		 
				itr->isValid = "0";
		 }
	
	 }

	 saveAllData();
	 return true;


 }

 void  CBook:: saveAllData( )
 {
	 FILE *fp;
	 
	 if ( (fp = fopen("book.txt","w")) == NULL)
	 {
		 return ;
	}

	 vector<struct bookInfo>::iterator info;
	 int aa = g_bookInfo.size();
	 for( info = g_bookInfo.begin(); info != g_bookInfo.end(); info++)
	 {
		 if ( info->isValid == "1")
		 {
			 CString temp;
			 temp.Format("%s-%s-%s-%s-%s-%s-%s-%s-",info->strBookName,info->strBookId, 
				 info->strBookAuthor, info->strBookPrint, 
				 info->strBookDate,info->strBookPrice,info->isReturn,info->isValid);
			 fprintf(fp,"%s\n", temp);
		 }
		
	 }
	
	 
	
	 
	fclose(fp);

 }

 int CBook:: isBookExist(CString bookName)
 {
	 vector<struct bookInfo>::iterator info;
	 int aa = g_bookInfo.size();
	 for( info = g_bookInfo.begin(); info != g_bookInfo.end(); ++info)
	 {
		if ( info->strBookName == bookName)
		{
			return 1;
		}
	 }
	 return 0;
 }

 bool CBook::addBook(struct bookInfo info)
 {
	 g_bookInfo.push_back(info);
	 saveAllData();
	 return true;
 }
