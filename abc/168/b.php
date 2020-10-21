<?php
fscanf(STDIN, '%d', $len);
fscanf(STDIN, '%s', $str);
if (strlen($str) <= $len) {
    echo $str;
} else {
    $arr = str_split($str);
    for ($i=0; $i < $len; $i++) { 
        echo $arr[$i];
    }
    echo '...';
}