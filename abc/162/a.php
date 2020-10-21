<?php
fscanf(STDIN, '%d', $num);
if (strpos($num, '7') !== false) {
    echo 'Yes';
} else {
    echo 'No';
}