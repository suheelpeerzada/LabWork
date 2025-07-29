<?php
// Database connection
$host = 'localhost';  // Your MySQL host (usually 'localhost' for XAMPP)
$username = 'root';   // Your MySQL username (default 'root' in XAMPP)
$password = '';       // Your MySQL password (empty by default in XAMPP)
$database = 'attendance_system';  // Your database name

$mysqli = new mysqli($host, $username, $password, $database);

if ($mysqli->connect_error) {
    die("Connection failed: " . $mysqli->connect_error);
}

// Retrieve data from the form
$student_id = $_POST['student_id'];
$subject1 = $_POST['subject1'];
$subject2 = $_POST['subject2'];
$subject3 = $_POST['subject3'];
$subject4 = $_POST['subject4'];
$subject5 = $_POST['subject5'];
$date = $_POST['date'];

// Insert the data into the 'daily_attendance' table
$query = "INSERT INTO daily_attendance (student_id, attendance_date, subject1, subject2, subject3, subject4, subject5)
          VALUES ('$student_id', '$date', '$subject1', '$subject2', '$subject3', '$subject4', '$subject5')";

if ($mysqli->query($query) === TRUE) {
    echo "Attendance recorded successfully for $date.";
} else {
    echo "Error: " . $query . "<br>" . $mysqli->error;
}

$mysqli->close();
?>
