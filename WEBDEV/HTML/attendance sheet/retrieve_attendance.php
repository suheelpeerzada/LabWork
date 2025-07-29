<?php
// Database connection (same as insert_attendance.php)
$host = 'localhost';
$username = 'root';
$password = '';
$database = 'attendance_system';

$mysqli = new mysqli($host, $username, $password, $database);

if ($mysqli->connect_error) {
    die("Connection failed: " . $mysqli->connect_error);
}

// Retrieve the date for which you want to retrieve attendance
$date = $_GET['date']; // Assuming you pass the date as a query parameter in the URL

// Query to retrieve attendance data for the specified date
$query = "SELECT * FROM daily_attendance WHERE attendance_date = '$date'";

$result = $mysqli->query($query);

if ($result->num_rows > 0) {
    // Output attendance data
    while ($row = $result->fetch_assoc()) {
        // Display attendance data for each student
        echo "Student ID: " . $row['student_id'] . "<br>";
        echo "Date: " . $row['attendance_date'] . "<br>";
        echo "Subject 1: " . $row['subject1'] . "<br>";
        echo "Subject 2: " . $row['subject2'] . "<br>";
        echo "Subject 3: " . $row['subject3'] . "<br>";
        echo "Subject 4: " . $row['subject4'] . "<br>";
        echo "Subject 5: " . $row['subject5'] . "<br>";
        echo "<hr>";
    }
} else {
    echo "No attendance records found for $date.";
}

$mysqli->close();
?>
