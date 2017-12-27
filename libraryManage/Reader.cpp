// Reader.cpp: implementation of the CReader class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "libraryManage.h"
#include "Reader.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////




CReader::CReader()
{

}

CReader::~CReader()
{

}

void CReader::setReaderInfo(struct ReaderInfo& info)
{

}

vector<struct ReaderInfo> CReader::getAllData()
{
	FILE *fp;
	
	if ( (fp = fopen("reader.txt","r")) == NULL)
	{
		return NULL;
	}

	char strLine[4096] = {0};
	string tmp,tmp1;
	int iStart = 0 , iEnd=0;
	struct ReaderInfo info;
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
		info.strId = CString(tmp1.c_str());   //借阅人

		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//所在单位
		{
			info.strName = "";
		}
		else
		{
			tmp1 = tmp.substr(iStart, iEnd - iStart);
			info.strName = CString(tmp1.c_str());
		}

		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//借书证号
		{
			info.strCompany = "";
		}
		else
		{
			tmp1 = tmp.substr(iStart, iEnd - iStart);
			info.strCompany =  CString(tmp1.c_str());
		}


		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//所借书名
		{
			info.strBookName = "";
		}
		else
		{
			tmp1 = tmp.substr(iStart, iEnd - iStart );
			info.strBookName = CString(tmp1.c_str());
		}


		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//借阅日期
		{
			info.strBorrowDate = "";
		}
		else
		{
			tmp1 = tmp.substr(iStart, iEnd - iStart );
			info.strBorrowDate = CString(tmp1.c_str());
		}

			
		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//归还日期
		{
			info.strBackDate = "";
		}
		else
		{
			tmp1 = tmp.substr(iStart, iEnd - iStart );
			info.strBackDate = CString(tmp1.c_str());
		}

		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//是否还书 '0' 未还
		{
			info.isReturn = "";
		}
		else
		{
			tmp1 = tmp.substr(iStart, iEnd - iStart);
			info.isReturn = CString(tmp1.c_str());
		}

		m_Reader.push_back(info);
	
	}

	return m_Reader;
}

void  CReader::saveBorrowInfo(struct ReaderInfo info)
{
	m_Reader.push_back(info);

}

void CReader::saveReturnInfo(struct ReaderInfo info)
{

	vector<struct ReaderInfo>::iterator itr;
	for ( itr = m_Reader.begin(); itr != m_Reader.end(); ++itr)
	{
		if ( itr->strId == info.strId && itr->strBookName == info.strBookName)
		{
			itr->isReturn = _T("1");
		}
	 }
}

int CReader::  outOfDate(CString strName, CString strBook, CTime back)
{
	
	vector<struct ReaderInfo>::iterator itr;
	int span = 0;
	int day = 0;
	for ( itr = m_Reader.begin(); itr != m_Reader.end(); ++itr)
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