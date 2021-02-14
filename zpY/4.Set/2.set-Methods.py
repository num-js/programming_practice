### Set is a collection of non repetative element
set1 = {1, 5, 6, 8, 1}


emptySet = set()

### Add Data at first
emptySet.add(5);
emptySet.add(4);
emptySet.add(5); # not added, set is non repetative
emptySet.add(5);

emptySet.add((1, 3, 9)); #adding touple in Set
emptySet.add(10);
# print(emptySet)

### Length of Element
# print(len(emptySet))


### Remove Element
# emptySet.remove(5)
# print(emptySet)

# emptySet.remove(20) # Throw error fi data is not present

### POP --- Remove an arbitary element & return Set
print(emptySet)
emptySet.pop()
print(emptySet)
