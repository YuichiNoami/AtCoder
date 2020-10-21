<?php
fscanf(STDIN, '%s', $flag);
fscanf(STDIN, '%s', $str);
if ($flag == 'Y') {
    echo strtoupper($str);
} else {
    echo $str;
}