//Merge Twi Sirted Lists  ....

const mergeTwoSortedLists = (nums1, nums2, m, n) => {

    const lastIndex = m + n - 1;
    
    const n1Copy = [...nums1]
    
    let n1Pointer = m - 1;
    let n2Pointer = n - 1;
    
    for (let i = lastIndex; i >= 0; i--) {
    
        const n1Higher = n1Copy[n1Pointer] ?? Number.MIN_SAFE_INTEGER;
        const n2Higher = nums2[n2Pointer] ?? Number.MIN_SAFE_INTEGER;
        
        if (n1Higher > n2Higher) {
        
            n1Copy[i] = n1Higher
            
            n1Pointer--
            
        } else {
        
            n1Copy[i] = n2Higher
            
            n2Pointer--
            
        }
        
    }
    
    return n1Copy;
}


