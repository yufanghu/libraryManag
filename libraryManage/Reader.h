// Reader.h: interface for the CReader class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_READER_H__479B11DB_99D9_441A_A812_A33EA0A1BE38__INCLUDED_)
#define AFX_READER_H__479B11DB_99D9_441A_A812_A33EA0A1BE38__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <VECTOR>
using namespace std;
struct ReaderInfo
{
	CString strName;
	CString strCompany;
	CString strId;
	CString strBookName;
	CString strBorrowDate;
	CString strBackDate;
	CString  isReturn;
};

class CReader  
{
public:
	CReader();
	virtual ~CReader();
	void setReaderInfo(struct ReaderInfo& info);
	void  saveBorrowInfo(struct ReaderInfo info);
	void  saveReturnInfo(struct ReaderInfo info);
	int   outOfDate(CString strName, CString strBook, CTime back);

	vector<struct ReaderInfo>  getAllData();
	

};

static vector<struct ReaderInfo > m_Reader;
#endif // !defined(AFX_READER_H__479B11DB_99D9_441A_A812_A33EA0A1BE38__INCLUDED_)
