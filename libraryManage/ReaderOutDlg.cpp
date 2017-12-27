// ReaderOutDlg.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "ReaderOutDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReaderOutDlg dialog


CReaderOutDlg::CReaderOutDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CReaderOutDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReaderOutDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CReaderOutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReaderOutDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReaderOutDlg, CDialog)
	//{{AFX_MSG_MAP(CReaderOutDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReaderOutDlg message handlers
