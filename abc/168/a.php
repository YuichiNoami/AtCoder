<?php
fscanf(STDIN, '%s', $str);
$num = intval(substr($str, -1));
switch ($num) {
    case 2:
    case 4:
    case 5:
    case 7:
    case 9:
        echo 'hon';
        break;

    case 0:
    case 1:
    case 6:
    case 8:
        echo 'pon';
        break;

    case 3:
        echo 'bon';
        break;
}