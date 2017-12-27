// ReaderAddDlg.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "ReaderAddDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReaderAddDlg dialog


CReaderAddDlg::CReaderAddDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CReaderAddDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReaderAddDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CReaderAddDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReaderAddDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReaderAddDlg, CDialog)
	//{{AFX_MSG_MAP(CReaderAddDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReaderAddDlg message handlers
