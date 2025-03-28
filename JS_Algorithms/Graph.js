/* Building up a Graph within Adjacent List */ 

class Node {
    
    constructor( value ) {

    this.value = value ;
    this.edges = [];

    }

}

class Edge {
    
    constructor ( nodeFrom, nodeTo ) {
        
        this.nodeFrom = nodeFrom; 
        this.nodeTo   = nodeTo;

    }

}

class Graph {
    
    constructuor(nodes = [], edges = [] ) { 
        
        this.nodes = nodes;
        this.edges = edges;
        
       	this.adjacentList = { };

	}
	
    addVertex( nodes ) {
        
        this.adjacentList[node]  = [];
        this.nodes ++;
        
    }
    addEdge( firstNode, scndNode )  {
        
        this.adjacentList[firstNode].push(scndNode);
        this.adjacentList[scndNode].push(firstNode);
    }
    
    insertNode(value){
    
        this.nodes.push(new Node(value) )
    }
    
    insertEdge(fromValue, toValue) {
    
        let fromFound = null;
        let toFound = null;
        
        this.nodes.forEach(node=> {
        
            if ( fromValue === node.value ) {
            
                fromFound = node;
            }
            if ( toValue === node.value ){
            
                toFound = node;
            }
        })

        if( !fromFound ) {
        
            fromFound = new Node(fromValue);
            this.nodes.push(fromFound);
        }
        if(!toFound){
        
            toFound = new Node(toValue)
            this.nodes.push(toFound)
        }
        const newEdge = new Edge(fromFound, toFound)
        
        fromFound.edges.push(newEdge)
        toFound.edges.push(newEdge)
        this.edges.push(newEdge)
        
    }
    getEdgeList(){
    
        const edgeList = []
        
        for(let edge of this.edges){
            edgeList.push([edge.nodeFrom.value, edge.nodeTo.value])
        }
        return edgeList
    }
    getAdjacencyList(){
        const maxIndex = this.edges.length
        // Create a list with maxIndex +1 elements, all null
        const adjacencyList = Array.from(new Array(maxIndex+1), x => null)

        for(let edge of this.edges) {
        
            if(adjacencyList[edge.nodeFrom.value]) {
            
                adjacencyList[edge.nodeFrom.value].push(edge.nodeTo.value)
            }
            else{
            
                adjacencyList[edge.nodeFrom.value] = [edge.nodeTo.value]
            }
        }
        return adjacencyList
    }
    getAdjacencyMatrix() {
    
        const len = this.nodes.length + 1
        //Create a matrix of dimensions len x len, filled with zeros 
        const adjacencyMatrix = Array.from(new Array(len), x => new Array(len).fill(0));
        
        for(let edge of this.edges){
        
            adjacencyMatrix[edge.nodeFrom.value][edge.nodeTo.value] = 1;
            
        }
        
        return adjacencyMatrix
    }
}



const myGraph = new Graph();


myGraph.insertEdge(1,2);
myGraph.insertEdge(1,3);
myGraph.insertEdge(1,4);
myGraph.insertEdge(3,4);
myGraph.insertEdge(2,3);
myGraph.insertEdge(2,4);

myGraph.getAdjacentList();



