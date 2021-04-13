# Error57nk
# nitesh kumar
# Minmum difference between two consecutive time given in list/tuple 

iostr = ['9:30AM', '12:45PM', '5:30AM', '6:55PM', '11:30AM']

def conv24hrs(iostr):
    hh, mm = iostr.split(':')
    idn = mm[slice(2,4)]
    mm = mm[slice(0,2)]
    if idn.lower() == 'am':
        if int(hh) == 12:
            hh = '00'

    elif idn.lower() == 'pm':
        if int(hh) != 12:
            hh = str(int(hh) + 12)
            
    return(int(hh), int(mm))
    
    

def minDiff(srtList):
    minDiff = 12.00
    srtLen = len(srtList)
    
    for i in range(0,srtLen-1):
        hh, mm = conv24hrs(srtList[i])
        hh1, mm1 = conv24hrs(srtList[i+1])
        
        if mm < mm1:
            mm+=60
            hh-=1
            mo = mm - mm1
        else:
            mo = mm - mm1
            
        ho = hh - hh1
        val = float(str(abs(ho)) +'.'+ str(mo))
        
        if minDiff > val:
            minDiff = val
            
    return minDiff

mmin = minDiff(iostr)
print(mmin)