// Main.cpp
#include <stdio.h>
int main()
{
	int nDay, nMonth, nYear;
	cout << "Day: ";
	cin >> nDay;

	cout << "Month: ";
	cin >> nMonth;

	cout << "Year: ";
	cin >> nYear;

	if (laNgayHopLe(nDay, nMonth, nYear))
	{
		int tmpDay = nDay;
		int tmpMonth = nMonth;
		int tmpYear = nYear;

		// T�m ng�y h�m tru?c
		timNgayHomTruoc(tmpDay, tmpMonth, tmpYear);
		cout << "Yesterday: " << tmpDay << " / " << tmpMonth << " / " << tmpYear << endl;


		tmpDay = nDay;
		tmpMonth = nMonth;
		tmpYear = nYear;

		// T�m ng�y h�m sau
		timNgayHomSau(tmpDay, tmpMonth, tmpYear);
		cout << "Tomorrow: " << tmpDay << " / " << tmpMonth << " / " << tmpYear << endl;
	}
	else
	{
		cout << "Ngay khong hop le." << endl;
	}

	return 0;
}

// H�m ki?m tra nam nhu?n
bool laNamNhuan(int nYear)
{
	if ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0)
	{
		return true;
	}
	return false;

	// <=> return ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0);
}

// H�m tr? v? s? ng�y trong th�ng thu?c nam cho tru?c
int tinhSoNgayTrongThang(int nMonth, int nYear)
{
	int nNumOfDays;

	switch (nMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: 
		nNumOfDays = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11: 
		nNumOfDays = 30;
		break;
	case 2:
		if (laNamNhuan(nYear))
		{
			nNumOfDays = 29;
		}
		else
		{
			nNumOfDays = 28;
		}
		break;
	}

	return nNumOfDays;
}

// H�m ki?m tra ng�y dd/mm/yyyy cho tru?c c� ph?i l� ng�y h?p l?
bool laNgayHopLe(int nDay, int nMonth, int nYear)
{
	bool bResult = true; // Gi? s? ng�y h?p l?

	// Ki?m tra nam
	if (!(nYear > 0 && nMonth))
	{
		bResult = false; // Ng�y kh�ng c�n h?p l? n?a!
	}

	// Ki?m tra th�ng
	if (!(nMonth >= 1 && nMonth <= 12))
	{
		bResult = false; // Ng�y kh�ng c�n h?p l? n?a!
	}

	// Ki?m tra ng�y
	if (!(nDay >= 1 && nDay <= tinhSoNgayTrongThang(nMonth, nYear)))
	{
		bResult = false; // Ng�y kh�ng c�n h?p l? n?a!
	}

	return bResult; // Tr? v? tr?ng th�i cu?i c�ng...
}
// H�m t�m ng�y h�m tru?c c?a m?t ng�y dd/mm/yyyy cho tru?c (d� h?p l?)
void timNgayHomTruoc(int& nDay, int& nMonth, int& nYear)
{
	nDay--;
	if (nDay == 0)
	{
		nMonth--;
		if (nMonth == 0)
		{
			nMonth = 12;
			nYear--;
		}

		nDay = tinhSoNgayTrongThang(nMonth, nYear);
	}
}

// H�m t�m ng�y h�m sau c?a m?t ng�y dd/mm/yyyy cho tru?c (d� h?p l?)
void timNgayHomSau(int& nDay, int& nMonth, int& nYear)
{
	nDay++;
	if (nDay > tinhSoNgayTrongThang(nMonth, nYear))
	{
		nDay = 1;
		nMonth++;
		if (nMonth > 12)
		{
			nMonth = 1;
			nYear++;
		}
	}
}
