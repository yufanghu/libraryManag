#if !defined(AFX_BOOKADD_H__360D3DF2_06A1_47EF_91FB_DAE22CABB1BB__INCLUDED_)
#define AFX_BOOKADD_H__360D3DF2_06A1_47EF_91FB_DAE22CABB1BB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BookAdd.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBookAdd dialog

class CBookAdd : public CDialog
{
// Construction
public:
	CBookAdd(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBookAdd)
	enum { IDD = IDD_BOOK_ADD };
	CString	m_book_id;
	CString	m_book_name;
	CString	m_book_author;
	CString	m_book_print;
	CString	m_book_in;
	CString	m_book_price;
	CString	m_book_total;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBookAdd)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBookAdd)
	afx_msg void OnBookAdd();
	afx_msg void OnBookClear();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKADD_H__360D3DF2_06A1_47EF_91FB_DAE22CABB1BB__INCLUDED_)
