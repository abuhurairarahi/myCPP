**Vector**

   1. Header: #include<vector> ; #include<bits/stdc++.h>
   2. Namespace: std
   3. Declaration: 
                   3.1. vector<data_type> vectorName;
                   3.2. vector<data_type> vectorName(size);   --> *it allocates a fixed size.*
                   3.3. vector<data_type> vectorName = {1,2,3,4,... pre-initializes data};
                   3.4. vector<data_type> vectorName(size, data);
                             --- --- --- ---
                            | 1 | 1 | 1 | 1 |  E.g. *size = 4; data = 1*
                             --- --- --- ---
                   3.5. vector<data_type> vectorName(vectorName2);  --> *while copying one vector in another one [only datas]*
                   3.6. vector<data_type> &vectorName(vectorName2); --> *connect two vectors with same address.*
   4. Properties:
                   4.1. vectorName.size();
                   4.2. vectorName.capacity();

                         --- --- --- --- ---
                        | 1 | 2 | 3 |   |   | 
                         --- --- --- --- ---    E.g. *size = 3; capacity = 5* 
                        <---size--->
                        <-----capacity------>

                   4.3. vectorName.empty();    ---> *checks that isEmpty or not*
   5. Element Access:
                   5.1. vectorName[index];
                   5.2. vectorName.at(index);
                   5.4. vectorName.front()  ---> *access front element*
                   5.5. vectorName.back()   ---> *access back element* 
   6. Modifiers:
                   6.1. vectorName.push_back();
                   6.2. vectorName.pop_back();
                   6.3. vectorName.insert(vectorName.begin() + index, data);
                   6.4. vectorName.erase(vectorName.begin() + index);  --> *erase in an individual index*
                   6.5. vectorName.erase(vectorName.begin(), vectorName.begin() + index);  --> *erase in a range*
                        *from vectorName.begin() less than (vectorName.begin() + index)*
                   6.6. vectorName.clear();
                   6.7. vectorName.resize(size);
                            6.7.1. if the **new_size < previous_capacity**
                                 |-> updated_size = new_size. 
                                 |-> updated_capacity = previous_capacity.
                            6.7.2. if the **new_size > previous_capacity**
                                 |-> updated_size = new_size.
                                 |-> updated_capacity = new_capacity.
                   6.8. vectorName.swap(vectorName2) ---> *elements swap between two vector*
                   6.9. vectorName.reserve(size); ---> *capacity increaser*
   7. Iterator:
                   7.1. vectorName.begin();
                   7.2. vectorName.end(); ---> *Position after last element*
                   7.3. vectorName.rbegin();
                      |-> {10,20,30,40}
                          rbegin() = **position of 40**
                   7.4. vectorName.rend(); ---> *Position after reversed last element*
                      |-> {10,20,30,40} 
                          rend() = **There no element exists in the positon! segmentation error**
   8. Traversing: 
                   8.1. **Index Method**
                      
                       for(int index = 0; index < vectorName.size(); index++)
                       {
                           cout < vectorName[index];
                       }

                   8.2. **Iterator Method**
                      
                       auto index = vectorName.begin();
                       while(index < vectorName.end())
                       {
                           cout < *(index) << " ";
                           index+=1;
                       }
                    
                   8.3. **Modern Method**
                     
                       for(int value : vectorName)
                       {
                           cout << value << " ";
                       }
   9. Time Complexity:
                   | Operation | Complexity     |
                   | --------- | -------------- |
                   | Access    | O(1)           |
                   | push_back | O(1) amortized |
                   | insert    | O(n)           |
                   | erase     | O(n)           |
                                   