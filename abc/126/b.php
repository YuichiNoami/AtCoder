<?php
fscanf(STDIN, '%s', $str);

function checkFormat($str) {
    $top = intval($str[0].$str[1]);
    $bottom = intval($str[2].$str[3]);
    if ($top <= 0 && $bottom <= 0) {
        return 'NA';
    } 
    elseif ($top <= 0) {
        if ($bottom > 0 && $bottom <= 12) {
            return 'YYMM';
        }
        return 'NA';
    } elseif ($bottom <= 0) {
        if ($top > 0 && $top <= 12) {
            return 'MMYY';
        }
        return 'NA';
    } elseif (($top > 0 && $top <= 12) || ($bottom > 0 && $bottom <= 12)) {
        if ($top > 0 && $top <= 12 && $bottom > 12) {
            return 'MMYY';
        } elseif ($bottom > 0 && $bottom <= 12 && $top > 12) {
            return 'YYMM';
        } else {
            return 'AMBIGUOUS';
        }
    } else {
        return 'NA';
    }
}

echo checkFormat($str)."\n";