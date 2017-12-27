// BookAddDlg.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "BookAddDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBookAddDlg dialog


CBookAddDlg::CBookAddDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CBookAddDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBookAddDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CBookAddDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBookAddDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookAddDlg, CDialog)
	//{{AFX_MSG_MAP(CBookAddDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBookAddDlg message handlers
