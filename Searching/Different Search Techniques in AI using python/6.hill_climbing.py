graph = {
  '5' : ['3','7'],
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8', '6'],
  '8' : ['6'],
  '6' : []
}

h = {
    '5':9,
    '3':2,
    '7':3,
    '2':7,
    '4':5,
    '8':2,
    '6':4
}

def ucs( queue, graph, starting_node, goal):
  queue.append(starting_node)
  current_node=starting_node

  while queue:
    m = queue.pop(0)
    queue.clear()

    if(h[current_node]<h[m]):
      return False 
    else:
      current_node=m

    print (m, end = " ")
    if m == goal :
      return True

     

    for neighbour in graph[m]:
        queue.append(neighbour)
        queue.sort(key=lambda e: h[e])
  return False

# Driver code
queue = []
print("Traversed node using Hill Climbing :")
print("Goal found") if ucs(queue, graph, '5', '2') else print("Goal not found")