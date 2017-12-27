// ReaderModDlg.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "ReaderModDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReaderModDlg dialog


CReaderModDlg::CReaderModDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CReaderModDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReaderModDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CReaderModDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReaderModDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReaderModDlg, CDialog)
	//{{AFX_MSG_MAP(CReaderModDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReaderModDlg message handlers
