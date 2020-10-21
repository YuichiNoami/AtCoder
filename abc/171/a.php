<?php
fscanf(STDIN, '%s', $str);
if (preg_match('/[a-z]/', $str)) {
    echo 'a';
} elseif (preg_match('/[A-Z]/', $str)) {
    echo 'A';
}