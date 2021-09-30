class CourseType{
    private:
string courseName;
string courseNo;
int courseCredits;
    public:
        courseType(string cName = "", string cNo = "",int credits = 0);
void setcourse(string Cname,string cNo,int credits);
string getCourseName();
string getCourseNumber();
int getCredits();
void print(ostream& outF);




};
void courseType::setCourseInfo(string cName, string cNo,
int credits)
{
courseName = cName;
courseNo = cNo;
courseCredits = credits;
} //end setCourseInfo
void courseType::print(ostream& outF)
{
outF << left; //Step 1
outF << setw(8) << courseNo << " "; //Step 2
outF << setw(15) << courseName; //Step 3
outF << right; //Step 4
outF << setw(3) << courseCredits << " "; //Step 5
} //end print
courseType::courseType(string cName, string cNo, int credits)
{
courseName = cName;
courseNo = cNo;
courseCredits = credits;
} //end default co
int courseType::getCredits()
{
return courseCredits;
} //end getCredits
string courseType::getCourseNumber()
{
return courseNo;
}//end getCourseNumber
string courseType::getCourseName()
{
return courseName;
} //end getCourseName
class studentType: public personType
{
public:
void setInfo(string fname, string lName, int ID,
int nOfCourses, bool isTPaid,
courseType courses[], char courseGrades[]);

void print(ostream& outF, double tuitionRate);

studentType();

int getHoursEnrolled();

double getGpa();

double billingAmount(double tuitionRate);


private:
void sortCourses();

int sId; //variable to store the student ID
int numberOfCourses; //variable to store the number
//of courses
bool isTuitionPaid; //variable to indicate whether the
courseType coursesEnrolled[6]; //array to store the courses
char coursesGrade[6]; //array to store the course grades
};
