// Book.h: interface for the CBook class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BOOK_H__F7F79DEB_A18C_402A_B95C_643116D79D42__INCLUDED_)
#define AFX_BOOK_H__F7F79DEB_A18C_402A_B95C_643116D79D42__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


struct BorrowInfo
{
	CString strName;
	CString strCompany;
	CString strId;
	CString strBookName;
	CString strBorrowDate;
	CString strBackDate;
	char  isReturn;
	

};

struct bookInfo
{
	int bookNumIN; //图书剩余数量
	int bookNumOut; //图书借出数量
};

class CBook  
{
public:
	CBook();
	virtual ~CBook();
void setBorrowInfo(struct BorrowInfo& info);
bool isFileExist(CString fileName);
int isIdExist(CString strName);
void  saveBorrowInfo(struct BorrowInfo& info);





//map< CString, vector< struct BorrowInfo > > mapBook; 
//map< CString, struct bookInfo > mapBookNum;

};

#endif // !defined(AFX_BOOK_H__F7F79DEB_A18C_402A_B95C_643116D79D42__INCLUDED_)
