// libraryManageView.cpp : implementation of the CLibraryManageView class
//

#include "stdafx.h"
#include "libraryManage.h"

#include "libraryManageDoc.h"
#include "libraryManageView.h"

#include "BookBorrow.h"
#include "resource.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageView

IMPLEMENT_DYNCREATE(CLibraryManageView, CView)

BEGIN_MESSAGE_MAP(CLibraryManageView, CView)
	//{{AFX_MSG_MAP(CLibraryManageView)
	ON_WM_CREATE()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
	ON_COMMAND(ID_MENU_BORROW, OnBorrow)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageView construction/destruction
CBookBorrow*  borr;
CLibraryManageView::CLibraryManageView()
{
	// TODO: add construction code here
	borr = new CBookBorrow();

}

CLibraryManageView::~CLibraryManageView()
{
}

BOOL CLibraryManageView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageView drawing

void CLibraryManageView::OnDraw(CDC* pDC)
{
	CLibraryManageDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CRect rect;
	GetClientRect(rect);

	pDC->FillSolidRect(rect, RGB(240,240,240));
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageView diagnostics

#ifdef _DEBUG
void CLibraryManageView::AssertValid() const
{
	CView::AssertValid();
}

void CLibraryManageView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CLibraryManageDoc* CLibraryManageView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLibraryManageDoc)));
	return (CLibraryManageDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageView message handlers

void CLibraryManageView::OnBorrow()
{
	
// 	CRect client;
// 	GetClientRect(client);

  // borr.DoModal();
	borr->ShowWindow(SW_SHOW);
	
}

BOOL CLibraryManageView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CWnd::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
}

int CLibraryManageView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	borr->Create(IDD_BORROW, this);
	borr->ShowWindow(SW_SHOW);

//	borr->CenterWindow(this);
	
	return 0;
}

void CLibraryManageView::OnSize(UINT nType, int cx, int cy) 
{
	CView::OnSize(nType, cx, cy);
	CRect rect;
	GetClientRect(rect);
	//borr->MoveWindow(rect);
	borr->CenterWindow(this);
	// TODO: Add your message handler code here
	
}
