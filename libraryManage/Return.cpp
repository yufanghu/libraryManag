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
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CReturn::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReturn)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReturn, CDialog)
	//{{AFX_MSG_MAP(CReturn)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReturn message handlers
