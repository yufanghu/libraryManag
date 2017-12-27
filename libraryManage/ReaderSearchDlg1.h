#if !defined(AFX_READERSEARCHDLG1_H__3479BE8F_8EA7_4F45_9B65_256B595CEFC2__INCLUDED_)
#define AFX_READERSEARCHDLG1_H__3479BE8F_8EA7_4F45_9B65_256B595CEFC2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ReaderSearchDlg1.h : header file
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
	CString	m_reader_card;
	CString	m_reader_id;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReaderSearchDlg)
	public:
	virtual void OnFinalRelease();
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
	// Generated OLE dispatch map functions
	//{{AFX_DISPATCH(CReaderSearchDlg)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READERSEARCHDLG1_H__3479BE8F_8EA7_4F45_9B65_256B595CEFC2__INCLUDED_)
