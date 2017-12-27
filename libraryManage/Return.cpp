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
	m_book_id = _T("");
	//}}AFX_DATA_INIT
}


void CReturn::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReturn)
 	DDX_Text(pDX, IDC_EDIT2, m_return_id);
 	DDX_Text(pDX, IDC_EDIT3, m_return_book);
 	DDX_Text(pDX, IDC_EDIT7, m_return_money);
 	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER1, m_return_dat);
	DDX_Text(pDX, IDC_EDIT1, m_book_id);
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
	double dMoney = 0.0;
 	int bExist = m_reader.isReaderExist(m_return_id);
 	if ( bExist == 0)
 	{
 		MessageBox("读者信息不存在","提示");
	}

	m_borrowInfo.strId = m_return_id;
	m_borrowInfo.strBookName = m_return_book;
	m_borrowInfo.strBackDate;
	CTime tt;
 	tt = m_return_dat.GetTime();
	CString  borr;
	borr.Format("%d/%02d/%02d",tt.GetYear(),tt.GetMonth(),tt.GetDay());  //还书日期

	int day = m_book.outOfDate(m_return_id,m_return_book,tt);
	if ( day > 0)
	{
		dMoney = day * 0.1;
	}

	

	m_reader.saveReturnInfo(m_borrowInfo);
	CString strMoney;
	strMoney.Format("%.2f",dMoney);
	m_return_money = strMoney;

	struct bookInfo m_bookMan;
	m_bookMan.strBookName = m_return_book;
	m_bookMan.isReturn = _T("1");
	m_bookMan.isValid = _T("1");
	m_bookMan.strBookId = m_book_id;
    m_book.saveReturnInfo(m_bookMan);
	UpdateData(FALSE);
	
	
	
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
