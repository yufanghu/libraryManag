// Return.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "Return.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReturn dialog


CReturn::CReturn(CWnd* pParent /*=NULL*/)
	: CDialog(CReturn::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReturn)
	m_return_name = _T("");
	m_return_id = _T("");
	m_return_book = _T("");
	m_return_money = _T("");
	//}}AFX_DATA_INIT
}


void CReturn::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReturn)
	DDX_Text(pDX, IDC_EDIT1, m_return_name);
	DDX_Text(pDX, IDC_EDIT2, m_return_id);
	DDX_Text(pDX, IDC_EDIT3, m_return_book);
	DDX_Text(pDX, IDC_EDIT7, m_return_money);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER1, m_return_dat);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReturn, CDialog)
	//{{AFX_MSG_MAP(CReturn)
	ON_BN_CLICKED(IDC_BUTTON1, OnReturn)
	ON_BN_CLICKED(IDC_BUTTON2, OnClear)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReturn message handlers

void CReturn::OnReturn() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	bool bExist = m_book.isIdExist(m_return_id);
	if ( bExist == 0)
	{
		MessageBox("not exist","ok");
	}
	
	
}

void CReturn::OnClear() 
{
	// TODO: Add your control notification handler code here
	m_return_name = _T("");
	m_return_id = _T("");
	m_return_book = _T("");
	m_return_money = _T("");
	UpdateData(FALSE);
}
