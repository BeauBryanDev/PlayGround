/*Shrotest Bridges between two Islands in a Bin Mesh Grid */ 

import dev.yojanpardo.grafosarboles.recursion.Point;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;

public class ShortestBridgeBetweenIslands {

    private static final Point[] DIRECTIONS = new Point[] {
            new Point(1,0),
            new Point(0,1),
            new Point(-1,0),
            new Point(0,-1)
    };

    public static void main(String[] args) {
    
        final int[][] islandsMap = buildIslandsMap();
        
        final Queue<Point> firstIslandCoordinates = findFirstIslandEdges(islandsMap);

        System.out.printf("the minimum required materials for build a bridge are: [%d]\n", calculateMinimumMaterialsForBridge(islandsMap, firstIslandCoordinates));

    }

    private static int calculateMinimumMaterialsForBridge(int[][] islandsMap, Queue<Point> firstIslandCoordinates) {
    
        int minRequiredMaterials = -1;
        
        final Set<Point> visitedPoints = new HashSet<>();
        
        while(! firstIslandCoordinates.isEmpty() )  {

            int size = firstIslandCoordinates.size();

            for(int i = 0; i < size; i++) {
            
                Point islandCoordinate = firstIslandCoordinates.poll();
                
                if(islandCoordinate != null && islandsMap[islandCoordinate.getX()][islandCoordinate.getY()] == 1) {
                
                    return minRequiredMaterials;
                }
                if(!visitedPoints.contains(islandCoordinate)) { 
                
                    visitedPoints.add(islandCoordinate);
                    firstIslandCoordinates.addAll(getPossibleRoutesFromPoint(islandCoordinate, islandsMap));
                }
            }

            minRequiredMaterials++;

        }

        return -1;
    }

    private static Queue<Point> getPossibleRoutesFromPoint(Point islandCoordinate, int[][] islandsMap) {
    
        final Queue<Point> possibleRoutes = new LinkedList<>();

        for(Point direction : DIRECTIONS){
        
            Point point = new Point(islandCoordinate.getX() + direction.getX(), islandCoordinate.getY() + direction.getY());
            if(point.getX() >= 0 && point.getY() >= 0 && point.getX() < islandsMap.length && point.getY() < islandsMap[point.getX()].length ){
                possibleRoutes.add(point);
            }
        }

        return possibleRoutes;
    }

    private static Queue<Point> findFirstIslandEdges(int[][] islandsMap) {
        final Queue<Point> edgePoints = new LinkedList<>();

        for (int x = 0; x < islandsMap.length; x++){
            for(int y = 0; y < islandsMap[x].length; y++){
                if(islandsMap[x][y] == 1) {
                    dfs(islandsMap, x, y, edgePoints);
                    return edgePoints;
                }
            }
        }

        return edgePoints;
    }

    private static void dfs(int[][] islandsMap, int x, int y, final Queue<Point> edgePoints) {

        if(x < 0 || y < 0 || x >= islandsMap.length || y >= islandsMap[x].length || islandsMap[x][y] == 0){
            return;
        }

        islandsMap[x][y] = 0;
        edgePoints.add(new Point(x,y));

        for (Point direction : DIRECTIONS){
            dfs(islandsMap, x + direction.getX(), y + direction.getY(), edgePoints);
        }
    }


    /**
     * builds the map with two islands
     * @return the array with the islands
     */
    private static int[][] buildIslandsMap() {
    
        return new int[][] {
        
                {0,1,0,0,0,0,0},
                {1,1,1,0,0,0,0},
                {0,1,1,0,0,1,0},
                {0,0,1,0,0,1,1},
                {0,0,0,0,0,1,1},
        };
    }
}


