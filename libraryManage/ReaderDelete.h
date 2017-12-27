#if !defined(AFX_READERDELETE_H__C023269C_835F_4C68_B3C0_376466869485__INCLUDED_)
#define AFX_READERDELETE_H__C023269C_835F_4C68_B3C0_376466869485__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ReaderDelete.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CReaderDelete dialog

class CReaderDelete : public CDialog
{
// Construction
public:
	CReaderDelete(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CReaderDelete)
	enum { IDD = IDD_READER_DELETE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReaderDelete)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CReaderDelete)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READERDELETE_H__C023269C_835F_4C68_B3C0_376466869485__INCLUDED_)
