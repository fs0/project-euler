primeFactors 1 = []
primeFactors n = (firstFactor :) $ primeFactors $ div n firstFactor
            where firstFactor = head $ dropWhile ((/=0) . mod n) (2:[3,5..n])

main = print $ maximum $ primeFactors 600851475143
