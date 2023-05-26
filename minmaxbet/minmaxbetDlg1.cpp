// minmaxbetDlg1.cpp : implementation file
//

#include "pch.h"
#include "minmaxbet.h"
#include "minmaxbetDlg1.h"
#include "minmaxbetDlg.h"
#include "afxdialogex.h"


// minmaxbetDlg1 dialog

IMPLEMENT_DYNAMIC(minmaxbetDlg1, CDialogEx)

minmaxbetDlg1::minmaxbetDlg1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MINMAXBET_DIALOG1, pParent)
{

}

minmaxbetDlg1::~minmaxbetDlg1()
{
	
}

void minmaxbetDlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_MIN_KINGOFCARDS, m_cMinKingofCards);
	DDX_Control(pDX, IDC_MAX_KINGOFCARDS, m_cMaxKingofCards);
	DDX_Control(pDX, IDC_MIN_SHARKY, m_cMinSharky);
	DDX_Control(pDX, IDC_MAX_SHARKY, m_cMaxSharky);
	DDX_Control(pDX, IDC_MIN_LORDOFTHEOCEAN, m_cMinLordoftheOcean);
	DDX_Control(pDX, IDC_MAX_LORDOFTHEOCEAN, m_cMaxLorrdoftheOcean);
	DDX_Control(pDX, IDC_MIN_QUEENOFHEARTS, m_cMinQueenofHearts);
	DDX_Control(pDX, IDC_MAX_QUEENOFHEARTS, m_cMaxQueenofHearts);
	DDX_Control(pDX, IDC_MIN_THEMONEYGAME, m_cMinTheMoneyGame);
	DDX_Control(pDX, IDC_MAX_THEMONEYGAME, m_cMaxTheMoneyGame);
	DDX_Control(pDX, IDC_MIN_BOOKOFRA, m_cMinBookofRa);
	DDX_Control(pDX, IDC_MAX_BOOKOFRA, m_cMaxBookofRa);
	DDX_Control(pDX, IDC_MIN_JUNGLE, m_cMinJungle);
	DDX_Control(pDX, IDC_MAX_JUNGLE, m_cMaxJungle);
	DDX_Control(pDX, IDC_MIN_JOKERBINGO, m_cMinJokerBingo);
	DDX_Control(pDX, IDC_MAX_JOKERBINGO, m_cMaxJokerBingo);
	DDX_Control(pDX, IDC_MIN_HOTFRUITS, m_cMinHotFruits);
	DDX_Control(pDX, IDC_MAX_HOTFRUITS, m_cMaxHotFruits);
	DDX_Control(pDX, IDC_MIN_FRUITCARDX, m_cMinFruitCardX);
	DDX_Control(pDX, IDC_MAX_FRUITCARDX, m_cMaxFruitCardX);
	DDX_Control(pDX, IDC_MIN_MAGICCARD2, m_cMinMagicCard2);
	DDX_Control(pDX, IDC_MAX_MAGICCARD2, m_cMaxMagicCard2);
}


BEGIN_MESSAGE_MAP(minmaxbetDlg1, CDialogEx)
	ON_BN_CLICKED(IDPREV, &minmaxbetDlg1::OnBnClickedPrev)
	ON_BN_CLICKED(IDCANCEL, &minmaxbetDlg1::OnBnClickedCancel)
	ON_CBN_SELCHANGE(IDC_MIN_KINGOFCARDS, &minmaxbetDlg1::OnSelchangeMinKingofcards)
	ON_CBN_SELCHANGE(IDC_MAX_KINGOFCARDS, &minmaxbetDlg1::OnSelchangeMaxKingofcards)
	ON_CBN_SELCHANGE(IDC_MIN_SHARKY, &minmaxbetDlg1::OnSelchangeMinSharky)
	ON_CBN_SELCHANGE(IDC_MAX_SHARKY, &minmaxbetDlg1::OnSelchangeMaxSharky)
	ON_CBN_SELCHANGE(IDC_MIN_LORDOFTHEOCEAN, &minmaxbetDlg1::OnSelchangeMinLordoftheocean)
	ON_CBN_SELCHANGE(IDC_MAX_LORDOFTHEOCEAN, &minmaxbetDlg1::OnSelchangeMaxLordoftheocean)
	ON_CBN_SELCHANGE(IDC_MIN_QUEENOFHEARTS, &minmaxbetDlg1::OnSelchangeMinQueenofhearts)
	ON_CBN_SELCHANGE(IDC_MAX_QUEENOFHEARTS, &minmaxbetDlg1::OnSelchangeMaxQueenofhearts)
	ON_CBN_SELCHANGE(IDC_MIN_THEMONEYGAME, &minmaxbetDlg1::OnSelchangeMinThemoneygame)
	ON_CBN_SELCHANGE(IDC_MAX_THEMONEYGAME, &minmaxbetDlg1::OnSelchangeMaxThemoneygame)
	ON_CBN_SELCHANGE(IDC_MIN_BOOKOFRA, &minmaxbetDlg1::OnSelchangeMinBookofra)
	ON_CBN_SELCHANGE(IDC_MAX_BOOKOFRA, &minmaxbetDlg1::OnSelchangeMaxBookofra)
	ON_CBN_SELCHANGE(IDC_MIN_JUNGLE, &minmaxbetDlg1::OnSelchangeMinJungle)
	ON_CBN_SELCHANGE(IDC_MAX_JUNGLE, &minmaxbetDlg1::OnSelchangeMaxJungle)
	ON_CBN_SELCHANGE(IDC_MIN_JOKERBINGO, &minmaxbetDlg1::OnSelchangeMinJokerbingo)
	ON_CBN_SELCHANGE(IDC_MAX_JOKERBINGO, &minmaxbetDlg1::OnSelchangeMaxJokerbingo)
	ON_CBN_SELCHANGE(IDC_MIN_HOTFRUITS, &minmaxbetDlg1::OnSelchangeMinHotfruits)
	ON_CBN_SELCHANGE(IDC_MAX_HOTFRUITS, &minmaxbetDlg1::OnSelchangeMaxHotfruits)
	ON_CBN_SELCHANGE(IDC_MIN_FRUITCARDX, &minmaxbetDlg1::OnSelchangeMinFruitcardx)
	ON_CBN_SELCHANGE(IDC_MAX_FRUITCARDX, &minmaxbetDlg1::OnSelchangeMaxFruitcardx)
	ON_CBN_SELCHANGE(IDC_MIN_MAGICCARD2, &minmaxbetDlg1::OnSelchangeMinMagiccard2)
	ON_CBN_SELCHANGE(IDC_MAX_MAGICCARD2, &minmaxbetDlg1::OnSelchangeMaxMagiccard2)
END_MESSAGE_MAP()


// minmaxbetDlg1 message handlers
void minmaxbetDlg1::AddNumbersToComboBox(CComboBox* pComboBox, const CString numbers[], int numNumbers)
{
	for (int i = 0; i < numNumbers; i++)
	{
		pComboBox->AddString(numbers[i]);
	}

	pComboBox->SetFocus();
	pComboBox->SetCurSel(0);
}


BOOL minmaxbetDlg1::OnInitDialog()
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

	m_hWnd = GetSafeHwnd();
	::SetWindowPos(m_hWnd, HWND_TOPMOST, 0, 0, 800, 600, SWP_NOZORDER | SWP_SHOWWINDOW | SWP_NOACTIVATE);

	const CString rollerCoasterNumbers[] = { _T("10"), _T("20"), _T("30"), _T("50"), _T("100"), _T("200"), _T("500"), _T("1000"), _T("2000") };
	const int numRollerCoasterNumbers = _countof(rollerCoasterNumbers);

	CComboBox* pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_KINGOFCARDS);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_KINGOFCARDS);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_SHARKY);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_SHARKY);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_LORDOFTHEOCEAN);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_LORDOFTHEOCEAN);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_QUEENOFHEARTS);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_QUEENOFHEARTS);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_THEMONEYGAME);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_THEMONEYGAME);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_BOOKOFRA);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_BOOKOFRA);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_JUNGLE);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_JUNGLE);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_JOKERBINGO);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_JOKERBINGO);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_HOTFRUITS);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_HOTFRUITS);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_FRUITCARDX);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_FRUITCARDX);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);

	pComboBox = (CComboBox*)GetDlgItem(IDC_MIN_MAGICCARD2);
	AddNumbersToComboBox(pComboBox, rollerCoasterNumbers, numRollerCoasterNumbers);
	pComboBox = (CComboBox*)GetDlgItem(IDC_MAX_MAGICCARD2);
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

	return TRUE;

}

void minmaxbetDlg1::LoadSettingsFromFile(LPCTSTR lpszPath)
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
	m_cMinKingofCards.SetCurSel(m_iMinKingOfCards);
	m_cMinSharky.SetCurSel(m_iMinSharky);
	m_cMinLordoftheOcean.SetCurSel(m_iMinLordoftheOcean);
	m_cMinQueenofHearts.SetCurSel(m_iMinQueenofHearts);
	m_cMinTheMoneyGame.SetCurSel(m_iMinTheMoneyGame);
	m_cMinBookofRa.SetCurSel(m_iMinBookofRa);
	m_cMinJungle.SetCurSel(m_iMinJungle);
	m_cMinJokerBingo.SetCurSel(m_iMinJokerBingo);
	m_cMinHotFruits.SetCurSel(m_iMinHotFruits);
	m_cMinFruitCardX.SetCurSel(m_iMinFruitCardX);
	m_cMinMagicCard2.SetCurSel(m_iMinMagicCard2);
	// Set max combobox from file
	m_cMaxKingofCards.SetCurSel(m_iMaxKingOfCards);
	m_cMaxSharky.SetCurSel(m_iMaxSharky);
	m_cMaxLorrdoftheOcean.SetCurSel(m_iMaxLordoftheOcean);
	m_cMaxQueenofHearts.SetCurSel(m_iMaxQueenofHearts);
	m_cMaxTheMoneyGame.SetCurSel(m_iMaxTheMoneyGame);
	m_cMaxBookofRa.SetCurSel(m_iMaxBookofRa);
	m_cMaxJungle.SetCurSel(m_iMaxJungle);
	m_cMaxJokerBingo.SetCurSel(m_iMaxJokerBingo);
	m_cMaxHotFruits.SetCurSel(m_iMaxHotFruits);
	m_cMaxFruitCardX.SetCurSel(m_iMaxFruitCardX);
	m_cMaxMagicCard2.SetCurSel(m_iMaxMagicCard2);
}

void minmaxbetDlg1::SaveSettingsToFile(LPCTSTR lpszPath)
{
	// Get Min Combobox status to be saved
	m_iMinKingOfCards = m_cMinKingofCards.GetCurSel();
	m_iMinSharky= m_cMinSharky.GetCurSel();
	m_iMinLordoftheOcean = m_cMinLordoftheOcean.GetCurSel();
	m_iMinQueenofHearts = m_cMinQueenofHearts.GetCurSel();
	m_iMinTheMoneyGame = m_cMinTheMoneyGame.GetCurSel();
	m_iMinBookofRa = m_cMinBookofRa.GetCurSel();
	m_iMinJungle = m_cMinJungle.GetCurSel();
	m_iMinJokerBingo = m_cMinJokerBingo.GetCurSel();
	m_iMinHotFruits = m_cMinHotFruits.GetCurSel();
	m_iMinFruitCardX = m_cMinFruitCardX.GetCurSel();
	m_iMinMagicCard2 = m_cMinMagicCard2.GetCurSel();


	// Get Max Combobox status to be saved
	m_iMaxKingOfCards = m_cMaxKingofCards.GetCurSel();
	m_iMaxSharky = m_cMaxSharky.GetCurSel();
	m_iMaxLordoftheOcean = m_cMaxLorrdoftheOcean.GetCurSel();
	m_iMaxQueenofHearts = m_cMaxQueenofHearts.GetCurSel();
	m_iMaxTheMoneyGame = m_cMaxTheMoneyGame.GetCurSel();
	m_iMaxBookofRa = m_cMaxBookofRa.GetCurSel();
	m_iMaxJungle = m_cMaxJungle.GetCurSel();
	m_iMaxJokerBingo = m_cMaxJokerBingo.GetCurSel();
	m_iMaxHotFruits = m_cMaxHotFruits.GetCurSel();
	m_iMaxFruitCardX = m_cMaxFruitCardX.GetCurSel();
	m_iMaxMagicCard2 = m_cMaxMagicCard2.GetCurSel();

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

void minmaxbetDlg1::OnBnClickedPrev()
{
	SaveSettingsToFile(L"./magicn/minmaxsetting.dat");

	EndDialog(IDCANCEL);

	CminmaxbetDlg dlg;
	dlg.DoModal();
}


void minmaxbetDlg1::OnBnClickedCancel()
{
	SaveSettingsToFile(L"./magicn/minmaxsetting.dat");

	CDialogEx::OnCancel();
}


void minmaxbetDlg1::OnSelchangeMinKingofcards()
{
	m_iMinKingOfCards = m_cMinKingofCards.GetCurSel();
	m_iMaxKingOfCards = m_cMaxKingofCards.GetCurSel();
	if (m_iMinKingOfCards > m_iMaxKingOfCards)
	{
		m_iMinKingOfCards = m_iMaxKingOfCards;
		m_cMinKingofCards.SetCurSel(m_iMinKingOfCards);
	}
}


void minmaxbetDlg1::OnSelchangeMaxKingofcards()
{
	m_iMinKingOfCards = m_cMinKingofCards.GetCurSel();
	m_iMaxKingOfCards = m_cMaxKingofCards.GetCurSel();
	if (m_iMinKingOfCards > m_iMaxKingOfCards)
	{
		m_iMaxKingOfCards = m_iMinKingOfCards;
		m_cMaxKingofCards.SetCurSel(m_iMaxKingOfCards);
	}
}


void minmaxbetDlg1::OnSelchangeMinSharky()
{
	m_iMinSharky = m_cMinSharky.GetCurSel();
	m_iMaxSharky = m_cMaxSharky.GetCurSel();
	if (m_iMinSharky > m_iMaxSharky)
	{
		m_iMinSharky = m_iMaxSharky;
		m_cMinSharky.SetCurSel(m_iMinSharky);
	}
}


void minmaxbetDlg1::OnSelchangeMaxSharky()
{
	m_iMinSharky = m_cMinSharky.GetCurSel();
	m_iMaxSharky = m_cMaxSharky.GetCurSel();
	if (m_iMinSharky > m_iMaxSharky)
	{
		m_iMaxSharky = m_iMinSharky;
		m_cMaxSharky.SetCurSel(m_iMaxSharky);
	}
}


void minmaxbetDlg1::OnSelchangeMinLordoftheocean()
{
	m_iMinLordoftheOcean = m_cMinLordoftheOcean.GetCurSel();
	m_iMaxLordoftheOcean = m_cMaxLorrdoftheOcean.GetCurSel();
	if (m_iMinLordoftheOcean > m_iMaxLordoftheOcean)
	{
		m_iMinLordoftheOcean = m_iMaxLordoftheOcean;
		m_cMinLordoftheOcean.SetCurSel(m_iMinLordoftheOcean);
	}
}


void minmaxbetDlg1::OnSelchangeMaxLordoftheocean()
{
	m_iMinLordoftheOcean = m_cMinLordoftheOcean.GetCurSel();
	m_iMaxLordoftheOcean = m_cMaxLorrdoftheOcean.GetCurSel();
	if (m_iMinLordoftheOcean > m_iMaxLordoftheOcean)
	{
		m_iMaxLordoftheOcean = m_iMinLordoftheOcean;
		m_cMaxLorrdoftheOcean.SetCurSel(m_iMaxLordoftheOcean);
	}
}


void minmaxbetDlg1::OnSelchangeMinQueenofhearts()
{
	m_iMinQueenofHearts = m_cMinQueenofHearts.GetCurSel();
	m_iMaxQueenofHearts = m_cMaxQueenofHearts.GetCurSel();
	if (m_iMinQueenofHearts > m_iMaxQueenofHearts)
	{
		m_iMinQueenofHearts = m_iMaxQueenofHearts;
		m_cMinQueenofHearts.SetCurSel(m_iMinQueenofHearts);
	}
}


void minmaxbetDlg1::OnSelchangeMaxQueenofhearts()
{
	m_iMinQueenofHearts = m_cMinQueenofHearts.GetCurSel();
	m_iMaxQueenofHearts = m_cMaxQueenofHearts.GetCurSel();
	if (m_iMinQueenofHearts > m_iMaxQueenofHearts)
	{
		m_iMaxQueenofHearts = m_iMinQueenofHearts;
		m_cMaxQueenofHearts.SetCurSel(m_iMaxQueenofHearts);
	}
}


void minmaxbetDlg1::OnSelchangeMinThemoneygame()
{
	m_iMinTheMoneyGame = m_cMinTheMoneyGame.GetCurSel();
	m_iMaxTheMoneyGame = m_cMaxTheMoneyGame.GetCurSel();
	if (m_iMinTheMoneyGame > m_iMaxTheMoneyGame)
	{
		m_iMinTheMoneyGame = m_iMaxTheMoneyGame;
		m_cMinTheMoneyGame.SetCurSel(m_iMinTheMoneyGame);
	}
}


void minmaxbetDlg1::OnSelchangeMaxThemoneygame()
{
	m_iMinTheMoneyGame = m_cMinTheMoneyGame.GetCurSel();
	m_iMaxTheMoneyGame = m_cMaxTheMoneyGame.GetCurSel();
	if (m_iMinTheMoneyGame > m_iMaxTheMoneyGame)
	{
		m_iMaxTheMoneyGame = m_iMinTheMoneyGame;
		m_cMaxTheMoneyGame.SetCurSel(m_iMaxTheMoneyGame);
	}
}


void minmaxbetDlg1::OnSelchangeMinBookofra()
{
	m_iMinBookofRa = m_cMinBookofRa.GetCurSel();
	m_iMaxBookofRa = m_cMaxBookofRa.GetCurSel();
	if (m_iMinBookofRa > m_iMaxBookofRa)
	{
		m_iMinBookofRa = m_iMaxBookofRa;
		m_cMinBookofRa.SetCurSel(m_iMinBookofRa);
	}
}


void minmaxbetDlg1::OnSelchangeMaxBookofra()
{
	m_iMinBookofRa = m_cMinBookofRa.GetCurSel();
	m_iMaxBookofRa = m_cMaxBookofRa.GetCurSel();
	if (m_iMinBookofRa > m_iMaxBookofRa)
	{
		m_iMaxBookofRa = m_iMinBookofRa;
		m_cMaxBookofRa.SetCurSel(m_iMaxBookofRa);
	}
}


void minmaxbetDlg1::OnSelchangeMinJungle()
{
	m_iMinJungle = m_cMinJungle.GetCurSel();
	m_iMaxJungle = m_cMaxJungle.GetCurSel();
	if (m_iMinJungle > m_iMaxJungle)
	{
		m_iMinJungle = m_iMaxJungle;
		m_cMinJungle.SetCurSel(m_iMinJungle);
	}
}


void minmaxbetDlg1::OnSelchangeMaxJungle()
{
	m_iMinJungle = m_cMinJungle.GetCurSel();
	m_iMaxJungle = m_cMaxJungle.GetCurSel();
	if (m_iMinJungle > m_iMaxJungle)
	{
		m_iMaxJungle = m_iMinJungle;
		m_cMaxJungle.SetCurSel(m_iMaxJungle);
	}
}


void minmaxbetDlg1::OnSelchangeMinJokerbingo()
{
	m_iMinJokerBingo = m_cMinJokerBingo.GetCurSel();
	m_iMaxJokerBingo = m_cMaxJokerBingo.GetCurSel();
	if (m_iMinJokerBingo > m_iMaxJokerBingo)
	{
		m_iMinJokerBingo = m_iMaxJokerBingo;
		m_cMinJokerBingo.SetCurSel(m_iMinJokerBingo);
	}
}


void minmaxbetDlg1::OnSelchangeMaxJokerbingo()
{
	m_iMinJokerBingo = m_cMinJokerBingo.GetCurSel();
	m_iMaxJokerBingo = m_cMaxJokerBingo.GetCurSel();
	if (m_iMinJokerBingo > m_iMaxJokerBingo)
	{
		m_iMaxJokerBingo = m_iMinJokerBingo;
		m_cMaxJokerBingo.SetCurSel(m_iMaxJokerBingo);
	}
}


void minmaxbetDlg1::OnSelchangeMinHotfruits()
{
	m_iMinHotFruits = m_cMinHotFruits.GetCurSel();
	m_iMaxHotFruits = m_cMaxHotFruits.GetCurSel();
	if (m_iMinHotFruits > m_iMaxHotFruits)
	{
		m_iMinHotFruits = m_iMaxHotFruits;
		m_cMinHotFruits.SetCurSel(m_iMinHotFruits);
	}
}


void minmaxbetDlg1::OnSelchangeMaxHotfruits()
{
	m_iMinHotFruits = m_cMinHotFruits.GetCurSel();
	m_iMaxHotFruits = m_cMaxHotFruits.GetCurSel();
	if (m_iMinHotFruits > m_iMaxHotFruits)
	{
		m_iMaxHotFruits = m_iMinHotFruits;
		m_cMaxHotFruits.SetCurSel(m_iMaxHotFruits);
	}
}


void minmaxbetDlg1::OnSelchangeMinFruitcardx()
{
	m_iMinFruitCardX = m_cMinFruitCardX.GetCurSel();
	m_iMaxFruitCardX = m_cMaxFruitCardX.GetCurSel();
	if (m_iMinFruitCardX > m_iMaxFruitCardX)
	{
		m_iMinFruitCardX = m_iMaxFruitCardX;
		m_cMinFruitCardX.SetCurSel(m_iMinFruitCardX);
	}
}


void minmaxbetDlg1::OnSelchangeMaxFruitcardx()
{
	m_iMinFruitCardX = m_cMinFruitCardX.GetCurSel();
	m_iMaxFruitCardX = m_cMaxFruitCardX.GetCurSel();
	if (m_iMinFruitCardX > m_iMaxFruitCardX)
	{
		m_iMaxFruitCardX = m_iMinFruitCardX;
		m_cMaxFruitCardX.SetCurSel(m_iMaxFruitCardX);
	}
}


void minmaxbetDlg1::OnSelchangeMinMagiccard2()
{
	m_iMinMagicCard2 = m_cMinMagicCard2.GetCurSel();
	m_iMaxMagicCard2 = m_cMaxMagicCard2.GetCurSel();
	if (m_iMinMagicCard2 > m_iMaxMagicCard2)
	{
		m_iMinMagicCard2 = m_iMaxMagicCard2;
		m_cMinMagicCard2.SetCurSel(m_iMinMagicCard2);
	}
}


void minmaxbetDlg1::OnSelchangeMaxMagiccard2()
{
	m_iMinMagicCard2 = m_cMinMagicCard2.GetCurSel();
	m_iMaxMagicCard2 = m_cMaxMagicCard2.GetCurSel();
	if (m_iMinMagicCard2 > m_iMaxMagicCard2)
	{
		m_iMaxMagicCard2 = m_iMinMagicCard2;
		m_cMaxMagicCard2.SetCurSel(m_iMaxMagicCard2);
	}
}
