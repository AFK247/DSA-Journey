graph = {
  '5' : ['3','7'],
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8', '6'],
  '8' : ['6'],
  '6' : []
}

visit = []
q = []

def bfs(visit, graph, node,v):
  visit.append(node)
  q.append(node)

  while q:
    s = q.pop(0)
    if s==v :
      print(s)
      return
    print (s)
    
     
    for child in graph[s]:
      if child not in visit:
        visit.append(child)
        q.append(child)

bfs(visit, graph,'5','6')