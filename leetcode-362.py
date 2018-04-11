class HitCounter(object):

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.hits = dict()
        
        

    def hit(self, timestamp):
        """
        Record a hit.
        @param timestamp - The current timestamp (in seconds granularity).
        :type timestamp: int
        :rtype: void
        """
        if timestamp in self.hits.keys():
            self.hits[timestamp] += 1
        else:
            self.hits[timestamp] = 1
        

    def getHits(self, timestamp):
        """
        Return the number of hits in the past 5 minutes.
        @param timestamp - The current timestamp (in seconds granularity).
        :type timestamp: int
        :rtype: int
        """
        count = 0
        for index in range(timestamp - 299, timestamp + 1):
            if index in self.hits.keys():
                count += self.hits[index]
        return count
        


# Your HitCounter object will be instantiated and called as such:
# obj = HitCounter()
# obj.hit(timestamp)
# param_2 = obj.getHits(timestamp)
