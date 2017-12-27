// BookDelete.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "BookDelete.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBookDelete dialog


CBookDelete::CBookDelete(CWnd* pParent /*=NULL*/)
	: CDialog(CBookDelete::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBookDelete)
	m_book_id = _T("");
	m_book_name = _T("");
	m_book_info = _T("");
	//}}AFX_DATA_INIT
}


void CBookDelete::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBookDelete)
	DDX_Text(pDX, IDC_EDIT1, m_book_id);
	DDX_Text(pDX, IDC_EDIT2, m_book_name);
	DDX_Text(pDX, IDC_EDIT3, m_book_info);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookDelete, CDialog)
	//{{AFX_MSG_MAP(CBookDelete)
	ON_BN_CLICKED(IDOK, OnDelete)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBookDelete message handlers

void CBookDelete::OnDelete() 
{

	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	int t =	m_book.isBookExist(m_book_name);
	if ( t == 0)
	{
		MessageBox("图书信息不存在","提示");
		return;
	}


	struct bookInfo info;
	info.strBookName = m_book_name;
	info.strBookId = m_book_id;
	info.isReturn = "1";
	info.isValid = "0";
	bool res = m_book.deleteBook(info);
	
	
}
