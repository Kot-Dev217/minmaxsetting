
// minmaxbetDlg.h : header file
//

#pragma once


// CminmaxbetDlg dialog
class CminmaxbetDlg : public CDialogEx
{
// Construction
public:
	CminmaxbetDlg(CWnd* pParent = nullptr);	// standard constructor
	void LoadSettingsFromFile(LPCTSTR);
	void SaveSettingsToFile(LPCTSTR);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MINMAXBET_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	HWND m_hWnd;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedNext();
private:
	int m_iMinAlwaysHot;
	int m_iMinUltraHot;
	int m_iMinSizzlingHot;
	int m_iMinAmericanPoker2;
	int m_iMinHotTarget;
	int m_iMinChipRunner;
	int m_iMinSupraHot;
	int m_iMinDolphinPearl;
	int m_iMinWildSafari;
	int m_iMinBeetleManla;
	int m_iMinRollerCoaster;
	int m_iMinLuckyLadyCharm;
	int m_iMinKingOfCards;
	int m_iMinSharky;
	int m_iMinLordoftheOcean;
	int m_iMinQueenofHearts;
	int m_iMinTheMoneyGame;
	int m_iMinBookofRa;
	int m_iMinJungle;
	int m_iMinJokerBingo;
	int m_iMinHotFruits;
	int m_iMinFruitCardX;
	int m_iMinMagicCard2;

	int m_iMaxAlwaysHot;
	int m_iMaxUltraHot;
	int m_iMaxSizzlingHot;
	int m_iMaxAmericanPoker2;
	int m_iMaxHotTarget;
	int m_iMaxChipRunner;
	int m_iMaxSupraHot;
	int m_iMaxDolphinPearl;
	int m_iMaxWildSafari;
	int m_iMaxBeetleManla;
	int m_iMaxRollerCoaster;
	int m_iMaxLuckyLadyCharm;
	int m_iMaxKingOfCards;
	int m_iMaxSharky;
	int m_iMaxLordoftheOcean;
	int m_iMaxQueenofHearts;
	int m_iMaxTheMoneyGame;
	int m_iMaxBookofRa;
	int m_iMaxJungle;
	int m_iMaxJokerBingo;
	int m_iMaxHotFruits;
	int m_iMaxFruitCardX;
	int m_iMaxMagicCard2;

public:
	afx_msg void OnBnClickedCancel();
	afx_msg void OnSelchangeMinAlwayshot();
	afx_msg void OnSelchangeMaxAlwayshot();
	afx_msg void OnSelchangeMinUltrahot();
	afx_msg void OnSelchangeMaxUltrahot();
	afx_msg void OnSelchangeMinSizzlinghot();
	afx_msg void OnSelchangeMaxSizzlinghot();
	afx_msg void OnSelchangeMinAmericanpoker2();
	afx_msg void OnSelchangeMaxAmericanpoker2();
	afx_msg void OnSelchangeMinHottarget();
	afx_msg void OnSelchangeMaxHottarget();
	afx_msg void OnSelchangeMinChiprunner();
	afx_msg void OnSelchangeMaxChiprunner();
	afx_msg void OnSelchangeMinSuprahot();
	afx_msg void OnSelchangeMaxSuprahot();
	afx_msg void OnSelchangeMinDolphinpearl();
	afx_msg void OnSelchangeMaxDolphinpearl();
	afx_msg void OnSelchangeMinWildsafari();
	afx_msg void OnSelchangeMaxWildsafari();
	afx_msg void OnSelchangeMinBeetlemanla();
	afx_msg void OnSelchangeMaxBeetlemanla();
	afx_msg void OnSelchangeMinRollercoaster();
	afx_msg void OnSelchangeMaxRollercoaster();
	afx_msg void OnSelchangeMinLuckyladycharm();
	afx_msg void OnSelchangeMaxLuckyladycharm();
};
