#include<iostream>
#include<string.h>		// header file for string functions
#include<conio.h>
using namespace std;
/// @brief 
struct D13
{
  long PP, LIP, PPF, NSC, ULIP, ELSS, TF, PAHL, FD_5Y, SSS, NPS;
  int no;
};
struct D15A
{
  int MPP_S, MPP_P, PHC;
  char ch;
};

class salary
//class which stores user's salary info to compute IT returns
{
public:
  long Basic, HRA, LTA, TA, OA, GS, PF_DEDUCT, PT;
  char HCITY[3], T_1_0[3];
  void getsall ();
  // int age;
  // string name,add;
// function to input details of individual
} a;


void salary::getsall ()		// To input the details required to calculate Gross Salary
{
  cout << "\nEnter Your Basic Salary for the whole year:";
  cin >> Basic;
  cout << "\nEnter Your HRA for the whole year:";
  cin >> HRA;
  cout <<
    "\nIs Your Residence in Delhi,Mumbai,Kolkatta or Chennai or any other city. Enter the first 3 letters of the city name:";
  cin >> HCITY;
  cout << "\nEnter Your LTA for the year:";
  cin >> LTA;
  cout << "\nEnter Travel/Conveyance Allowance:";
  cin >> TA;
  cout <<
    "\nIs the allowance used for official purposes.Enter 'y' for yes and 'n' for no.:";
  cin >> T_1_0;
  cout << "\nEnter Other Allowance:";
  cin >> OA;
  cout << "\nEnter PF Deductions:";
  cin >> PF_DEDUCT;
  cout << "\nEnter Professional Tax paid:";
  cin >> PT;
  // Formula to calculate Gross Salary 
  GS = Basic + HRA + LTA + TA - PF_DEDUCT;
  cout << "\nGross Salary = Rs" << GS;
}

//Now the declarations part

class declar:public salary
{
public:
  char D1[50], D2[250], D3[10], D5[150], MOT[3];
  char ch, D11ch, k;
  int per, age;
  long D4, D6, D7, D9, D12A, D12B, D14, D15B, D15C, D15D, D15E, D15F;
  D13 A;
  D15A B;
  void getdeclar ();
  void dispdeclar ();
};
void
declar::getdeclar ()		// fn which gets your declarations
{
  cout << "\n|-------------------------------------------------------|\n";
  cout << "|             DECLARATIONS TO BE OBTAINED               |\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  Enter Your PAN Number:                               |";
  cin >> D3;
  cout << "\n";
  cout << "|-------------------------------------|-----------------|\n";
  cout << "|  Enter House Rent Allowance for the year:             |";
  cin >> D4;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  Enter The Address of the Rented Place:               |";
  cin >> D5;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  Enter LTA-Travel Expense for the Shortest Route:     |";
  cin >> D7;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "| Enter Mode Of Travel(Enter first 3 letters of mode of travel:|";
  cin >> MOT;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout <<
    "| Have you already availed LTA exemption twice for the calendar years 2018-2021(y/n): |";
  cin >> ch;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  Interest on Housing Loan:                            |";
  cin >> D9;
  cout << "\n";
  cout << "|-------------------------------------|-----------------|\n";
  cout << "|   Is the house(a/b):" <<
    "(a)For Self-Occupation or (b) Let Out:|";
  cin >> D11ch;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  Enter The Rent Paid for the year:                    |";
  cin >> D6;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  Enter Rent received for the year:                    |";
  cin >> D12A;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  Enter Municipal Taxes paid for the year:              |";
  cin >> D12B;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout <<
    "|  Enter Deductions under Chapter VIA Section 80C(Restricted	to Rs.1,50,000): |\n";
  cout << "|  Enter Appropriate Values for proper commuting!!      |\n";
  cout << "|  Contribution to Pension Plans:                       |";
  cin >> A.PP;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout <<
    "|  Premium Payment of Life Insurance Premium(For Self,spouse and children):|";
  cin >> A.LIP;
  cout << "\n";
  cout << "|-------------------------------------|-----------------|\n";
  cout <<
    "|  Deposit in Public Provident Fund(PPF)(For Self,spouse and children):|";
  cin >> A.PPF;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  Purchase of National Saving Certificates(VIII Issue):|";
  cin >> A.NSC;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "| Contribution to Unit Linked Insurance Scheme(ULIP):   |";
  cin >> A.ULIP;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout <<"| Payment of Tution fess to any School,College,University or Educational Institution:|";
  cin >> A.TF;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  Number of School/College going children(Maximum-2):  |";
  cin >> A.no;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "| Repayment of Principal Amount of Housing Loan:        |";
  cin >> A.PAHL;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "| Fixed Deposit(FD) for 5 years with a Scheduled Bank:  |";
  cin >> A.FD_5Y;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  Sukanya Samriddhi Scheme:                            |";
  cin >> A.SSS;
  cout << "\n";
  cout << "|-------------------------------------------------------|\n";
  cout <<"| Contribution to National Pension Scheme (NPS) under section 80CCD(1)(restricted to 10% of basic salary):        |";
  cin >> A.NPS;
  cout << "\n";

  if (A.NPS == (0.10 * Basic))
    {
      D14 = 50000;
    }
  else
    D14 = 0;
  cout << "\nDeduction under Section 80D,80DD,80DDB,80U,80E and 80CCG.\n";
  cout <<
    "  Are Your Parents Senior Citizens(i.e, age of both parents>=60) or not(y/n):";
  cin >> B.ch;
  if (B.ch == 'y' || B.ch == 'Y')
    {
      cout << "|-------------------------------------------------------|\n";
      cout <<
	"| For Senior citizen Parents,Deduction under 80D is upto Rs.30,000/.        |\n";
      cout << "| Mediclaim Policy Premium (under Section 80D):  |";
      cin >> B.MPP_S;
      cout << "\n";
      cout << "|-------------------------------------------------------|\n";
      cout <<
	"| Mediclaim Policy Premium for Parents(MPPP)(under Section 80D):    |";
      cin >> B.MPP_P;
      cout << "\n";
      cout << "|-------------------------------------------------------|\n";
      cout <<
	"| Preventive health Checkup (under section 80D,restricted to Rs.5000/.    |";
      cin >> B.PHC;
      cout << "\n";
      cout << "|-------------------------------------------------------|\n";
    }
  else if (ch == 'n' || ch == 'N' || ch != 'y' || ch != 'Y')
    {
      cout << "|-------------------------------------------------------|\n";
      cout <<
	"| For Senior citizen Parents,Deduction under 80D is upto Rs.25,000/.      |\n";
      cout <<
	"| Mediclaim Policy Premium (under Section 80D):                           |";
      cin >> B.MPP_S;
      cout << "\n";
      cout << "|-------------------------------------------------------|\n";
      cout <<
	"| Mediclaim Policy Premium for Parents(MPPP)(under Section 80D):          |";
      cin >> B.MPP_P;
      cout << "\n";
      cout << "|-------------------------------------------------------|\n";
      cout <<
	"| Preventive health Checkup (under section 80D,restricted to Rs.5000/.    |";
      cin >> B.PHC;
      cout << "\n";
      cout << "|-------------------------------------------------------|\n";
    }
  cout << "\nDo You have a handicapped dependent?(y/n):";
  cin >> k;
  if (k == 'y' || k == 'Y')
    {
      cout << "\nEnter Percentage of disability(Integer figures only):";
      cin >> per;
      if (per >= 80)
	{
	  cout <<
	    "\nEnter Medical treatment cost for handicapped dependent(under section 80DD,upto Rs.1,50,000/.):";
	  cin >> D15B;
	}
      else if (per < 80)
	{
	  cout <<
	    "\nEnter Medical treatment cost for handicapped dependent(under section 80DD,upto Rs.75,000/.):";
	  cin >> D15B;
	}
    }
  else
    D15B = 0;
  cout <<
    "\nEnter Medical treatment cost for specified diseases under section 80DDB";
  if (age < 60)
    {
      cout << "(Upto Rs.40,000/-):";
      cin >> D15C;
    }
  else if (age >= 60)
    {
      cout << "(Upto Rs.60,000/-):";
      cin >> D15C;
    }
  else if (age >= 80)
    {
      cout << "(Upto Rs.80,000/-):";
      cin >> D15C;
    }
  cout << "\nAre You Either Blind or Physically Handicapped(y/n):";
  cin >> k;
  if (k == 'y' || k == 'Y')
    {
      cout << "\nEnter Percentage of disability(Integer figures only):";
      cin >> per;
      if (per >= 80 && per < 90)
	{
	  cout <<
	    "\nDeduction in case of person with disabilities=Rs.75,000/.";
	  D15D = 75000;
	}
      if (per >= 90 && per <= 100)
	{
	  cout <<
	    "\nDeduction in case of person with severe disabilities=Rs.1,25,000/.";
	  D15D = 125000;
	}
    }
  else if (k != 'y' || k != 'Y')
    D15D = 0;
  cout <<
    "\nEnter Payment of interest on Loan Taken for higher education for a full time course under section 80E:";
  cin >> D15E;
  cout <<
    "\nEnter Investment made under notified equity savings scheme under section 80CCG(upto Rs.50,000):";
  cin >> D15F;
}

void
declar::dispdeclar ()		//fn to display your declarations
{

  cout <<
    "+--------------------------------------------|-----------------+\n";
  /*cout << "| Name                                       |    "<<D1<<"             \n";
     cout << "| Residential Address:                       |    "<<D2<<"     |\n";
     cout << "| Age                                        |    "<<age<<"    |\n"; */
  cout << "| Pan Number                                 |    " << D3 <<
    "        |\n";
  cout << "| House Rent Allowance for the year:Rs       |    " << D4 <<
    "       |\n";
  cout << "| The Address of the Rented Place:           |    " << D5 <<
    "          |\n";
  cout << "| The Rent Paid for the year:Rs              |    " << D6 <<
    "       |\n";
  cout << "| LTA-Travel Expense for the Shortest Route: |    " << D7 <<
    "        |\n";
  cout <<
    "| Mode Of Travel(Enter first 3 letters of mode of travel       |    " <<
    MOT << "  |\n";
  cout << "| Interest on Housing Loan:Rs                |     " << D9 <<
    "           |\n";
  cout <<
    "| Is the house(a/b):                         |                 |\n";
  if (D11ch == 'a')
    cout <<
      "| For Self-Occupation                        |                 |\n";
  else if (D11ch == 'b')
    cout <<
      "| Let Out                                   |                  |\n";
  cout << "| Rent received for the year:Rs              |    " << D12A <<
    "         |\n";
  cout << "| Municipal Taxes paid for the year:Rs       |    " << D12B <<
    "        |\n";
  cout <<
    "| Deductions under Chapter VIA Section 80C (Restricted to Rs.1,50,000): |  |\n";
  cout << "| Contribution to Pension Plans:Rs          |      " << A.
    PP << "    |\n";
  cout <<
    "| Premium Payment of Life Insurance premium(ForSelf,spouse & children):Rs                 |    "
    << A.LIP << "      |\n";
  cout <<
    "| Deposit in Public Provident Fund(PPF)(ForSelf,spouse & children):Rs                     |    "
    << A.PPF << "      |\n";
  cout <<
    "| Purchase of National Saving Certificates(VIII Issue):Rs                                 |    "
    << A.NSC << "    |\n";
  cout <<
    "| Contribution to Unit Linked Insurance Scheme(ULIP):Rs                                   |    "
    << A.ULIP << "    |\n";
  cout <<
    "| Contribution to Equity Linked Savings Scheme(ELSS):Rs                                   |    "
    << A.ELSS << "    |\n";
  cout <<
    "| Payment of Tution fess to any School,College,University or Educational Institution:Rs   |    "
    << A.TF << "    |\n";
  cout <<
    "| Number of School/College going children:Rs                   |    " <<
    A.no << "    |\n";
  cout <<
    "| Repayment of Principal Amount of Housing Loan:Rs             |    " <<
    A.PAHL << "   |\n";
  cout <<
    "| Fixed Deposit(FD) for 5 years with a Scheduled Bank:Rs       |    " <<
    A.FD_5Y << "    |\n";
  cout <<
    "| Sukanya Samriddhi Scheme:Rs                                  |    " <<
    A.SSS << "    |\n";
  cout <<
    "| Contribution to National Pension Scheme (NPS) under section 80CCD(1)(restricted to 10% of basic salary):Rs                                     |    "
    << A.NPS << "    |\n";
  cout <<
    "| Contribution to National Pension Scheme (NPS) under section 80CCD(1B):Rs          |    "
    << D14 << "         |\n";
  cout <<
    "| Deduction under Section 80D,80DD,80DDB,80U,80E and 80CCG:                         |                      |\n";
  cout <<
    "| Mediclaim Policy Premium (under Section 80D):Rs                                   |    "
    << B.MPP_S << "     |\n";
  cout <<
    "| Mediclaim Policy Premium for Parents(MPPP)(under Section 80D):Rs                  |    "
    << B.MPP_P << "     |\n";
  cout <<
    "| Preventive health Checkup (under section 80D):Rs                                  |    "
    << B.PHC << "  |\n";
  cout <<
    "| Medical treatment of handicapped dependent(under section 80DD):                   |    "
    << D15B << "     |\n";
  cout <<
    "| Medical treatment cost for specified diseases under section 80DDB:                |    "
    << D15C << "     |\n";
  cout <<
    "| Deduction in case of self being blind or physically handicapped under Section 80C:Rs               |    "
    << D15D << "    |\n";
  cout <<
    "| Payment of interest on loan taken for higher education for a full time course under section 80E:Rs  |    "
    << D15E << "  |\n";
  cout <<
    "| Investment made under notified equity savings scheme under section 80CCG:Rs       |    "
    << D15F << "    |\n";
  cout <<
    "|------------------------------------------------------------------------|\n";


}

class otherdata:public declar
{
public:
  long DN_80, SD, HRA2, HRA4, HRA5, IHP3, IHP4, IHP5, IHP6, D13N, DN, OT, TI,
    Tax, SUR, HCess, ECess, ShECess;
  void calslab ();		//Compute Deductions
  void slabside ();		//Compute Tax and other payables

  void compute ();		//Computes Taxable Income and shows how much to pay
  void call ();			//calls getdeclar() and compute() one after other
} A;
void
otherdata::calslab ()
{
  long t, a[3];
  if (strcmp (HCITY, "CHE") == 0 || strcmp (HCITY, "MUM") == 0
      || strcmp (HCITY, "KOL") == 0 || strcmp (HCITY, "DEL") == 0)
    {
      HRA2 = (0.50 * Basic);
    }
  else
    HRA2 = (0.40 * Basic);
  HRA4 = D6 - (0.10 * Basic);
  a[0] = HRA, a[1] = HRA2, a[2] = HRA4;
  for (int i = 0; i < 3; i++)
    {
      t = a[0];
      if (a[i] < a[0])
	{
	  t = a[i];
	}
    }
  HRA5 = t;
  IHP3 = D12A - D12B;
  IHP4 = (0.30 * IHP3);
  IHP6 = IHP3 - (IHP4 + D9);
  D13N =
    A.PP + A.LIP + A.PPF + A.NSC + A.ULIP + A.ELSS + A.TF + A.PAHL + A.FD_5Y +
    A.SSS + A.NPS;
  if (D13N <= 150000 && D14 == 0)
    {
      DN = D13N;
    }
  else if ((D13N <= 150000) && (D14 > 0) && (D13N + D14 <= 200000))
    {
      DN = D13N + D14;
    }

  if ((B.MPP_S + B.MPP_P + B.PHC) > 150000)
    DN_80 = 150000;
  else
    DN_80 = B.MPP_S + B.MPP_P + B.PHC;
  OT = D15B + D15C + D15D + D15E + D15F;
}

void otherdata::slabside ()
{
  int age = 18;
  if (age < 60)
    {
      if (TI <= 250000)
	Tax = 0;
      else if (TI > 250000 && TI <= 500000)
	{
	  Tax = (0.05 * (TI - 250000));
	}
      else if (TI > 500000 && TI <= 1000000)
	{
	  Tax = 25000 + (0.20 * (TI - 500000));
	}
      else if (TI > 1000000)
	Tax = 112500 + (0.30 * (TI - 1000000));
    }
  else if (age >= 60 && age <= 80)
    {
      if (TI <= 300000)
	Tax = 0;
      else if (TI > 300000 && TI <= 500000)
	{
	  Tax = 0.05 * (TI - 300000);
	}
      else if (TI > 500000 && TI <= 1000000)
	{
	  Tax = 10000 + (0.20 * (TI - 500000));
	}
      else if (TI > 1000000)
	Tax = 110000 + (0.30 * (TI - 1000000));
    }
  else if (age > 80)
    {
      if (TI <= 500000)
	Tax = 0;
      else if (TI > 500000 && TI <= 1000000)
	Tax = (0.20 * (TI - 500000));
      else if (TI > 1000000)
	Tax = 1000000 + (0.30 * (TI - 1000000));
    }

  if (Tax >= 5000000 && Tax <= 10000000)
    SUR = 0.10 * Tax;
  else if (Tax > 10000000)
    SUR = 0.15 * Tax;
  else
    SUR = 0;
  HCess = 0.01 * (Tax + SUR);
  ECess = 0.02 * (Tax + SUR);
  ShECess = 0.01 * (Tax + SUR);
}

void
otherdata::compute ()
{
  TI = GS;
  calslab ();
  SD = 40000;

  TI -= SD;

  if (strcmp (T_1_0, "Y") == 0 || strcmp (T_1_0, "y") == 0)
    {
      TI -= TA;

    }
  TI -= PT;

  TI -= HRA5;

  TI -= IHP6;

  TI -= D7;

  TI -= DN;

  TI -= DN_80;
  slabside ();

  cout <<
    "|--------------------------------------------------------------|\n";
  cout << "|               Gross Salary                 |    " << GS <<
    "      |\n";
  cout <<
    "+--------------------------------------------|-----------------+\n";
  cout <<
    "| Standard Deduction(SD):                    | Rs.40,000/-     |\n";
  cout << "| Conveyance/Travel Allowance(TA) deduction  |    " << TA <<
    "        |\n";
  cout << "| Professional Tax(PT) deduction             |    " << PT <<
    "        |\n";
  cout << "| HRA deduction                              |    " << HRA5 <<
    "        |\n";
  cout << "| Income from House Property Deduction       |    " << IHP6 <<
    "       |\n";
  cout << "| LTA Deduction                              |    " << D7 <<
    "        |\n";
  cout << "| Chapter VI-A deduction                     |    " << DN <<
    "            |\n";
  cout << "| Deductions under Mediclaim                 |    " << DN_80 <<
    "            |\n";
  cout << "| Other Chapter VI-A deduction               |    " << OT <<
    "        |\n";
  cout << "| Overall Taxable Income                     |    " << TI <<
    "      |\n";
  cout << "| Tax on Taxable Income                      |    " << Tax <<
    "       |\n";
  cout << "| Surcharge                                  |    " << SUR <<
    "            |\n";
  cout << "| Health Cess                                |    " << HCess <<
    "         |\n";
  cout << "| Secondary and Higher Education Cess        |    " << ShECess <<
    "         |\n";
  cout << "| Total Amount Payable                       |    " << (Tax + SUR +
								   HCess +
								   ShECess) <<
    "       |\n";
  cout <<
    "|--------------------------------------------------------------|\n";
}

void
otherdata::call ()
{
  getdeclar ();
  compute ();
}

class Tax
{
public:

  string na1, name, add;
  int company_type, age;
  char taxid[20];
  double income, tax, EHcess, Surcharge, TotalTax, netTax;

    Tax ()
  {
    tax = 0;
    TotalTax = 0;
    netTax = 0;
  }

  void getincome ()
  {
    cout << "Please enter your Profit: ";
    cin >> income;
  }
  void getdata ()		// To input basic details of an individual
  {
    cout << "Please enter your Name: ";
    cin >> name;
    cout << "Please enter your Age: ";
    cin >> age;
    cout << "Please enter your Address: ";
    cin >> add;

  }

  void info ()
  {
    cout << "Enter your company Name: ";
    cin >> na1;
  }
};

void
showtax ()			// function to show tax rates for NEW TAX REGIME 
{

  cout << "\nFor Non-Senior,Senior and Super-Senior Citizens:";
  cout << "\n+----------------------------+---------------------------+";
  cout << "\n|       Taxable Income       |            Tax Rate       |\n";
  cout << "+----------------------------|---------------------------+\n";
  cout << "|                 For Non-Senior Citizens:               |\n";
  cout << "|      Up to Rs. 2,50,000    |              Nil          |\n";
  cout << "|  Rs.2,50,000 to Rs.5,00,000|              5 %          |\n";
  cout << "| Rs.5,00,000 to Rs.10,00,000|             20 %          |\n";
  cout << "|      Above Rs.10,00,000    |             30 %          |\n";
  cout << "|----------------------------|---------------------------|\n";
  cout << "|----------------------------|---------------------------|\n";
  cout << "|                 For Non-Senior Citizens:               |\n";
  cout << "|      Up to Rs. 2,50,000    |              Nil          |\n";
  cout << "|  Rs.2,50,000 to Rs.5,00,000|              5 %          |\n";
  cout << "| Rs.5,00,000 to Rs.10,00,000|             20 %          |\n";
  cout << "|      Above Rs.10,00,000    |             30 %          |\n";
  cout << "|----------------------------|---------------------------|\n";
  cout << "|----------------------------|---------------------------|\n";
  cout << "|                For Super-Senior Citizens:              |\n";
  cout << "|      Up to Rs. 5,00,000    |              Nil          |\n";
  cout << "| Rs.5,00,000 to Rs.10,00,000|             20 %          |\n";
  cout << "|      Above Rs.10,00,000    |             30 %          |\n";
  cout << "+----------------------------|---------------------------+\n";
}

class do_company:public Tax	//domestic company
{
private:
  double turnover;
public:

  void displaytax1 ()
  {
    cout << "Enter turnover of company: ";
    cin >> turnover;
    cout << "Enter annual profit of Company: ";
    cin >> income;
    if (turnover < 5000000)
      {
	tax = income * 0.25;
      }
    else
      {
	tax = income * 0.3;
      }
    EHcess = 0.04 * income;
    tax = tax + EHcess + Surcharge;
    cout << "Tax Amount :";
    printf ("%lf", tax);
  }

  void showtax1 ()
  {
    cout << "|-------------------------------------------------------|\n";
    cout << "|              TAX FOR DOMESTIC COMPANY                 |\n";
    cout << "|-------------------------------------------------------|\n";
    cout << "|       COMPANY TURNOVER              |     Tax Rate    |\n";
    cout << "|-------------------------------------|-----------------|\n";
    cout << "|          Up to Rs. 50,000,00        |       25%       |\n";
    cout << "|        Greater Than Rs.5,00,000     |       30%       |\n";
    cout << "|-------------------------------------------------------|\n";
    cout << "|         Taxable Income              |     Surcharge   |\n";
    cout << "|-------------------------------------|-----------------|\n";
    cout << "| 100,00,000 but upto 1,000,00,000    |      7%         |\n";
    cout << "|  greater than 1,000,00,000          |      12%        |\n";
    cout << "|-------------------------------------------------------|\n";
  }

};

class fo_company:public Tax	//foreign company
{
public:
  void displaytax2 ()		// finds tax payable by the company
  {
    cout << "Enter annual profit of Company: ";
    cin >> income;
    tax = income * 0.4;
    EHcess = 0.04 * income;
    tax = tax + EHcess + Surcharge;
    //cout<<"Tax Amount :"<<tax;
    cout << "Tax Amount : ";
    printf ("%lf", tax);
  }

  void showtax1 ()
// contains the tax rates used in calculating tax payable by the company
  {

    cout << "|-------------------------------------------------------|\n";
    cout << "|              TAX FOR FOREIGN COMPANY                  |\n";
    cout << "|-------------------------------------------------------|\n";
    cout << "|       COMPANY TURNOVER              | Tax Rate        |\n";
    cout << "|-------------------------------------|-----------------|\n";
    cout << "|      For all companies              |     40%         |\n";
    cout << "|-------------------------------------------------------|\n";
    cout << "|         Taxable Income              |   Surcharge     |\n";
    cout << "|-------------------------------------|-----------------|\n";
    cout << "| 100,00,000 but upto 1,000,00,000    |      2%         |\n";
    cout << "|  greater than 1,000,00,000          |      5%         |\n";
    cout << "|-------------------------------------------------------|\n";

  }

};

class part_firm:public Tax	//partnership
{
public:

  double tax = income * 0.3;
  void info ()
  {
    cout << "Enter your firm name:";
    cin >> na1;
  }

  void displaytax3 ()
  {
    cout << "Enter annual profit of Company: ";
    cin >> income;
    if (income > 1000000)
      {
	Surcharge = tax * 0.3;
	tax += Surcharge;
      }
    EHcess = 0.04 * income;
    tax = tax + EHcess + Surcharge;
    cout << "Tax Amount :";
    printf ("%lf", tax);
  }

  void showtax1 ()
  {

    cout << "|-------------------------------------------------------|\n";
    cout << "|                TAX FOR PARTNERSHIP                    |\n";
    cout << "|-------------------------------------------------------|\n";
    cout << "|      Taxable Income        |         Tax Rate         |\n";
    cout << "|----------------------------|--------------------------|\n";
    cout << "|      For all companies     |              40%         |\n";
    cout << "|-------------------------------------------------------|\n";
    cout << "|      Taxable Income        |         Surcharge        |\n";
    cout << "|----------------------------|--------------------------|\n";
    cout << "|      For all companies     |              12%         |\n";
    cout << "|-------------------------------------------------------|\n";

  }

};

int
main ()
{
  int n, v;
  Tax t1;
  otherdata d;			// object of class otherdata
  do_company dc1;		// object of class domestic company
  fo_company fc1;		// object of class domestic company
  part_firm pf1;		// object of class domestic company
  //newindividual nd1;
  //getdata();
  t1.getdata ();
  cout << "|-------------------------------------------------------|\n";
  cout << "|          WELCOME TO INCOME TAX CALCULATOR             |\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  To Calculate Tax choose the following -              |\n";
  cout << "|-------------------------------------|-----------------|\n";
  cout << "|  1. Tax for INDIVIDUAL                                |\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  2. Tax for DOMESTIC COMPANY                          |\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  3. Tax for FOREIGN COMPANY                           |\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  4. Tax for PARTNERSHIP FIRM/LLP/LOCAL AUTHORITY      |\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "|  5. Tax DETAILS(perc.)                                |\n";
  cout << "|-------------------------------------------------------|\n";
  cout << "ENTER YOUR CHOICE" << endl;
  cin >> n;
  switch (n)
    {
    case 1:
      d.getsall ();
      d.call ();
      d.dispdeclar ();

      break;
    case 2:
      dc1.info ();
      dc1.displaytax1 ();
      break;
    case 3:
      fc1.info ();
      fc1.displaytax2 ();
      break;
    case 4:
      //pf1.getincome();
      pf1.info ();
      pf1.displaytax3 ();
      break;
    case 5:
      // showtax();
      cout << "|-------------------------------------------------------|\n";
      cout << "|                      TAX DETAILS FOR                  |\n";
      cout << "|-------------------------------------------------------|\n";
      cout << "|  1. INDIVIDUAL                                        |\n";
      cout << "|-------------------------------------------------------|\n";
      cout << "|  2. DOMESTIC COMPANY                                  |\n";
      cout << "|-------------------------------------------------------|\n";
      cout << "|  3. FOREIGN COMPANY                                   |\n";
      cout << "|-------------------------------------------------------|\n";
      cout << "|  4. PARTNERSHIP FIRM                                  |\n";
      cout << "|-------------------------------------------------------|\n";
      cout << "ENTER YOUR CHOICE" << endl;
      cin >> v;

      switch (v)
	{
	case 1:
	  showtax ();
	  break;
	case 2:
	  dc1.showtax1 ();
	  break;
	case 3:
	  fc1.showtax1 ();
	  break;
	case 4:
	  pf1.showtax1 ();
	  break;
	default:
	  cout << "Enter the number in range(1-4)" << endl;
	  break;
	}
      break;
    default:
      cout << "Enter the number in range(1-5)" << endl;
      break;
    }
}
