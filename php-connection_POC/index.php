<?php
  $servername = "localhost";
  $username = "root";
  $password = "root";
  $db = "payband";

  // Create connection
  $conn = new mysqli($servername, $username, $password);

  // Check connection
  if ($conn->connect_error) {
      die("Connection failed: " . $conn->connect_error);
  }
  echo "Connected successfully";

  $request = $_GET['user'];
  $sql = "INSERT INTO payband.user (user) VALUES ('$request')";

  mysqli_query($conn, $sql);
?>


<?php
  $conn->close();
?>
