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
static vector<struct bookInfo> m_bookInfo;
CBook::CBook()
{
	

}

CBook::~CBook()
{

}



void CBook::setBorrowInfo(struct BorrowInfo& info)
{
// 		FILE *fp;
// 
// 		if ( (fp = fopen("book.txt","w+")) == NULL)
// 		{
// 			return;
// 		}


// 		if ( (fp = fopen("book.txt","a+")) == NULL)
// 		{
// 			return;
// 		}
	

//     CString temp;
// 	temp.Format("%s-%s-%s-%s-%s-%s-%s-",info.strId,info.strName, info.strCompany, info.strBookName, info.strBorrowDate,info.strBackDate,info.isReturn);
// 
// 	fputs(temp, fp);
// 	
// 	fclose(fp);

	m_data.push_back(info);

}

vector<struct BorrowInfo> CBook:: getAllData()
{
	FILE *fp;
	
	if ( (fp = fopen("book.txt","r")) == NULL)
	{
		return NULL;
	}

	char strLine[4096] = {0};
	string tmp,tmp1;
	int iStart = 0 , iEnd=0;
	struct BorrowInfo info;
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
		info.strId = CString(tmp1.c_str());   //读者号

		iStart = iEnd + 1;
		iEnd = tmp.find('-', iStart);
		if ( iEnd == iStart)				//读者姓名
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
		if ( iEnd == iStart)				//所在单位
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

		m_data.push_back(info);
	
	}

	return m_data;


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

void  CBook::saveBorrowInfo(struct BorrowInfo info)
{

//	mapBook[info.strId].push_back(info);
//	mapBookNum[info.strBookName].bookNumIN--;
//	mapBookNum[info.strBookName].bookNumOut++;
	m_data.push_back(info);
	struct bookInfo bInfo;
	bInfo.strBookName = info.strBookName;
	bInfo.bookNumIN = 0;
	bInfo.bookNumOut = 1;
	m_bookInfo.push_back(bInfo);
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

 void  CBook:: saveReturnInfo(struct BorrowInfo info)
 {

	 vector<struct BorrowInfo>::iterator itr;
	 for ( itr = m_data.begin(); itr != m_data.end(); ++itr)
	 {
		 if ( itr->strId == info.strId && itr->strBookName == info.strBookName)
		 {
			 itr->isReturn = _T("1");
			 struct bookInfo bInfo;
			 bInfo.strBookName = info.strBookName;
			 bInfo.bookNumIN = 1;
			 bInfo.bookNumOut = 0;
			m_bookInfo.push_back(bInfo);
		 }
	 }

 }

 bool CBook::deleteBook(struct BorrowInfo info)
 {
	 vector<struct BorrowInfo>::iterator itr;
	 for ( itr = m_data.begin(); itr != m_data.end(); ++itr)
	 {
// 		 if ( itr->strBookName == info.strBookName )
// 		 {
// 			 if ( itr->strId != ";" || itr->isReturn != "1")
// 			 {
// 				 return false;
// 			 }
// 			
// // 			 struct bookInfo bInfo;
// // 			 bInfo.strBookName = info.strBookName;
// // 			 bInfo.bookNumIN = 0;
// // 			 bInfo.bookNumOut = 0;
// // 			 m_bookInfo.push_back(bInfo);
// 
// 			 info.strId = ";";
			


	//	 }
	
	 }

	 
	 return true;


 }

 void  CBook:: saveAllData( )
 {
	 FILE *fp;
	 
	 if ( (fp = fopen("book.txt","w")) == NULL)
	 {
		 return ;
	}

	 vector<struct BorrowInfo>::iterator info;
	 int aa = m_data.size();
	 for( info = m_data.begin(); info != m_data.end(); ++info)
	 {
		 CString temp;
		 temp.Format("%s-%s-%s-%s-%s-%s-%s-",info->strId,info->strName, info->strCompany, info->strBookName, info->strBorrowDate,info->strBackDate,info->isReturn);
		 fputs(temp, fp);
	 }
	
	 
	
	 
	fclose(fp);

 }

 int CBook:: isBookExist(CString bookName)
 {
	 vector<struct BorrowInfo>::iterator info;
	 int aa = m_data.size();
	 for( info = m_data.begin(); info != m_data.end(); ++info)
	 {
		if ( info->strBookName == bookName)
		{
			return 1;
		}
	 }
	 return 0;
 }
