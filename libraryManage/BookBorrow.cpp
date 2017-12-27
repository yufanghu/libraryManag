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
	m_borrow_company = _T("");


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
	DDV_MaxChars(pDX, m_borrow_id, 20);
	DDX_Text(pDX, IDC_EDIT4, m_borrow_book);
	DDX_Text(pDX, IDC_EDIT6, m_back_date);
	DDX_Text(pDX, IDC_EDIT2, m_borrow_company);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER1, m_borrow_date);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookBorrow, CDialog)
	//{{AFX_MSG_MAP(CBookBorrow)
	ON_WM_SIZE()
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, OnBookBorrow)
	ON_BN_CLICKED(IDC_BUTTON2, OnBorrowClear)
	ON_NOTIFY(DTN_DATETIMECHANGE, IDC_DATETIMEPICKER1, OnDatetimechangeDatetimepicker1)
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
		MessageBox("请输入借阅证号","提示");
		return;
	}

	if ( m_borrow_book.IsEmpty())
	{
		MessageBox("input book name", "提示");
		return;
	}

	//
	if ( m_borrow_reader.IsEmpty())
	{
		m_borrowInfo.strName= "";
	}
	else
	{
		m_borrowInfo.strName = 	m_borrow_reader;
	}
   
   
	if ( m_borrow_company.IsEmpty())
	{
		m_borrowInfo.strCompany = "";
	}
	else
	{
		m_borrowInfo.strCompany = m_borrow_company;
	}

	m_borrowInfo.strId = m_borrow_id;

	m_borrowInfo.strBookName = m_borrow_book;



 	CTime tt;
 	tt = m_borrow_date.GetTime();
 
 	CTime tt2;
 	tt2 = tt + 30*24*60*60;
 
 
 
 	 
 	 m_back_date.Format("%d/%02d/%02d",tt2.GetYear(),tt2.GetMonth(),tt2.GetDay());

	 CString  borr;
	 borr.Format("%d/%02d/%02d",tt.GetYear(),tt.GetMonth(),tt.GetDay());
	//borr.Format("%d",tt);


	 //SetDlgItemText(IDC_EDIT6, temp);

	 CString  backT;
	 backT.Format("%d",tt2);

	 m_borrowInfo.strBorrowDate = borr;
	 m_borrowInfo.strBackDate = backT;
	 m_borrowInfo.isReturn = _T("0");
	UpdateData(FALSE);
	m_book.setBorrowInfo(m_borrowInfo);

}

void CBookBorrow::OnBorrowClear() 
{
	// TODO: Add your control notification handler code here
	m_borrow_reader = _T("");
	m_borrow_id = _T("");
	m_borrow_book = _T("");
	m_back_date = _T("");
	m_borrow_company = _T("");
	m_back_date = _T("");

	UpdateData(FALSE);
}

void CBookBorrow::OnDatetimechangeDatetimepicker1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	CTime tt;
	tt = m_borrow_date.GetTime();
	
	CTime tt2;
	tt2 = tt + 30*24*60*60;
	
	m_back_date.Format("%d/%02d/%02d",tt2.GetYear(),tt2.GetMonth(),tt2.GetDay());
	// 	
	// 	CString  borr;
	// 	borr.Format("%d/%02d/%02d",tt.GetYear(),tt.GetMonth(),tt.GetDay());
	
	
	
	//SetDlgItemText(IDC_EDIT6, temp);
	UpdateData(FALSE);
	*pResult = 0;

}

BOOL CBookBorrow::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
