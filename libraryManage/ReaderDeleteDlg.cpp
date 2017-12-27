// ReaderDeleteDlg.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "ReaderDeleteDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReaderDeleteDlg dialog


CReaderDeleteDlg::CReaderDeleteDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CReaderDeleteDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReaderDeleteDlg)
	m_reader_id = _T("");
	m_reader_info = _T("");
	//}}AFX_DATA_INIT
}


void CReaderDeleteDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReaderDeleteDlg)
	DDX_Text(pDX, IDC_EDIT1, m_reader_id);
	DDX_Text(pDX, IDC_EDIT2, m_reader_info);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReaderDeleteDlg, CDialog)
	//{{AFX_MSG_MAP(CReaderDeleteDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReaderDeleteDlg message handlers
