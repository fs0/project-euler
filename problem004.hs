isPalindrome s = s == reverse s
main = print $ maximum [x*y | x<-[100..999], y<-[x..999], isPalindrome $ show $ x*y]
