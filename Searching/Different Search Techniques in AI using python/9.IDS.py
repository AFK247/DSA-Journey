graph = {
  '5' : ['3','7'],
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8', '6'],
  '8' : ['6'],
  '6' : []
}

def deapth_limit_search(graph, starting_node, goal, limit) :
  print(starting_node, end = ' ')
  limit -= 1
  if starting_node == goal:
    return True
  if len(graph[starting_node]) == 0 or limit < 0 :
    return False
  for n in graph[starting_node] :
    if deapth_limit_search(graph, n, goal, limit) :
      return True

def ids(graph, starting_node, goal, deapth) :
  limit = 0
  while limit <= deapth :
    if deapth_limit_search(graph, starting_node, goal, limit) :
      return True
    else :
      limit += 1
    print('\n')
  
  return False

print("Traversed node using IDS :")
print("Goal found") if ids(graph, '5', '6', 3) else print("Goal not found")