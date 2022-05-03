nums = [88, 22, 11, 33, 55, 44, 77, 99, 108, 12.5, 13.6, 77.5]

function binarySearch(numList, find)
{
    numList.sort()
    found = false
    length = numList.length
    first = 0
    last = length - 1

    while (first <= last)
    {
        mid = Math.floor((first + last) / 2)
        if (find == numList[mid])
        {
            found = true
            break
        }
        else
        {
            if (find < numList[mid])
            {
                last = mid - 1
            }
            else{
                first = mid + 1
            }
        }
    }
    return found
}

console.log(binarySearch(nums, 13.6))
console.log(binarySearch(nums, 99))
console.log(binarySearch(nums, 6.6))
