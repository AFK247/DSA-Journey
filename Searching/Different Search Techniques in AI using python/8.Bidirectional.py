graph_u = {
  '5' : ['3','7'],
  '3' : ['2', '4', '5'],
  '7' : ['8', '5'],
  '2' : ['3'],
  '4' : ['8', '6', '3'],
  '8' : ['4', '7', '6'],
  '6' : ['4', '8'],
  'qe': []
}

def bfs(visited_1, queue_1, queue_2, graph, starting_node, goal):
  visited_1.append(starting_node)
  visited_1.append(goal)
  print('From start: '+starting_node+' From end: ' +goal, end="\n")

  if starting_node == goal :
    return True
  queue_1.append(starting_node)
  queue_2.append(goal)

  while queue_1 or queue_2:
    m = queue_1.pop(0) if len(queue_1) > 0 else 'qe'
    n = queue_2.pop(0) if len(queue_2) > 0 else 'qe'

    if n == m :
      return True
      
    for neighbour_1, neighbour_2 in zip(graph[m], graph[n]) :
      if neighbour_1 not in visited_1 and m != 'qe' :
        visited_1.append(neighbour_1)
        queue_1.append(neighbour_1)
      if neighbour_2 not in visited_1 and n != 'qe' :
        visited_1.append(neighbour_2)
        queue_2.append(neighbour_2)

      print('From start: {}, From end: {}'.format(neighbour_1, neighbour_2), end="\n")
      # print(queue_1)
      # print(queue_2)
      # print(visited_1)
      if neighbour_1 == neighbour_2 :
        print('From start: {}, From end: {}'.format(neighbour_1, neighbour_2), end="\n")
        return True
    
  return False

  # Driver Code
visited_1 = []
queue_1 = []
visited_2 = []
queue_2 = []
print("Traversed node using BFS :")
print("Goal found") if bfs(visited_1, queue_1, queue_2, graph_u, '5', '6') else print("Goal not found")