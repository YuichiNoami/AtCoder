<?php
fscanf(STDIN, '%s', $str);
$arr = str_split($str);
if ($arr[2] == $arr[3] && $arr[4] == $arr[5]) {
    echo "Yes";
} else {
    echo "No";
}
echo "\n";