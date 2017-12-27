#if !defined(AFX_BOOKSEARCHDLG_H__1E9D0A71_FE49_4013_974E_C612397D913E__INCLUDED_)
#define AFX_BOOKSEARCHDLG_H__1E9D0A71_FE49_4013_974E_C612397D913E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BookSearchDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBookSearchDlg dialog

class CBookSearchDlg : public CDialog
{
// Construction
public:
	CBookSearchDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBookSearchDlg)
	enum { IDD = IDD_BOOK_SEARCHE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBookSearchDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBookSearchDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKSEARCHDLG_H__1E9D0A71_FE49_4013_974E_C612397D913E__INCLUDED_)
