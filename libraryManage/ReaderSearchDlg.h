#if !defined(AFX_READERSEARCHDLG_H__4651298C_FCF5_4C29_A4FB_347B97729870__INCLUDED_)
#define AFX_READERSEARCHDLG_H__4651298C_FCF5_4C29_A4FB_347B97729870__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ReaderSearchDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CReaderSearchDlg dialog

class CReaderSearchDlg : public CDialog
{
// Construction
public:
	CReaderSearchDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CReaderSearchDlg)
	enum { IDD = IDD_READER_SEARCH };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReaderSearchDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CReaderSearchDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READERSEARCHDLG_H__4651298C_FCF5_4C29_A4FB_347B97729870__INCLUDED_)
