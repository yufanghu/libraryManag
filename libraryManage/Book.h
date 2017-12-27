// Book.h: interface for the CBook class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BOOK_H__F7F79DEB_A18C_402A_B95C_643116D79D42__INCLUDED_)
#define AFX_BOOK_H__F7F79DEB_A18C_402A_B95C_643116D79D42__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define  MAX_LINE  1000

#include <VECTOR>
using namespace std;
struct BorrowInfo
{
	CString strName;
	CString strCompany;
	CString strId;
	CString strBookName;
	CString strBorrowDate;
	CString strBackDate;
	CString  isReturn;
	

};



struct bookInfo
{
	CString strBookName;
	CString strBookId;
	CString  strBookAuthor;
	CString	 strBookPrint;
	CString  strBookDate;
	CString strBookPrice;
	int bookNumIN; //图书剩余数量
	int bookNumOut; //图书借出数量
};

class CBook  
{
public:
	CBook();
	virtual ~CBook();
void setBorrowInfo(struct BorrowInfo& info);

int isIdExist(CString strName);
void  saveBorrowInfo(struct BorrowInfo info);
void  saveReturnInfo(struct BorrowInfo info);
int   outOfDate(CString strName, CString strBook, CTime back);
void  saveAllData();
int isBookExist(CString bookName);
bool deleteBook(struct BorrowInfo info);

vector<struct BorrowInfo>  getAllData(); 



private:







//map< CString, vector< struct BorrowInfo > > mapBook; 
//map< CString, struct bookInfo > mapBookNum;

};

#endif // !defined(AFX_BOOK_H__F7F79DEB_A18C_402A_B95C_643116D79D42__INCLUDED_)
