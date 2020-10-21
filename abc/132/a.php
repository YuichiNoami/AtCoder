<?php
fscanf(STDIN, '%s', $input);
$input = str_split($input);
$patterns = array_values(array_count_values($input));
if (count($patterns) === 2 && $patterns[0] === 2 && $patterns[1] === 2) {
    echo "Yes\n";
} else {
    echo "No\n";
}