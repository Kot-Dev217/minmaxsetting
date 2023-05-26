#pragma once


// minmaxbetDlg1 dialog

class minmaxbetDlg1 : public CDialogEx
{
	DECLARE_DYNAMIC(minmaxbetDlg1)

public:
	minmaxbetDlg1(CWnd* pParent = nullptr);   // standard constructor
	virtual ~minmaxbetDlg1();
	HWND m_hWnd;

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MINMAXBET_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedPrev();
	void LoadSettingsFromFile(LPCTSTR);
	void SaveSettingsToFile(LPCTSTR);
	void AddNumbersToComboBox(CComboBox* pComboBox, const CString numbers[], int numNumbers);

	CComboBox m_cMinKingofCards;
	CComboBox m_cMaxKingofCards;
	CComboBox m_cMinSharky;
	CComboBox m_cMaxSharky;
	CComboBox m_cMinLordoftheOcean;
	CComboBox m_cMaxLorrdoftheOcean;
	CComboBox m_cMinQueenofHearts;
	CComboBox m_cMaxQueenofHearts;
	CComboBox m_cMinTheMoneyGame;
	CComboBox m_cMaxTheMoneyGame;
	CComboBox m_cMinBookofRa;
	CComboBox m_cMaxBookofRa;
	CComboBox m_cMinJungle;
	CComboBox m_cMaxJungle;
	CComboBox m_cMinJokerBingo;
	CComboBox m_cMaxJokerBingo;
	CComboBox m_cMinHotFruits;
	CComboBox m_cMaxHotFruits;
	CComboBox m_cMinFruitCardX;
	CComboBox m_cMaxFruitCardX;
	CComboBox m_cMinMagicCard2;
	CComboBox m_cMaxMagicCard2;

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

	afx_msg void OnBnClickedCancel();
	afx_msg void OnSelchangeMinKingofcards();
	afx_msg void OnSelchangeMaxKingofcards();
	afx_msg void OnSelchangeMinSharky();
	afx_msg void OnSelchangeMaxSharky();
	afx_msg void OnSelchangeMinLordoftheocean();
	afx_msg void OnSelchangeMaxLordoftheocean();
	afx_msg void OnSelchangeMinQueenofhearts();
	afx_msg void OnSelchangeMaxQueenofhearts();
	afx_msg void OnSelchangeMinThemoneygame();
	afx_msg void OnSelchangeMaxThemoneygame();
	afx_msg void OnSelchangeMinBookofra();
	afx_msg void OnSelchangeMaxBookofra();
	afx_msg void OnSelchangeMinJungle();
	afx_msg void OnSelchangeMaxJungle();
	afx_msg void OnSelchangeMinJokerbingo();
	afx_msg void OnSelchangeMaxJokerbingo();
	afx_msg void OnSelchangeMinHotfruits();
	afx_msg void OnSelchangeMaxHotfruits();
	afx_msg void OnSelchangeMinFruitcardx();
	afx_msg void OnSelchangeMaxFruitcardx();
	afx_msg void OnSelchangeMinMagiccard2();
	afx_msg void OnSelchangeMaxMagiccard2();
};
