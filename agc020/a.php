<?php
$input = explode(' ', trim(fgets(STDIN)));
$n = $input[0];
$a = $input[1];
$b = $input[2];

if (($n % 2 !== 0 && ($a + $b) % 2 === 0) || ($n % 2 === 0 && ($a + $b) % 2 === 0)) {
  echo "Alice\n";
} else {
  echo "Borys\n";
}
