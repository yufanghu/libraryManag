// ReaderSearchDlg.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "ReaderSearchDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReaderSearchDlg dialog


CReaderSearchDlg::CReaderSearchDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CReaderSearchDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReaderSearchDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CReaderSearchDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReaderSearchDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReaderSearchDlg, CDialog)
	//{{AFX_MSG_MAP(CReaderSearchDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReaderSearchDlg message handlers
