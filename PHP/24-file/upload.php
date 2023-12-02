<?php
$targetDir = "uploads/";
$targetFile = $targetDir . basename($_FILES["fileToUpload"]["name"]);
$uploadOk = 1;
$imageFileType = strtolower(pathinfo($targetFile, PATHINFO_EXTENSION));

if (file_exists($targetFile)) {
    echo "Sorry, file already exists.";
    $uploadOk = 0;
}


$allowedTypes = array("jpg", "jpeg", "png", "gif", "pdf");
if (!in_array($imageFileType, $allowedTypes)) {
    echo "only JPG, JPEG, PNG, GIF, and PDF files are allowed.";
    $uploadOk = 0;
}


if ($uploadOk == 0) {
    echo " file was not uploaded.";
} else {
    if (move_uploaded_file($_FILES["fileToUpload"]["tmp_name"], $targetFile)) {
        echo "The file " . htmlspecialchars(basename($_FILES["fileToUpload"]["name"])) . " has been uploaded.";
    } else {
        echo "Sorry, there was an error uploading your file.";
    }
}
?>