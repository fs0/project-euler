sumofsquares :: [Int] -> Int
sumofsquares = sum . map (^2)

squareofsums :: [Int] -> Int
squareofsums = (^2) . sum

main = print $ squareofsums [1..100] - sumofsquares [1..100]
