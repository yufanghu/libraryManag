// libraryManageView.h : interface of the CLibraryManageView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIBRARYMANAGEVIEW_H__F2C18A79_CCAE_40F1_8AF6_0941E1125013__INCLUDED_)
#define AFX_LIBRARYMANAGEVIEW_H__F2C18A79_CCAE_40F1_8AF6_0941E1125013__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CLibraryManageView : public CView
{
protected: // create from serialization only
	CLibraryManageView();
	DECLARE_DYNCREATE(CLibraryManageView)

// Attributes
public:
	CLibraryManageDoc* GetDocument();

// Operations
public:


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLibraryManageView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CLibraryManageView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
afx_msg void OnBorrow();
// Generated message map functions
protected:
	//{{AFX_MSG(CLibraryManageView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()


};

#ifndef _DEBUG  // debug version in libraryManageView.cpp
inline CLibraryManageDoc* CLibraryManageView::GetDocument()
   { return (CLibraryManageDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIBRARYMANAGEVIEW_H__F2C18A79_CCAE_40F1_8AF6_0941E1125013__INCLUDED_)
