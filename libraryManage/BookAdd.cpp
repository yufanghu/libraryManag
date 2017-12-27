// BookAdd.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "BookAdd.h"

// #ifdef _DEBUG
// #define new DEBUG_NEW
// #undef THIS_FILE
// static char THIS_FILE[] = __FILE__;
// #endif

#include "Book.h"
/////////////////////////////////////////////////////////////////////////////
// CBookAdd dialog


CBookAdd::CBookAdd(CWnd* pParent /*=NULL*/)
	: CDialog(CBookAdd::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBookAdd)
	m_book_id = _T("");
	m_book_name = _T("");
	m_book_author = _T("");
	m_book_print = _T("");
	m_book_in = _T("");
	m_book_price = _T("");
	m_book_total = _T("");
	//}}AFX_DATA_INIT
}


void CBookAdd::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBookAdd)
	DDX_Text(pDX, IDC_EDIT1, m_book_id);
	DDX_Text(pDX, IDC_EDIT2, m_book_name);
	DDX_Text(pDX, IDC_EDIT3, m_book_author);
	DDX_Text(pDX, IDC_EDIT4, m_book_print);
	DDX_Text(pDX, IDC_EDIT5, m_book_in);
	DDX_Text(pDX, IDC_EDIT6, m_book_price);
	DDX_Text(pDX, IDC_EDIT7, m_book_total);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookAdd, CDialog)
	//{{AFX_MSG_MAP(CBookAdd)
	ON_BN_CLICKED(IDC_BUTTON1, OnBookAdd)
	ON_BN_CLICKED(IDC_BUTTON2, OnBookClear)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBookAdd message handlers

void CBookAdd::OnBookAdd() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	struct bookInfo bInfo;
	bInfo.strBookId = m_book_id;
	bInfo.strBookName = m_book_name;
	bInfo.strBookPrice = m_book_price;
	bInfo.strBookPrint = m_book_print;
	bInfo.strBookAuthor = m_book_author;
	bInfo.isReturn = "1";
	bInfo.isValid = "1";
	CBook book;
	book.addBook(bInfo);
}

void CBookAdd::OnBookClear() 
{
	// TODO: Add your control notification handler code here
	m_book_id = _T("");
	m_book_name = _T("");
	m_book_author = _T("");
	m_book_print = _T("");
	m_book_in = _T("");
	m_book_price = _T("");
	m_book_total = _T("");
	UpdateData(FALSE);
	
}
