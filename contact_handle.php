<?php
$name = $_POST['name'];
$visitor_email = $POST['email'];
$message = $POST['message'];

$email_from = 'ahsagar.cse@gmail.com';
$email_subject = "New Submission";
$email_body= "User Name:$name.\n".
				"User Email:$visitor_email.\n".
				"User Message:$message.\n";

$to = "achromaticboysagar2@gmail.com";
$headers = "From:$email_from \r\n";
$headers .= "Reply-To:$visitor_email \r\n";
mail($to,$email_subject,$email_body,$headers);
header("Location: index.html");
?>