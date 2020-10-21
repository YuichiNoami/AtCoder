<?php
$input = trim(fgets(STDIN));
$chars = str_split($input);
if ($chars[0] === $chars[2] && $chars[1] === $chars[3]) {
  echo "Yes\n";
} else {
  echo "No\n";
}
