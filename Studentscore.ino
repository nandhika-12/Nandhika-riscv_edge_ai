// ESP32 Student Score Management System
// Save as: student_scores.ino

struct Student {
  String name;
  int mark1;
  int mark2;
  int mark3;
  int total;
  float average;
  char grade;
};

Student s;

void calculateResults() {
  s.total = s.mark1 + s.mark2 + s.mark3;
  s.average = s.total / 3.0;

  if (s.average >= 90)
    s.grade = 'A';
  else if (s.average >= 75)
    s.grade = 'B';
  else if (s.average >= 50)
    s.grade = 'C';
  else
    s.grade = 'F';
}

void setup() {
  Serial.begin(115200);

  Serial.println("=================================");
  Serial.println(" ESP32 Student Score Management ");
  Serial.println("=================================");

  // Sample student data
  s.name = "Madhumitha";
  s.mark1 = 85;
  s.mark2 = 92;
  s.mark3 = 78;

  calculateResults();

  // Display results
  Serial.println("\nStudent Details");
  Serial.println("----------------------");
  Serial.print("Name      : ");
  Serial.println(s.name);

  Serial.print("Mark 1    : ");
  Serial.println(s.mark1);

  Serial.print("Mark 2    : ");
  Serial.println(s.mark2);

  Serial.print("Mark 3    : ");
  Serial.println(s.mark3);

  Serial.print("Total     : ");
  Serial.println(s.total);

  Serial.print("Average   : ");
  Serial.println(s.average);

  Serial.print("Grade     : ");
  Serial.println(s.grade);

  Serial.println("----------------------");
}

void loop() {
  // No repeated task
}