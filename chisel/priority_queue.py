import heapq
from typing import *

class PriorityQueue():
    """Queue which orders elements by priority (lowest first)."""

    def __init__(self, priority):
        self.queue = []
        self.priority = priority

    def add(self, item, stats):
        heapq.heappush(self.queue, (self.priority(item, stats), item))

    def pop(self):
        return heapq.heappop(self.queue)[1]

    def __len__(self):
        return len(self.queue)
