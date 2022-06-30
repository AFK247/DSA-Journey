graph = {
  '5' : ['3','7'],
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8', '6'],
  '8' : ['6'],
  '6' : []
}

h= {
    '5':'9',
    '3':'2',
    '7':'3',
    '2':'7',
    '4':'5',
    '8':'2',
    '6':'4'
}

def beam(queue, cost_map, graph, beam_value, starting_node, goal):
  queue.append(starting_node)

  while queue:
    m = queue.pop(0)
    print (m, end = " ")
    if m == goal :
      return True

    for neighbour in graph[m]:
      queue.append(neighbour)
      queue.sort(key=lambda e: int(h[e]))
      while len(queue) > beam_value :
        queue.pop()
  return False

# Driver code
visited = []
queue = []
cost_map = {}
print("Traversed node using UCS :")
print("Goal found") if beam(queue, cost_map, graph, 1, '5', '6') else print("Goal not found")