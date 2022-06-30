graph = {
  '5' : ['3','7'],
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8', '6'],
  '8' : ['6'],
  '6' : []
}

graph_cost = {
    '53' : '6',
    '57' : '5',
    '32' : '3',
    '34' : '1',
    '78' : '0',
    '48' : '7',
    '46' : '2',
    '86' : '4'
}

h = {
    '5':'9',
    '3':'2',
    '7':'3',
    '2':'7',
    '4':'5',
    '8':'2',
    '6':'4'
}


def A_star(visited, queue, cost_map, graph, starting_node, goal):
  visited.append(starting_node)
  queue.append(starting_node)

  while queue:
    m = queue.pop(0)
    print (m, end = " ")
    if m == goal :
      return True

    for neighbour in graph[m]:
      if neighbour not in visited:
        cost_map[neighbour] = str(int(cost_map[m]) + int(graph_cost[m+neighbour])) if m in cost_map.keys() else graph_cost[m+neighbour]
        visited.append(neighbour)
        queue.append(neighbour)
        queue.sort(key=lambda e: int(cost_map[e]) + int(h[e]) if e in cost_map.keys() else 0)
  return False

# Driver code
visited = []
queue = []
cost_map = {}
print("Traversed node using UCS :")
print("Goal found") if A_star(visited, queue, cost_map, graph, '5', '6') else print("Goal not found")