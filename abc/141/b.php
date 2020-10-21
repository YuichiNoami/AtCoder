<?php
fscanf(STDIN, '%s', $input);
$steps = str_split($input);
$length = count($steps);

$valid = true;

for ($i=0; $i < $length; $i++) { 
    $check = $steps[$i];
    if ($check === 'U' || $check === 'D') {
        continue;
    }
    if ($i % 2 === 0 && $check !== 'R') {
        $valid = false;
        break;
    } elseif ($i % 2 !== 0 && $check !== 'L') {
        $valid = false;
        break;
    }   
}
echo $valid ? 'Yes' : 'No';
echo "\n";