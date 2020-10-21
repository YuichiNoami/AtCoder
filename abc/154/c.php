<?php
fscanf(STDIN, '%d', $n);
$nums = explode(' ', trim(fgets(STDIN)));
$cnts = array_count_values($nums);
if (max($cnts) > 1) {
    echo "NO";
} else {
    echo "YES";
}