isPrime :: Int -> Bool
isPrime = (==1) . length . primeFactors

primeFactors :: Int -> [Int]
primeFactors 1 = []
primeFactors n = (firstFactor :) $ primeFactors $ div n firstFactor
            where firstFactor = head $ dropWhile ((/=0) . mod n) (2:[3,5..n])

primes :: [Int]
primes = 2:[ x | x <- [3,5..], isPrime x]

main = print $ primes!!10000
