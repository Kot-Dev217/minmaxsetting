
// minmaxbetDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "minmaxbet.h"
#include "minmaxbetDlg.h"
#include "minmaxbetDlg1.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CminmaxbetDlg dialog



CminmaxbetDlg::CminmaxbetDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MINMAXBET_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CminmaxbetDlg::DoDataExchange(CDataExchange* pDX)
{
	DDX_CBIndex(pDX, IDC_MIN_ALWAYSHOT, m_iMinAlwaysHot);
	DDX_CBIndex(pDX, IDC_MAX_ALWAYSHOT, m_iMaxAlwaysHot);

	DDX_CBIndex(pDX, IDC_MIN_ULTRAHOT, m_iMinUltraHot);
	DDX_CBIndex(pDX, IDC_MAX_ULTRAHOT, m_iMaxUltraHot);

	DDX_CBIndex(pDX, IDC_MIN_SIZZLINGHOT, m_iMinSizzlingHot);
	DDX_CBIndex(pDX, IDC_MAX_SIZZLINGHOT, m_iMaxSizzlingHot);

	DDX_CBIndex(pDX, IDC_MIN_AMERICANPOKER2, m_iMinAmericanPoker2);
	DDX_CBIndex(pDX, IDC_MAX_AMERICANPOKER2, m_iMaxAmericanPoker2);

	DDX_CBIndex(pDX, IDC_MIN_HOTTARGET, m_iMinHotTarget);
	DDX_CBIndex(pDX, IDC_MAX_HOTTARGET, m_iMaxHotTarget);

	DDX_CBIndex(pDX, IDC_MIN_CHIPRUNNER, m_iMinChipRunner);
	DDX_CBIndex(pDX, IDC_MAX_CHIPRUNNER, m_iMaxChipRunner);

	DDX_CBIndex(pDX, IDC_MIN_SUPRAHOT, m_iMinSupraHot);
	DDX_CBIndex(pDX, IDC_MAX_SUPRAHOT, m_iMaxSupraHot);

	DDX_CBIndex(pDX, IDC_MIN_DOLPHINPEARL, m_iMinDolphinPearl);
	DDX_CBIndex(pDX, IDC_MAX_DOLPHINPEARL, m_iMaxDolphinPearl);

	DDX_CBIndex(pDX, IDC_MIN_WILDSAFARI, m_iMinWildSafari);
	DDX_CBIndex(pDX, IDC_MAX_WILDSAFARI, m_iMaxWildSafari);

	DDX_CBIndex(pDX, IDC_MIN_BEETLEMANLA, m_iMinBeetleManla);
	DDX_CBIndex(pDX, IDC_MAX_BEETLEMANLA, m_iMaxBeetleManla);

	DDX_CBIndex(pDX, IDC_MIN_ROLLERCOASTER, m_iMinRollerCoaster);
	DDX_CBIndex(pDX, IDC_MAX_ROLLERCOASTER, m_iMaxRollerCoaster);

	DDX_CBIndex(pDX, IDC_MIN_LUCKYLADYCHARM, m_iMinLuckyLadyCharm);
	DDX_CBIndex(pDX, IDC_MAX_LUCKYLADYCHARM, m_iMaxLuckyLadyCharm);


	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CminmaxbetDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDNEXT, &CminmaxbetDlg::OnBnClickedNext)
	ON_BN_CLICKED(IDCANCEL, &CminmaxbetDlg::OnBnClickedCancel)
	ON_CBN_SELCHANGE(IDC_MIN_ALWAYSHOT, &CminmaxbetDlg::OnSelchangeMinAlwayshot)
	ON_CBN_SELCHANGE(IDC_MAX_ALWAYSHOT, &CminmaxbetDlg::OnSelchangeMaxAlwayshot)
	ON_CBN_SELCHANGE(IDC_MIN_ULTRAHOT, &CminmaxbetDlg::OnSelchangeMinUltrahot)
	ON_CBN_SELCHANGE(IDC_MAX_ULTRAHOT, &CminmaxbetDlg::OnSelchangeMaxUltrahot)
	ON_CBN_SELCHANGE(IDC_MIN_SIZZLINGHOT, &CminmaxbetDlg::OnSelchangeMinSizzlinghot)
	ON_CBN_SELCHANGE(IDC_MAX_SIZZLINGHOT, &CminmaxbetDlg::OnSelchangeMaxSizzlinghot)
	ON_CBN_SELCHANGE(IDC_MIN_AMERICANPOKER2, &CminmaxbetDlg::OnSelchangeMinAmericanpoker2)
	ON_CBN_SELCHANGE(IDC_MAX_AMERICANPOKER2, &CminmaxbetDlg::OnSelchangeMaxAmericanpoker2)
	ON_CBN_SELCHANGE(IDC_MIN_HOTTARGET, &CminmaxbetDlg::OnSelchangeMinHottarget)
	ON_CBN_SELCHANGE(IDC_MAX_HOTTARGET, &CminmaxbetDlg::OnSelchangeMaxHottarget)
	ON_CBN_SELCHANGE(IDC_MIN_CHIPRUNNER, &CminmaxbetDlg::OnSelchangeMinChiprunner)
	ON_CBN_SELCHANGE(IDC_MAX_CHIPRUNNER, &CminmaxbetDlg::OnSelchangeMaxChiprunner)
	ON_CBN_SELCHANGE(IDC_MIN_SUPRAHOT, &CminmaxbetDlg::OnSelchangeMinSuprahot)
	ON_CBN_SELCHANGE(IDC_MAX_SUPRAHOT, &CminmaxbetDlg::OnSelchangeMaxSuprahot)
	ON_CBN_SELCHANGE(IDC_MIN_DOLPHINPEARL, &CminmaxbetDlg::OnSelchangeMinDolphinpearl)
	ON_CBN_SELCHANGE(IDC_MAX_DOLPHINPEARL, &CminmaxbetDlg::OnSelchangeMaxDolphinpearl)
	ON_CBN_SELCHANGE(IDC_MIN_WILDSAFARI, &CminmaxbetDlg::OnSelchangeMinWildsafari)
	ON_CBN_SELCHANGE(IDC_MAX_WILDSAFARI, &CminmaxbetDlg::OnSelchangeMaxWildsafari)
	ON_CBN_SELCHANGE(IDC_MIN_BEETLEMANLA, &CminmaxbetDlg::OnSelchangeMinBeetlemanla)
	ON_CBN_SELCHANGE(IDC_MAX_BEETLEMANLA, &CminmaxbetDlg::OnSelchangeMaxBeetlemanla)
	ON_CBN_SELCHANGE(IDC_MIN_ROLLERCOASTER, &CminmaxbetDlg::OnSelchangeMinRollercoaster)
	ON_CBN_SELCHANGE(IDC_MAX_ROLLERCOASTER, &CminmaxbetDlg::OnSelchangeMaxRollercoaster)
	ON_CBN_SELCHANGE(IDC_MIN_LUCKYLADYCHARM, &CminmaxbetDlg::OnSelchangeMinLuckyladycharm)
	ON_CBN_SELCHANGE(IDC_MAX_LUCKYLADYCHARM, &CminmaxbetDlg::OnSelchangeMaxLuckyladycharm)
END_MESSAGE_MAP()


// CminmaxbetDlg message handlers
void AddNumbersToComboBox(CComboBox* pComboBox, const CString numbers[], int numNumbers)
{
	for (int i = 0; i < numNumbers; i++)
	{
		pComboBox->AddString(numbers[i]);
	}

	pComboBox->SetCurSel(0);
}

BOOL CminmaxbetDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	m_hWnd = GetSafeHwnd();
	::SetWindowPos(m_hWnd, HWND_TOPMOST, 0, 0, 800, 600, SWP_NOZORDER | SWP_SHOWWINDOW | SWP_NOACTIVATE);
	

	const CString rollerCoasterNumbers[] = { _T("10"), _T("20"), _T("30"), _T("50"), _T("100"), _T("200"), _T("500"), _T("1000"), _T("2000") };
	const int numRollerCoasterNumbers = _countof(rollerCoasterNumbers);

	CComboBox* pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_ALWAYSHOT);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_ALWAYSHOT);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_ULTRAHOT);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_ULTRAHOT);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_SIZZLINGHOT);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_SIZZLINGHOT);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_AMERICANPOKER2);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_AMERICANPOKER2);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_HOTTARGET);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_HOTTARGET);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_CHIPRUNNER);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_CHIPRUNNER);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_SUPRAHOT);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_SUPRAHOT);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_DOLPHINPEARL);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_DOLPHINPEARL);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_WILDSAFARI);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_WILDSAFARI);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_BEETLEMANLA);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_BEETLEMANLA);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_ROLLERCOASTER);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_ROLLERCOASTER);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_LUCKYLADYCHARM);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_LUCKYLADYCHARM);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	m_iMinAlwaysHot = 0;
	m_iMinUltraHot = 0;
	m_iMinSizzlingHot = 0;
	m_iMinAmericanPoker2 = 0;
	m_iMinHotTarget = 0;
	m_iMinChipRunner = 0;
	m_iMinSupraHot = 0;
	m_iMinDolphinPearl = 0;
	m_iMinWildSafari = 0;
	m_iMinBeetleManla = 0;
	m_iMinRollerCoaster = 0;
	m_iMinLuckyLadyCharm = 0;
	m_iMinKingOfCards = 0;
	m_iMinSharky = 0;
	m_iMinLordoftheOcean = 0;
	m_iMinQueenofHearts = 0;
	m_iMinTheMoneyGame = 0;
	m_iMinBookofRa = 0;
	m_iMinJungle = 0;
	m_iMinJokerBingo = 0;
	m_iMinHotFruits = 0;
	m_iMinFruitCardX = 0;
	m_iMinMagicCard2 = 0;

	m_iMaxAlwaysHot = 0;
	m_iMaxUltraHot = 0;
	m_iMaxSizzlingHot = 0;
	m_iMaxAmericanPoker2 = 0;
	m_iMaxHotTarget = 0;
	m_iMaxChipRunner = 0;
	m_iMaxSupraHot = 0;
	m_iMaxDolphinPearl = 0;
	m_iMaxWildSafari = 0;
	m_iMaxBeetleManla = 0;
	m_iMaxRollerCoaster = 0;
	m_iMaxLuckyLadyCharm = 0;
	m_iMaxKingOfCards = 0;
	m_iMaxSharky = 0;
	m_iMaxLordoftheOcean = 0;
	m_iMaxQueenofHearts = 0;
	m_iMaxTheMoneyGame = 0;
	m_iMaxBookofRa = 0;
	m_iMaxJungle = 0;
	m_iMaxJokerBingo = 0;
	m_iMaxHotFruits = 0;
	m_iMaxFruitCardX = 0;
	m_iMaxMagicCard2 = 0;


	LoadSettingsFromFile(L"./magicn/minmaxsetting.dat");
	
	

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CminmaxbetDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CminmaxbetDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CminmaxbetDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CminmaxbetDlg::OnBnClickedNext()
{
	SaveSettingsToFile(L"./magicn/minmaxsetting.dat");

	EndDialog(IDCANCEL);
	minmaxbetDlg1 dlg;
	dlg.DoModal();
}

void CminmaxbetDlg::LoadSettingsFromFile(LPCTSTR lpszPath)
{
	CFile file;
	if (file.Open(lpszPath, CFile::modeRead))
	{
		CArchive ar(&file, CArchive::load);

		ar >> m_iMinAlwaysHot;
		ar >> m_iMaxAlwaysHot;

		ar >> m_iMinUltraHot;
		ar >> m_iMaxUltraHot;

		ar >> m_iMinSizzlingHot;
		ar >> m_iMaxSizzlingHot;

		ar >> m_iMinAmericanPoker2;
		ar >> m_iMaxAmericanPoker2;

		ar >> m_iMinHotTarget;
		ar >> m_iMaxHotTarget;

		ar >> m_iMinChipRunner;
		ar >> m_iMaxChipRunner;

		ar >> m_iMinSupraHot;
		ar >> m_iMaxSupraHot;

		ar >> m_iMinDolphinPearl;
		ar >> m_iMaxDolphinPearl;

		ar >> m_iMinWildSafari;
		ar >> m_iMaxWildSafari;

		ar >> m_iMinBeetleManla;
		ar >> m_iMaxBeetleManla;

		ar >> m_iMinRollerCoaster;
		ar >> m_iMaxRollerCoaster;

		ar >> m_iMinLuckyLadyCharm;
		ar >> m_iMaxLuckyLadyCharm;

		// Next page
		ar >> m_iMinKingOfCards;
		ar >> m_iMaxKingOfCards;

		ar >> m_iMinSharky;
		ar >> m_iMaxSharky;

		ar >> m_iMinLordoftheOcean;
		ar >> m_iMaxLordoftheOcean;

		ar >> m_iMinQueenofHearts;
		ar >> m_iMaxQueenofHearts;

		ar >> m_iMinTheMoneyGame;
		ar >> m_iMaxTheMoneyGame;

		ar >> m_iMinBookofRa;
		ar >> m_iMaxBookofRa;

		ar >> m_iMinJungle;
		ar >> m_iMaxJungle;

		ar >> m_iMinJokerBingo;
		ar >> m_iMaxJokerBingo;

		ar >> m_iMinHotFruits;
		ar >> m_iMaxHotFruits;

		ar >> m_iMinFruitCardX;
		ar >> m_iMaxFruitCardX;

		ar >> m_iMinMagicCard2;
		ar >> m_iMaxMagicCard2;


		ar.Close();
		file.Close();
	}

	// Set min combobox from file
	CComboBox* pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_ALWAYSHOT);
	pComboBox->SetCurSel(m_iMinAlwaysHot);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_ULTRAHOT);
	pComboBox->SetCurSel(m_iMinUltraHot);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_SIZZLINGHOT);
	pComboBox->SetCurSel(m_iMinSizzlingHot);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_AMERICANPOKER2);
	pComboBox->SetCurSel(m_iMinAmericanPoker2);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_HOTTARGET);
	pComboBox->SetCurSel(m_iMinHotTarget);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_CHIPRUNNER);
	pComboBox->SetCurSel(m_iMinChipRunner);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_SUPRAHOT);
	pComboBox->SetCurSel(m_iMinSupraHot);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_DOLPHINPEARL);
	pComboBox->SetCurSel(m_iMinDolphinPearl);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_WILDSAFARI);
	pComboBox->SetCurSel(m_iMinWildSafari);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_BEETLEMANLA);
	pComboBox->SetCurSel(m_iMinBeetleManla);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_ROLLERCOASTER);
	pComboBox->SetCurSel(m_iMinRollerCoaster);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_LUCKYLADYCHARM);
	pComboBox->SetCurSel(m_iMinLuckyLadyCharm);

	// Set max combobox from file
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_ALWAYSHOT);
	pComboBox->SetCurSel(m_iMaxAlwaysHot);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_ULTRAHOT);
	pComboBox->SetCurSel(m_iMaxUltraHot);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_SIZZLINGHOT);
	pComboBox->SetCurSel(m_iMaxSizzlingHot);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_AMERICANPOKER2);
	pComboBox->SetCurSel(m_iMaxAmericanPoker2);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_HOTTARGET);
	pComboBox->SetCurSel(m_iMaxHotTarget);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_CHIPRUNNER);
	pComboBox->SetCurSel(m_iMaxChipRunner);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_SUPRAHOT);
	pComboBox->SetCurSel(m_iMaxSupraHot);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_DOLPHINPEARL);
	pComboBox->SetCurSel(m_iMaxDolphinPearl);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_WILDSAFARI);
	pComboBox->SetCurSel(m_iMaxWildSafari);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_BEETLEMANLA);
	pComboBox->SetCurSel(m_iMaxBeetleManla);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_ROLLERCOASTER);
	pComboBox->SetCurSel(m_iMaxRollerCoaster);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_LUCKYLADYCHARM);
	pComboBox->SetCurSel(m_iMaxLuckyLadyCharm);
}

void CminmaxbetDlg::SaveSettingsToFile(LPCTSTR lpszPath)
{
	// Get Min Combobox status to be saved
	CComboBox* pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_ALWAYSHOT);
	m_iMinAlwaysHot = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_ULTRAHOT);
	m_iMinUltraHot = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_SIZZLINGHOT);
	m_iMinSizzlingHot = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_AMERICANPOKER2);
	m_iMinAmericanPoker2 = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_HOTTARGET);
	m_iMinHotTarget = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_CHIPRUNNER);
	m_iMinChipRunner = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_SUPRAHOT);
	m_iMinSupraHot = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_DOLPHINPEARL);
	m_iMinDolphinPearl = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_WILDSAFARI);
	m_iMinWildSafari = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_BEETLEMANLA);
	m_iMinBeetleManla = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_ROLLERCOASTER);
	m_iMinRollerCoaster = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_LUCKYLADYCHARM);
	m_iMinLuckyLadyCharm = pComboBox->GetCurSel();

	// Get Max Combobox status to be saved
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_ALWAYSHOT);
	m_iMaxAlwaysHot = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_ULTRAHOT);
	m_iMaxUltraHot = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_SIZZLINGHOT);
	m_iMaxSizzlingHot = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_AMERICANPOKER2);
	m_iMaxAmericanPoker2 = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_HOTTARGET);
	m_iMaxHotTarget = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_CHIPRUNNER);
	m_iMaxChipRunner = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_SUPRAHOT);
	m_iMaxSupraHot = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_DOLPHINPEARL);
	m_iMaxDolphinPearl = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_WILDSAFARI);
	m_iMaxWildSafari = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_BEETLEMANLA);
	m_iMaxBeetleManla = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_ROLLERCOASTER);
	m_iMaxRollerCoaster = pComboBox->GetCurSel();
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_LUCKYLADYCHARM);
	m_iMaxLuckyLadyCharm = pComboBox->GetCurSel();

	CFile file(lpszPath, CFile::modeCreate | CFile::modeWrite);
	CArchive ar(&file, CArchive::store);

	ar << m_iMinAlwaysHot;
	ar << m_iMaxAlwaysHot;

	ar << m_iMinUltraHot;
	ar << m_iMaxUltraHot;

	ar << m_iMinSizzlingHot;
	ar << m_iMaxSizzlingHot;
	
	ar << m_iMinAmericanPoker2;
	ar << m_iMaxAmericanPoker2;
	
	ar << m_iMinHotTarget;
	ar << m_iMaxHotTarget;
	
	ar << m_iMinChipRunner;
	ar << m_iMaxChipRunner;
	
	ar << m_iMinSupraHot;
	ar << m_iMaxSupraHot;
	
	ar << m_iMinDolphinPearl;
	ar << m_iMaxDolphinPearl;
	
	ar << m_iMinWildSafari;
	ar << m_iMaxWildSafari;
	
	ar << m_iMinBeetleManla;
	ar << m_iMaxBeetleManla;
	
	ar << m_iMinRollerCoaster;
	ar << m_iMaxRollerCoaster;
	
	ar << m_iMinLuckyLadyCharm;
	ar << m_iMaxLuckyLadyCharm;

	// Next page
	ar << m_iMinKingOfCards;
	ar << m_iMaxKingOfCards;
	
	ar << m_iMinSharky;
	ar << m_iMaxSharky;
	
	ar << m_iMinLordoftheOcean;
	ar << m_iMaxLordoftheOcean;
	
	ar << m_iMinQueenofHearts;
	ar << m_iMaxQueenofHearts;
	
	ar << m_iMinTheMoneyGame;
	ar << m_iMaxTheMoneyGame;
	
	ar << m_iMinBookofRa;
	ar << m_iMaxBookofRa;
	
	ar << m_iMinJungle;
	ar << m_iMaxJungle;
	
	
	ar << m_iMinJokerBingo;
	ar << m_iMaxJokerBingo;
	
	ar << m_iMinHotFruits;
	ar << m_iMaxHotFruits;
	
	ar << m_iMinFruitCardX;
	ar << m_iMaxFruitCardX;
	
	ar << m_iMinMagicCard2;
	ar << m_iMaxMagicCard2;

	ar.Close();
	file.Close();
}

void CminmaxbetDlg::OnBnClickedCancel()
{
	SaveSettingsToFile(L"./magicn/minmaxsetting.dat");

	CDialogEx::OnCancel();
}


void CminmaxbetDlg::OnSelchangeMinAlwayshot()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_ALWAYSHOT);
	m_iMinAlwaysHot = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_ALWAYSHOT);
	m_iMaxAlwaysHot = pComboBoxMax->GetCurSel();

	if (m_iMinAlwaysHot > m_iMaxAlwaysHot)
	{
		m_iMinAlwaysHot = m_iMaxAlwaysHot;
		pComboBoxMin->SetCurSel(m_iMinAlwaysHot);
	}
}


void CminmaxbetDlg::OnSelchangeMaxAlwayshot()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_ALWAYSHOT);
	m_iMinAlwaysHot = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_ALWAYSHOT);
	m_iMaxAlwaysHot = pComboBoxMax->GetCurSel();

	if (m_iMinAlwaysHot > m_iMaxAlwaysHot)
	{
		m_iMaxAlwaysHot = m_iMinAlwaysHot;
		pComboBoxMax->SetCurSel(m_iMaxAlwaysHot);
	}
}


void CminmaxbetDlg::OnSelchangeMinUltrahot()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_ULTRAHOT);
	m_iMinUltraHot = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_ULTRAHOT);
	m_iMaxUltraHot = pComboBoxMax->GetCurSel();

	if (m_iMinUltraHot > m_iMaxUltraHot)
	{
		m_iMinUltraHot = m_iMaxUltraHot;
		pComboBoxMin->SetCurSel(m_iMinUltraHot);
	}
}


void CminmaxbetDlg::OnSelchangeMaxUltrahot()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_ULTRAHOT);
	m_iMinUltraHot = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_ULTRAHOT);
	m_iMaxUltraHot = pComboBoxMax->GetCurSel();

	if (m_iMinUltraHot > m_iMaxUltraHot)
	{
		m_iMaxUltraHot = m_iMinUltraHot;
		pComboBoxMax->SetCurSel(m_iMaxUltraHot);
	}
}


void CminmaxbetDlg::OnSelchangeMinSizzlinghot()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_SIZZLINGHOT);
	m_iMinSizzlingHot = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_SIZZLINGHOT);
	m_iMaxSizzlingHot = pComboBoxMax->GetCurSel();

	if (m_iMinSizzlingHot > m_iMaxSizzlingHot)
	{
		m_iMinSizzlingHot = m_iMaxSizzlingHot;
		pComboBoxMin->SetCurSel(m_iMinSizzlingHot);
	}
}


void CminmaxbetDlg::OnSelchangeMaxSizzlinghot()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_SIZZLINGHOT);
	m_iMinSizzlingHot = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_SIZZLINGHOT);
	m_iMaxSizzlingHot = pComboBoxMax->GetCurSel();

	if (m_iMinSizzlingHot > m_iMaxSizzlingHot)
	{
		m_iMaxSizzlingHot = m_iMinSizzlingHot;
		pComboBoxMax->SetCurSel(m_iMaxSizzlingHot);
	}
}


void CminmaxbetDlg::OnSelchangeMinAmericanpoker2()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_AMERICANPOKER2);
	m_iMinAmericanPoker2 = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_AMERICANPOKER2);
	m_iMaxAmericanPoker2 = pComboBoxMax->GetCurSel();

	if (m_iMinAmericanPoker2 > m_iMaxAmericanPoker2)
	{
		m_iMinAmericanPoker2 = m_iMaxAmericanPoker2;
		pComboBoxMin->SetCurSel(m_iMinAmericanPoker2);
	}
}


void CminmaxbetDlg::OnSelchangeMaxAmericanpoker2()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_AMERICANPOKER2);
	m_iMinAmericanPoker2 = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_AMERICANPOKER2);
	m_iMaxAmericanPoker2 = pComboBoxMax->GetCurSel();

	if (m_iMinAmericanPoker2 > m_iMaxAmericanPoker2)
	{
		m_iMaxAmericanPoker2 = m_iMinAmericanPoker2;
		pComboBoxMax->SetCurSel(m_iMaxAmericanPoker2);
	}
}


void CminmaxbetDlg::OnSelchangeMinHottarget()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_HOTTARGET);
	m_iMinHotTarget = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_HOTTARGET);
	m_iMaxHotTarget = pComboBoxMax->GetCurSel();

	if (m_iMinHotTarget > m_iMaxHotTarget)
	{
		m_iMinHotTarget = m_iMaxHotTarget;
		pComboBoxMin->SetCurSel(m_iMinHotTarget);
	}
}


void CminmaxbetDlg::OnSelchangeMaxHottarget()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_HOTTARGET);
	m_iMinHotTarget = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_HOTTARGET);
	m_iMaxHotTarget = pComboBoxMax->GetCurSel();

	if (m_iMinHotTarget > m_iMaxHotTarget)
	{
		m_iMaxHotTarget = m_iMinHotTarget;
		pComboBoxMax->SetCurSel(m_iMaxHotTarget);
	}
}


void CminmaxbetDlg::OnSelchangeMinChiprunner()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_CHIPRUNNER);
	m_iMinChipRunner = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_CHIPRUNNER);
	m_iMaxChipRunner = pComboBoxMax->GetCurSel();

	if (m_iMinChipRunner > m_iMaxChipRunner)
	{
		m_iMinChipRunner = m_iMaxChipRunner;
		pComboBoxMin->SetCurSel(m_iMinChipRunner);
	}
}


void CminmaxbetDlg::OnSelchangeMaxChiprunner()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_CHIPRUNNER);
	m_iMinChipRunner = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_CHIPRUNNER);
	m_iMaxChipRunner = pComboBoxMax->GetCurSel();

	if (m_iMinChipRunner > m_iMaxChipRunner)
	{
		m_iMaxChipRunner = m_iMinChipRunner;
		pComboBoxMax->SetCurSel(m_iMaxChipRunner);
	}
}


void CminmaxbetDlg::OnSelchangeMinSuprahot()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_SUPRAHOT);
	m_iMinSupraHot = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_SUPRAHOT);
	m_iMaxSupraHot = pComboBoxMax->GetCurSel();

	if (m_iMinSupraHot > m_iMaxSupraHot)
	{
		m_iMinSupraHot = m_iMaxSupraHot;
		pComboBoxMin->SetCurSel(m_iMinSupraHot);
	}
}


void CminmaxbetDlg::OnSelchangeMaxSuprahot()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_SUPRAHOT);
	m_iMinSupraHot = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_SUPRAHOT);
	m_iMaxSupraHot = pComboBoxMax->GetCurSel();

	if (m_iMinSupraHot > m_iMaxSupraHot)
	{
		m_iMaxSupraHot = m_iMinSupraHot;
		pComboBoxMax->SetCurSel(m_iMaxSupraHot);
	}
}


void CminmaxbetDlg::OnSelchangeMinDolphinpearl()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_DOLPHINPEARL);
	m_iMinDolphinPearl = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_DOLPHINPEARL);
	m_iMaxDolphinPearl = pComboBoxMax->GetCurSel();

	if (m_iMinDolphinPearl > m_iMaxDolphinPearl)
	{
		m_iMinDolphinPearl = m_iMaxDolphinPearl;
		pComboBoxMin->SetCurSel(m_iMinDolphinPearl);
	}
}


void CminmaxbetDlg::OnSelchangeMaxDolphinpearl()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_DOLPHINPEARL);
	m_iMinDolphinPearl = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_DOLPHINPEARL);
	m_iMaxDolphinPearl = pComboBoxMax->GetCurSel();

	if (m_iMinDolphinPearl > m_iMaxDolphinPearl)
	{
		m_iMaxDolphinPearl = m_iMinDolphinPearl;
		pComboBoxMax->SetCurSel(m_iMaxDolphinPearl);
	}
}


void CminmaxbetDlg::OnSelchangeMinWildsafari()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_WILDSAFARI);
	m_iMinWildSafari = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_WILDSAFARI);
	m_iMaxWildSafari = pComboBoxMax->GetCurSel();

	if (m_iMinWildSafari > m_iMaxWildSafari)
	{
		m_iMinWildSafari = m_iMaxWildSafari;
		pComboBoxMin->SetCurSel(m_iMinWildSafari);
	}
}


void CminmaxbetDlg::OnSelchangeMaxWildsafari()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_WILDSAFARI);
	m_iMinWildSafari = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_WILDSAFARI);
	m_iMaxWildSafari = pComboBoxMax->GetCurSel();

	if (m_iMinWildSafari > m_iMaxWildSafari)
	{
		m_iMaxWildSafari = m_iMinWildSafari;
		pComboBoxMax->SetCurSel(m_iMaxWildSafari);
	}
}


void CminmaxbetDlg::OnSelchangeMinBeetlemanla()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_BEETLEMANLA);
	m_iMinBeetleManla = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_BEETLEMANLA);
	m_iMaxBeetleManla = pComboBoxMax->GetCurSel();

	if (m_iMinBeetleManla > m_iMaxBeetleManla)
	{
		m_iMinBeetleManla = m_iMaxBeetleManla;
		pComboBoxMin->SetCurSel(m_iMinBeetleManla);
	}
}


void CminmaxbetDlg::OnSelchangeMaxBeetlemanla()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_BEETLEMANLA);
	m_iMinBeetleManla = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_BEETLEMANLA);
	m_iMaxBeetleManla = pComboBoxMax->GetCurSel();

	if (m_iMinBeetleManla > m_iMaxBeetleManla)
	{
		m_iMaxBeetleManla = m_iMinBeetleManla;
		pComboBoxMax->SetCurSel(m_iMaxBeetleManla);
	}
}


void CminmaxbetDlg::OnSelchangeMinRollercoaster()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_ROLLERCOASTER);
	m_iMinRollerCoaster = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_ROLLERCOASTER);
	m_iMaxRollerCoaster = pComboBoxMax->GetCurSel();

	if (m_iMinRollerCoaster > m_iMaxRollerCoaster)
	{
		m_iMinRollerCoaster = m_iMaxRollerCoaster;
		pComboBoxMin->SetCurSel(m_iMinRollerCoaster);
	}
}


void CminmaxbetDlg::OnSelchangeMaxRollercoaster()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_ROLLERCOASTER);
	m_iMinRollerCoaster = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_ROLLERCOASTER);
	m_iMaxRollerCoaster = pComboBoxMax->GetCurSel();

	if (m_iMinRollerCoaster > m_iMaxRollerCoaster)
	{
		m_iMaxRollerCoaster = m_iMinRollerCoaster;
		pComboBoxMax->SetCurSel(m_iMaxRollerCoaster);
	}
}


void CminmaxbetDlg::OnSelchangeMinLuckyladycharm()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_LUCKYLADYCHARM);
	m_iMinLuckyLadyCharm = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_LUCKYLADYCHARM);
	m_iMaxLuckyLadyCharm = pComboBoxMax->GetCurSel();

	if (m_iMinLuckyLadyCharm > m_iMaxLuckyLadyCharm)
	{
		m_iMinLuckyLadyCharm = m_iMaxLuckyLadyCharm;
		pComboBoxMin->SetCurSel(m_iMinLuckyLadyCharm);
	}
}


void CminmaxbetDlg::OnSelchangeMaxLuckyladycharm()
{
	CComboBox* pComboBoxMin = (CComboBox*)GetDlgItem(IDC_MIN_LUCKYLADYCHARM);
	m_iMinLuckyLadyCharm = pComboBoxMin->GetCurSel();
	CComboBox* pComboBoxMax = (CComboBox*)GetDlgItem(IDC_MAX_LUCKYLADYCHARM);
	m_iMaxLuckyLadyCharm = pComboBoxMax->GetCurSel();

	if (m_iMinLuckyLadyCharm > m_iMaxLuckyLadyCharm)
	{
		m_iMaxLuckyLadyCharm = m_iMinLuckyLadyCharm;
		pComboBoxMax->SetCurSel(m_iMaxLuckyLadyCharm);
	}
}
