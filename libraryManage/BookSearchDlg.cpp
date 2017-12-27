// BookSearchDlg.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "BookSearchDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBookSearchDlg dialog


CBookSearchDlg::CBookSearchDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CBookSearchDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBookSearchDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CBookSearchDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBookSearchDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookSearchDlg, CDialog)
	//{{AFX_MSG_MAP(CBookSearchDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBookSearchDlg message handlers
