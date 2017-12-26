// BookBorrow.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "BookBorrow.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBookBorrow dialog


CBookBorrow::CBookBorrow(CWnd* pParent /*=NULL*/)
	: CDialog(CBookBorrow::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBookBorrow)
	m_borrow_reader = _T("");
	m_borrow_id = _T("");
	m_borrow_book = _T("");
	m_back_date = _T("");
	m_borrow_date = 0;
	//}}AFX_DATA_INIT
}


void CBookBorrow::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBookBorrow)
	DDX_Control(pDX, IDC_BUTTON2, m_clear);
	DDX_Control(pDX, IDC_BUTTON1, m_sure);
	DDX_Text(pDX, IDC_EDIT1, m_borrow_reader);
	DDV_MaxChars(pDX, m_borrow_reader, 30);
	DDX_Text(pDX, IDC_EDIT3, m_borrow_id);
	DDX_Text(pDX, IDC_EDIT4, m_borrow_book);
	DDX_Text(pDX, IDC_EDIT6, m_back_date);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER1, m_borrow_date);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookBorrow, CDialog)
	//{{AFX_MSG_MAP(CBookBorrow)
	ON_WM_SIZE()
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, OnBookBorrow)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBookBorrow message handlers

int CBookBorrow::DoModal() 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CDialog::DoModal();
}

void CBookBorrow::OnSize(UINT nType, int cx, int cy) 
{
	CDialog::OnSize(nType, cx, cy);
	CRect rect;
	GetClientRect(rect);
	

	// TODO: Add your message handler code here
	
}

void CBookBorrow::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	CRect rect;
	GetClientRect(rect);
	//dc.
	// Do not call CDialog::OnPaint() for painting messages
}

void CBookBorrow::OnBookBorrow() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	if (m_borrow_id.IsEmpty() )
	{
		MessageBox("请输入借阅证号 id","提示");
		return;
	}
	
}
