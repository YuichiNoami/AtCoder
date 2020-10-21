<?php
function factorial($n){
  if ($n == 0) {
    return 1;
  } else {
    $i = $n * factorial($n - 1);
    return $i;
  }
}

function combination($n,$m){
  $i = factorial($n) / (factorial($m) * factorial($n-$m));
  return $i;
}

echo combination(8, 3)."\n";
