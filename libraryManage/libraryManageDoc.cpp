// libraryManageDoc.cpp : implementation of the CLibraryManageDoc class
//

#include "stdafx.h"
#include "libraryManage.h"

#include "libraryManageDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageDoc

IMPLEMENT_DYNCREATE(CLibraryManageDoc, CDocument)

BEGIN_MESSAGE_MAP(CLibraryManageDoc, CDocument)
	//{{AFX_MSG_MAP(CLibraryManageDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageDoc construction/destruction

CLibraryManageDoc::CLibraryManageDoc()
{
	// TODO: add one-time construction code here

}

CLibraryManageDoc::~CLibraryManageDoc()
{
}

BOOL CLibraryManageDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CLibraryManageDoc serialization

void CLibraryManageDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageDoc diagnostics

#ifdef _DEBUG
void CLibraryManageDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CLibraryManageDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageDoc commands
