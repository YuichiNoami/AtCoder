<?php
fscanf(STDIN, '%s', $str);
echo substr($str, -1) === 's' ? $str . 'es' : $str . 's';