graph = {
  '5' : ['3','7'],
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8', '6'],
  '8' : ['6'],
  '6' : []
}

visited = []


def dfs(visited, graph, node, val):
    if node not in visited:
        print (node)
        if node == val:
         exit()
        
        visited.append(node)

        
        for child in graph[node]:
            dfs(visited, graph,child,val)

dfs(visited, graph, '5','6')