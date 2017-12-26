// BookDelete.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "BookDelete.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBookDelete dialog


CBookDelete::CBookDelete(CWnd* pParent /*=NULL*/)
	: CDialog(CBookDelete::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBookDelete)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CBookDelete::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBookDelete)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookDelete, CDialog)
	//{{AFX_MSG_MAP(CBookDelete)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBookDelete message handlers
