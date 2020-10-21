<?php
fscanf(STDIN, '%d %d', $life, $cnt);
$skills = array_map('intval', explode(' ', trim(fgets(STDIN))));
rsort($skills);
if (array_sum($skills) >= $life) {
    echo 'Yes';
} else {
    echo 'No';
}