#include <iostream>
#include <vector>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;

class Student
{
private:
    string name;
    string email;
    int age;
    string gender;
    string course;

public:
    // Constructor
    Student(string name, string email, int age, string gender, string course) : name(name), email(email), age(age), gender(gender), course(course) {}

    // Getter methods
    string getName()
    {
        return name;
    }
    string getemail()
    {
        return email;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }
    string getCourse()
    {
        return course;
    }
};

class EmailAndPass
{
private:
    string email;
    string pass;

public:
    // Constructor
    EmailAndPass(string email, string pass) : email(email), pass(pass) {}

    // Getter methods
    string getemail()
    {
        return email;
    }
    string getpass()
    {
        return pass;
    }
};

class text
{
public:
    string text1;

public:
    text()
    {
    }

    // Getter methods
    void ElecEng()
    {
        cout
            << "Brief of Department\n\n"
            << "Vision:\n\n"
            << "To be in a distinct regional and local status in the university education and scientific research and serving the society in all the fields of electrical engineering.\n\n"
            << "Mission:\n\n"
            << "To graduate highly skilled electrical engineers who are capable of competing locally and regionally\n\n"
            << "Goals :\n\n"
            << "Preparing engineers who have the required technical skills in the field of electrical engineering.\n"
            << "Preparing engineers who respect the profession's ethics and traditions in their domain and passing them to the community.\n"
            << "Modernizing the laboratories and establishing new ones where necessary."
            << "Providing the consulting, scientific, and applied services to all sectors of the state and the private sector.\n"
            << "Providing the appropriate climate for the teaching staff and postgraduate studies' students to conduct distinct researching activities.\n"
            << "Holding scientific conferences, symposiums, and panel discussions to keep pace  with the scientific development in electrical engineering.\n\n"
            << "Fields of study at the electrical engineering department:\n\n"
            << "1. Electrical power and machines engineering.\n"
            << "2. Electronics and communications engineering.\n"
            << "3. Systems and computers engineering.\n";
    }

    void CivilEng()
    {
        cout
            << " Civil Engineering Department\n\n"
            << " Head of civil engineering department's word\n\n"
            << " The civil engineering is considered as one of the oldest science on earth , civil engineering department is distinguished by the variety of its specialties\n"
            << " and numerous work areas, and also the permanent need of the job market to its graduates for all projects whatever its  domain must include a civil engineering component.\n\n"
            << " The work areas for the department's graduates are too varied, to name just a few, the civil engineering graduate can work in the following fields:\n\n"
            << " Roads, airports, bridges, canals, and sanitation(irrigation)\n"
            << " Drinking water systems and sanitation.\n"
            << " Water purification station and liquid effluents treatment.\n"
            << " Concrete and mineralogical structures.\n"
            << " Survey.\n\n"
            << " The department seeks to graduate promising scientifically qualified academic classes where the department has a group of qualified teaching staff who has got\n"
            << " both scientific and practical experiences.in addition to the availability of the different labs which support the educational process and make\n"
            << " the civil engineering graduate of Aswan University capable of competition in the labor market.\n"
            << " The department also contributes to the postgraduate sector where there are a lot of opportunities of higher education at the level of master's and PhD degree.\n"
            << " We ask Allah to make us capable of building a new generation of students hoping them to become a useful cadre to their country and people and achieve what they\n"
            << "  are expected to be for the progress of our beloved Egypt.\n\n"
            << "\t\tProf. Amr Muhammad Wahb Allah\n\n"
            << "\t\tHead of civil engineering department";
    }
    void ArchEng()
    {
        cout
            << " Architectural Engineering Department\n\n"
            << " The Department of Architecture is keen on graduating engineers who have a clear knowledge of the integrative nature of architectural design, a talent for\n"
            << " taste, creativity, and a sense of beauty, as well as having knowledge of architectural experiences from drawing skills and solving three-dimensional problems.";
    }
    void VisAndMiss()
    {
        cout << "             Mission  \n \n";
        cout
            << "- Graduate engineers in different specialties that meet the technical needs of industrial and service institutions.\n"
            << "- Provide alumni with the basics of knowledge and skills according to international criteria and the major engineering\n"
            << "- projects' requirements in the field of specialty with complete awareness of the society's problems and the professional ethics.\n"
            << "- Raise the engineers' capacities through workshops and postgraduate studies programs; diploma,master and doctorate.\n"
            << "- Help in enriching engineering sciences through scientific research, community service and environmental development through professional advice.\n\n ";
        cout << "             Vision \n \n";
        cout
            << "- Aswan university faculty of engineering is looking forward to be a pioneer in the field of engineering education, scientific research and community service.\n"
            << "  It is committed to providing the best opportunities of engineering education and the research services for students and the surrounding society with ongoing development\n"
            << "  of this service to graduate qualified engineers in the different engineering specialties and supplying them with the principles of knowledge and skills.\n\n";
        cout << "             Goals \n \n";
        cout
            << "  Engineering is the profit where knowledge of basic sciences as Mathematics, Physics, Chemistry, etc. are applied through engineering study and practice\n"
            << "  for the sake of development and innovation of methods, machines, resources, and power for the benefit of human society.so the faculty is working on achieving\n"
            << "  the following goals throughout its scientific departments which cover all disciplines the job market needs:\n"
            << "- Prepare a graduate who is capable of applying engineering sciences and its methods in practical life.\n"
            << "- Prepare a graduate who is capable of making decisions and dealing with crises.\n"
            << "- Prepare a graduate who is literate in modern technology and information technology and how to deal with it.\n"
            << "- Prepare a graduate who is capable of competing in job market in the new and changed circumstances of the international society.\n"
            << "- Contributing in improving community and environment by participating in developing scientific solutions for the existing problems throughout studies and researches.\n"
            << "- Contributing in preparing technical specialized personnel in the different fields to meet the needs of society \n"
            << "  and required by inclusive development, and qualifying graduates in the novel fields which the market needs.\n"
            << "- Providing distinct education contributes in preparing scientists, intellectuals and creators who represent the real wealth of society progress.\n"
            << "- The continues developing of the academic programs and postgraduate programs to keep pace with scientific and\n"
            << "  technological advances, and conducting applied researches and studies related to the community's problems and development programs in Upper Egypt.\n"
            << "- Present consulting expertise for production authorities and associations and service sector to serve the environment and develop community.\n"
            << "- Support and strengthen the cultural and scientific links with the scientific institutions and engineering faculties in the Arab and international universities.\n";
    }
    void history()
    {
        cout
            << " The faculty of engineering and technology was established in 1995 and located in Southern Abu El-Rish region.\n"
            << " The studying began at academic year 1995/1996 and the first dean was Prof .Mohamed Hussien Amin and now occupied by Prof .Loay Saad Aldeen Nassrat_dean of the faculty.\n\n"
            << " The faculty contains the following departments:\n"
            << " Electrical engineering.\n"
            << " Civil engineering.\n"
            << " Architectural Engineering.\n\n "
            << "                 Name \t\t\t	period\n"
            << " Prof. Mohamed Hussein Amin             From 18/10/1996 to 17/10/2000\n"
            << " Prof. Mohamed Tharwat Abd Alrahman	From 18/10/2000 to 26/7/2006.\n"
            << " Prof. Abdallah Ahmed Ibraheim	        From 27/7/2006 to 27/3/2011\n"
            << " Prof. Mohamed Abd Alaziz Mehalel       From 28/3/2011 to 17/1/2013\n"
            << " Prof. Ayman Mahmoud Osman	        From 18/1/2013 to 17/1/2015\n"
            << " Prof. Abd Almageed Mohamed Ali	        From 18/1/2015 to 16/3/2015\n"
            << " Prof. Ayman Mahmoud Osman	        From17/3/2015 to 30/8/2017\n"
            << " prof. Loay Saad Aldeen Nassrat	        From 1/9/2017 until today \n\n";
    }
    void DeanSpeech()
    {
        cout
            << "             Prof. Loay Saad El-Dean Nasrat \n \n"
            << "             Dean of Faculty \n \n"
            << "             Dear students of the Faculty \n \n"
            << " I congratulate the students of faculty of engineering on the new academic year 2017-2018, wishing them all the best to achieve their goals.\n"
            << " I thank my students to choose the profession of engineering to become engineers have the responsibility to make the country advanced.\n\n"
            << "             My dear teaching staff: \n \n"
            << " You guide your students, so you should be a role model for them and exert the time and efforts to enrich the research and educational process and serve the society in all fields.\n\n"
            << "             My dear administrators: \n \n"
            << " Any research, social and educational process needs a strong and effective system to strengthen its performance, you should be supportive to\n"
            << " your students, ease the obstacles, treat them kindly and seek together to develop all the administrations to cope the administrative work with\n"
            << " the academic one to achieve the best institutional performance which suits the requirements of the educational system.\n\n"
            << " In the end, I pleased to congratulate the students of the faculty on belonging to this scientific faculty, wishing them the best wishes.";
    }
    void leadership()
    {
        cout
            << " Dean of the College:         Prof. Loay Saad El-Dean Nasrat\n"
            << " Vice-dean for student and education affairs:        Prof. Loay Saad El-Dean Nasrat\n"
            << " Vice Dean for Postgraduate Studies and Research:        Prof.Mohammed Abd El-Aziz Mehalel\n"
            << " Vice Dean For Environmental Development  and Community  Services:         Vice Dean For Environmental Development  and Community  Services\n"
            << " Director of the Quality Assurance Unit:         Dr. Montaser Mohammed Mohammed\n\n"
            << "             Faculty leaderships \n \n"
            << " Head of the Department of Electrical Engineering:         Prof. Loay Saad El-Dean Nasrat\n"
            << " Head of the civil engineering department         Prof. Mohammed Fekry Abd El- Mobdy\n"
            << " Head of the architectural engineering department:          Dr. Hatem Mahmoud Fathy\n"
            << " Head of the Department of Architectural Engineering:           Dr.  Lubna Mahmoud Mubarak Ahmed";
    }
    void Councle()
    {
        cout
            << "♦ Formation of the Council (Article 40 of the Universities Organization Law):\n"
            << "  The college council or institute affiliated to the university, headed by the dean, and its members are:\n\n"
            << "◊ The College Vice Dean\n\n"
            << "◊ Department heads\n\n"
            << "◊ A professor from each department, provided that the department's professors rotate periodically every year in order\n"
            << "  of their seniority in the professorship, and the University Council may, upon the request of the College or Institute\n"
            << "  Council, include to the membership of the Council five professors at most who do not have a membership for a renewable year.\n\n"
            << "◊ An assistant professor and a teacher in colleges and institutes in which the number of departments does not exceed ten, and two assistant\n"
            << "  professors and teachers if the number of departments in them exceeds ten and the membership is rotated periodically every year in order of\n"
            << "  seniority in each category, and these members do not attend the meetings of the faculty council when considering the affairs of employing\n"
            << "  professors nor The teachers come from them when the affairs of the assistant professors are considered.\n\n"
            << "  Three members at most who have special knowledge in the subjects taught at the college or institute, who are appointed for a renewable two-year\n"
            << "  term based on a decision from the university president based on the proposal of the college or institute council and the approval of\n "
            << "  the university council, and they may not combine membership of more than one college council. And institutes affiliated with universities\n"
            << "  subject to this law, nor that they combine membership of the college or institute council with the membership of the university council to which\n"
            << "  the college or institute is affiliated.\n"
            << "  The heads of departments that carry out the teaching duties in a college or institute other than their own college or institute participate in the council of that college or institute when considering issues within the competence of their departments.\n\n"
            << "  Formation of the College Board for the academic year 2020/2021 AD as follows:\n\n"
            << "1.  Prof.  Dean of the Faculty as Chairman.\n"
            << "2.  Prof.   Vice Dean for Postgraduate Studies and Research, Member.\n"
            << "3.  Prof.  Vice Dean for Community Service and Environmental Development, Member.\n"
            << "4.  Prof.   Vice Dean for Education and Student Affairs, Member.\n"
            << "5.  Prof.  Head of the Department of Electrical Engineering, Member.\n"
            << "6.  Dr. Acting Head of the Civil Engineering Department, Member.\n"
            << "7.  Dr.  Acting Head of the Architectural Engineering Department, Member.\n"
            << "8.  Prof.  Abdullah Ahmed Ibrahim Mohamed - Professor Emeritus, Department of Electrical Engineering, Member.\n"
            << "9.  Prof. Abdul Majeed Muhammad Ali Muhammad - Professor Emeritus, Department of Electrical Engineering, Member.\n"
            << "10. Prof.  Ayman Mahmoud Othman Abu Zeid - Professor, Department of Civil Engineering, Member.\n"
            << "11. Prof.  Osama Ahmed Omar Abdel Aziz - Professor, Department of Electrical Engineering, Member.\n"
            << "12. Prof. . Mohamed Zakaria Abdel Hamid Hassan - Assistant Professor, Department of Civil Engineering, Member.\n"
            << "13. Dr. Mustafa Muhammad Dardir Ahmed - Lecturer, Department of Electrical Engineering, Secretary.\n"
            << "    Members with special knowledge of the subjects taught at the college.\n"
            << "14. Prof.  Muhammad Hussein Amin - Associate Professor, Faculty of Engineering - Assiut University, Member.\n"
            << "15. Prof. Mohamed Tharwat Abdel-Haman - Associate Professor, Faculty of Engineering - Assiut University, Member.\n"
            << "16. Dr. Director of the Quality Assurance and Qualification Unit for Accreditation, Member.\n"
            << " Article 41: The faculty or institute affiliated to the university shall have the authority to consider the following issues:\n"
            << " First: issues of planning, coordination, organization and follow-up:\n"
            << " Drawing up the general policy for education and scientific research in the college or institute, and organizing and coordinating it between the various departments.\n"
            << " Developing a plan to complete and construct buildings and support the laboratories, equipment and library in the college or institute.\n"
            << " Preparing the college or institute\n"
            << " plan for scholarships, study leave and foreign scholarships.\n"
            << " Preparing a program to complete the faculty members of the college or institute.\n"
            << " Preparing a policy to encourage study in some departments of the college or institute.\n"
            << " Preparing the policy to facilitate the access of college or institute students to books and university notes and to encourage authorship in some subjects.\n"
            << " Draw the general framework for the work system in the departments of the college or institute and organize coordination between these departments.\n"
            << " Approval of the scientific content of study decisions in the college or institute and coordination between them in the various departments.\n"
            << " Express an opinion on drafting the executive regulations for universities and preparing the internal bylaws of the college or institute.\n"
            << " Laying down the internal regulations for the college or institute library.\n"
            << " Organizing the admission of students to the college or institute and determining their preparation.\n"
            << " Organizing lessons, lectures, research, exercises and examination work in the college or institute.\n"
            << " Discussing the annual report of the institute, department reports and recommendations of scientific conferences of the college or institute and departments,"
            << " and evaluating and reviewing the study, examination and research systems in the college or institute.\n"
            << " And its renewal in light of all this and within the framework of scientific and educational progress and the demands and evolving needs of society.\n"
            << " Organizing administrative and financial affairs in the college or institute.\n"
            << " Preparing the college or institute's budget project.\n"
            << " Follow up the implementation of the general policy of education and research in the college or institute.\n\n"
            << " Second: Executive matters:\n\n"
            << " Distribution of financial allocations to the departments.\n"
            << " Transferring students and transferring their registration to and from the college or institute.\n"
            << " Registration of students for postgraduate studies, registration of master's and doctoral theses, appointment of committees to judge letters, and the cancellation\n"
            << " of registration and registration.\n"
            << " Distributing lessons, lectures and practical exercises.\n"
            << " Determining examination dates, setting schedules, distributing work, forming committees, determining the duties of the examiners, and approving examination committee\n"
            << " deliberations and examination results in the college or institute.\n"
            << " A proposal to grant degrees, scientific certificates and diplomas from the college or institute.\n"
            << " Nomination for scholarships, scholarships, study leave, and full-time rewards for postgraduate studies.\n"
            << " Suggesting the appointment and transfer of faculty members in the college or institute.\n"
            << " Delegating to and from the college or institute.\n"
            << " Nomination for scientific assignments, secondments, and sabbatical leave.\n"
            << " Taking care of social and sports affairs for students.\n"
            << " Proposing the acceptance of donations, taking into account the provision of Article Seven.\n"
            << " Acceptance of transferring students of the first teams according to the conditions of the corresponding colleges and institutes in the universities subject to this law.\n"
            << " Acceptance of transferring and transferring student registration from colleges or institutes not affiliated with the universities subject to this law.\n"
            << " Registration of master's and doctoral theses, appointment of committees to judge these letters, and cancellation of registration.\n\n"
            << " Third - Miscellaneous Issues:\n\n"
            << " Other issues referred to him by the University Council.\n"
            << " Other matters pertaining to it according to the law.\n\n"
            << " Article (42):\n\n"
            << " The dean implements the decisions of the college or institute council, communicates the minutes of the sessions to the president of the university, and informs him of\n"
            << " the decisions within eight days from the date of their issuance and informs the relevant university bodies and authorities of the decisions that must be communicated to them.";
    }
};

// TODO: Functions are related to the classes

// Function to check email and password
vector<EmailAndPass> emails_and_pass = {EmailAndPass("mohamed123@gmail.com", "123456789"), EmailAndPass("ahmed123@gmail.com", "987654321")};
vector<Student> students = {Student("mohamed adel ali ", "mohamed123@gmail.com", 20, "male", "math"), Student("Ahmed sadiq ", "ahmedsadiq123@gmail.com", 20, "male", "electronics")};
text o1;

void Set_Em_And_Pass(string aemail, string apass)
{
    emails_and_pass.push_back(EmailAndPass(aemail, apass));
    cout << "successfully registered";
    sleep_for(1s);
}
bool Check_Em_and_Pass(string aemail, string apass)
{
    bool ichecked;
    for (int i = 0; i < emails_and_pass.size(); ++i)
    {
        if ((emails_and_pass.at(i)).getemail() == aemail && (emails_and_pass.at(i)).getpass() == apass)
        {
            ichecked = 1;
            break;
            cout << "wlecome to site";
        }
        else
            ichecked = 0;
    }
    return ichecked;
}

// Function to enroll student (data of the student)
void enrollStudent(vector<Student> &students)
{
    string name, gender, course, email;
    int age;

    cout << "Enter student name: ";
    getline(cin >> ws, name);
    cout << "Enter student email: ";
    getline(cin >> ws, email);
    cout << "Enter student age: ";
    cin >> age;
    cout << "Enter student gender: ";
    getline(cin >> ws, gender);
    cout << "Enter student course: ";
    getline(cin >> ws, course);

    students.push_back(Student(name, email, age, gender, course));
    cout << "Student enrolled successfully!" << endl;
}

// Function to display all enrolled students
void displayStudents(vector<Student> &students)
{
    cout << "Enrolled Students:" << endl;
    for (int i = 0; i < students.size(); i++)
    {
        cout << "\n " << i + 1 << ": \n";
        cout << "Name:  " << (students.at(i)).getName() << "\n";
        cout << "email: " << (students.at(i)).getemail() << "\n";
        cout << "Age:   " << (students.at(i)).getAge() << "\n";
        cout << "Gender: " << (students.at(i)).getGender() << "\n";
        cout << "Course: " << (students.at(i)).getCourse() << endl;
    }
}

