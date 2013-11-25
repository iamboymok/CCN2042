#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <vector>

using namespace std;

const static string STUDENT_RESULT_FILE = "studentRes.txt";
const static string GRADING_FILE = "GradeScoreMap.txt";
const static string SUBJECT_INFO_FILE = "SubjectInfo.txt";

// class to hold the subject information
class CSubjectInfo
{
    public:
        CSubjectInfo();
        CSubjectInfo(const string& sSubjectCode, const string& sDescription, double dbEngWeight, double dbSciWeight);
        CSubjectInfo(const CSubjectInfo& obj);
        ~CSubjectInfo();
        
        CSubjectInfo& operator=(const CSubjectInfo& obj);
        
    public:
        string m_sSubjectCode;
        string m_sDescription;
        double m_dbEngWeight;
        double m_dbSciWeight;
};


class CSubjectInfoList : public vector<CSubjectInfo>
{
    public:
        CSubjectInfoList();
        virtual ~CSubjectInfoList();
        
    public:
        void Add(const string& sSubjectCode, const string& sDescription, double dbEngWeight, double dbSciWeight);
        
};

class CSubjectResult
{
    public:
        CSubjectResult();
        CSubjectResult(const string& sSubjectCode, const string& sSubjectGrade);
        CSubjectResult(const CSubjectResult& obj);
        ~CSubjectResult();
        
        CSubjectResult& operator=(const CSubjectResult& obj);
        
    public:
        string m_sSubjectCode;
        string m_sSubjectGrade;
};

class CGradeInfo
{        
    public:
        CGradeInfo();
        CGradeInfo(const string& sGrade, int iScore);
        CGradeInfo(const CGradeInfo& obj);
        virtual ~CGradeInfo();
        CGradeInfo& operator=(const CGradeInfo& obj);
    public:
        string m_sGrade;
        int m_iScore;
};

/*
class CGradeInfoMap : public map<string, CGradeInfo>
{
    public:
        CGradeInfoMap();
        virtual ~CGradeInfoMap();
        
};
*/

class CStudent
{
    public:
        CStudent();
        CStudent(const CStudent& obj);
        ~CStudent();
        
    public:
        string m_sStudentID;
        string m_sStudentName;
        vector<CSubjectResult> m_oSubjectResultList;
};

/*
class CStudentList : public map<string, CStudent>
{
    public:
};
*/

class CASCSystem
{
    public:
        CASCSystem();
        ~CASCSystem();
        
    public:
        void Run();
        
    private:
        void Init();
        void CleanUp();
        
        void PrintWelcomeMessage();
        void PrintMainMenu();
        void PrintChangeCriteriaMenu();
        void PrintStudentListMenu();
        void PrintStudentMenu();
        
        void ListSubjectWeight();
        void SearchStudent();
        
        
        bool LoadStudentResultFile(const string& sStudentResultFile = STUDENT_RESULT_FILE);
        
        bool LoadGradingFile(const string& sGradingFile = GRADING_FILE);
        void LoadDefaultGrading();
        
        bool LoadSubjectInfoFile(const string& sSubjectInfoFile = SUBJECT_INFO_FILE);
        void LoadDefualtSubjectInfoFile();
        
    private:
        vector<CStudent> m_oStudentList;
        //CStudentList m_oStudentList;
        //vector<CSubjectInfo> m_oSubjectInfoList;
        CSubjectInfoList m_oSubjectInfoList;
        
        
};



int main(int args, char** argv)
{
    
    
    return 0;
}


////////////////////////////////
// CSubjectInfo definition
////////////////////////////////
CSubjectInfo::CSubjectInfo()
{
}

CSubjectInfo::CSubjectInfo(const string& sSubjectCode, const string& sDescription, double dbEngWeight, double dbSciWeight)
{
}

CSubjectInfo::CSubjectInfo(const CSubjectInfo& obj)
{
}

CSubjectInfo::~CSubjectInfo()
{
}

CSubjectInfo& CSubjectInfo::operator=(const CSubjectInfo& obj)
{
    return *this;
}

////////////////////////////////
// CSubjectInfoList definition
////////////////////////////////
CSubjectInfoList::CSubjectInfo()
{
}

////////////////////////////////
// CStudent definition
////////////////////////////////
CStudent::CStudent()
{
}

CStudent::CStudent(const CStudent& obj)
{
}

CStudent::~CStudent()
{
}

////////////////////////////////
// CSubjectResult definition
////////////////////////////////
CSubjectResult::CSubjectResult()
{
}

CSubjectResult::CSubjectResult(const string& sSubjectCode, const string& sSubjectGrade)
{
}

CSubjectResult::CSubjectResult(const CSubjectResult& obj)
{
}

CSubjectResult::~CSubjectResult()
{
}
                            
CSubjectResult& CSubjectResult::operator=(const CSubjectResult& obj)
{
    return *this;
}
////////////////////////////////
// CASCSystem definition
////////////////////////////////
CASCSystem::CASCSystem()
{
    Init();
}

CASCSystem::~CASCSystem()
{
}

void CASCSystem::Init()
{
    if (!LoadGradingFile())
    {
        LoadDefaultGrading();
    }
    
    if (!LoadSubjectInfoFile())
    {
        LoadDefualtSubjectInfoFile();
    }
    
}

bool CASCSystem::LoadStudentResultFile(const string& sStudentResultFile)
{
    return true;
}
        
bool CASCSystem::LoadGradingFile(const string& sGradingFile)
{
    return false;
}

void CASCSystem::LoadDefaultGrading()
{
    
}

bool CASCSystem::LoadSubjectInfoFile(const string& sSubjectInfoFile)
{
    return false;
}

void CASCSystem::LoadDefualtSubjectInfoFile()
{
    m_oSubjectInfoList.Add("DS001", "Chinese Language"                      , 1, 1);
    m_oSubjectInfoList.Add("DS002", "English Language" 2 2
    m_oSubjectInfoList.Add("DS003", "Mathematics" 1.5 1.5
    m_oSubjectInfoList.Add("DS004", "Liberal Studies" 1 1
    m_oSubjectInfoList.Add("DS005", "Biology" 1.5 1.5
    m_oSubjectInfoList.Add("DS006", "Business 1 1
    m_oSubjectInfoList.Add("DS007", "Accounting and Financial Studies 1 1
    m_oSubjectInfoList.Add("DS008", "Chemistry 1.5 1.5
    m_oSubjectInfoList.Add("DS009", "Chinese History 1 1
    m_oSubjectInfoList.Add("DS010", "Chinese Literature 1 1
    m_oSubjectInfoList.Add("DS011", "Combined Science 1 2
    m_oSubjectInfoList.Add("DS012", "Design and Applied Technology 2 1
    m_oSubjectInfoList.Add("DS013", "Economics 1 1
    m_oSubjectInfoList.Add("DS014", "Ethics and Religious Studies 1 1
    m_oSubjectInfoList.Add("DS015", "Geography 1 1
    m_oSubjectInfoList.Add("DS016", "Health Management and Social Care 1 1
    m_oSubjectInfoList.Add("DS017", "History",                                , 1, 1);
    m_oSubjectInfoList.Add("DS018", "Information and Communication Technology", 2, 1);
    m_oSubjectInfoList.Add("DS019", "Integrated Science 1.5 1.5
    m_oSubjectInfoList.Add("DS020", "Literature in English 1 1
    m_oSubjectInfoList.Add("DS021", "Music 1 1
    m_oSubjectInfoList.Add("DS022", "Physical Education 1 1
    m_oSubjectInfoList.Add("DS023", "Physics 1 2
    m_oSubjectInfoList.Add("DS024", "Technology and Living 1.5 1
    m_oSubjectInfoList.Add("DS025", "Tourism and Hospitality Studies 1 1
    m_oSubjectInfoList.Add("DS026", "Visual Arts 1 1
}

void CASCSystem::PrintWelcomeMessage()
{
    cout << "***************************" << endl;
    cout << "** Welcome to ASC System **" << endl;
    cout << "** Authors:              **" << endl;
    cout << "**    XXX                **" << endl;
    cout << "***************************" << endl;
}

void CASCSystem::PrintMainMenu()
{
    cout << "**** ASC System Menu **** " << endl;
    cout << "(1) List subject weights  " << endl;
    cout << "(2) Change criteria       " << endl;
    cout << "(3) Student list          " << endl;
    cout << "(4) Search student        " << endl;
    cout << "(5) Quit                  " << endl;
    cout << "************************* " << endl;
    cout << "Enter your option (1 - 5):" << endl;
    
}

void CASCSystem::PrintChangeCriteriaMenu()
{
}

void CASCSystem::PrintStudentListMenu()
{
}

void CASCSystem::PrintStudentMenu()
{
}
    
    
void CASCSystem::ListSubjectWeight()
{
}
