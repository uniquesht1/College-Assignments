       program ascending_order
        integer array(30),i,j,temp
        write(*,*)'Enter',10,'numbers'
        read(*,*)(array(i),i=1,10,1)
        do i =  1,10,1
            do j = 1,10,1
                if(array(i) .lt. array(j)) then
                    temp = array(i)
                    array(i) =  array(j)
                    array(j) = temp
                end if
            end do 
        end do
        
        write(*,*)(array(i),i=1,10,1)
       end


