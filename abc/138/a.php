<?php
fscanf(STDIN, '%d', $num);
fscanf(STDIN, '%s', $string);
if ($num >= 3200) {
    echo "$string\n";
} else {
    echo "red\n";
}