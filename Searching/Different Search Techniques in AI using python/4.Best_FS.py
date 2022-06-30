graph = {
  '5' : ['3','7'],
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8', '6'],
  '8' : ['6'],
  '6' : []
}

h_value = {
    '5':'9',
    '3':'2',
    '7':'3',
    '2':'7',
    '4':'5',
    '8':'2',
    '6':'4'
}

def best_fs(visited, queue, graph, starting_node, goal):
  visited.append(starting_node)
  queue.append(starting_node)

  while queue:
    m = queue.pop(0)
    print (m, end = " ")
    if m == goal:
      return True


    for neighbour in graph[m]:
      if neighbour not in visited:
        visited.append(neighbour)
        queue.append(neighbour)
        queue.sort(key=lambda e: int(h_value[e]))
        
  return False

# Driver code
visited = []
queue = []
print("Traversed node using Best First search :")
print("Goal found") if best_fs(visited, queue, graph, '5', '6') else print("Goal not found")