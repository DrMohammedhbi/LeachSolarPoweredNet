
package leachnoinet.ned;

module Solar
{
    parameters:
        int numNodes;
        double trRange;
        int rounds;
        int frames;
        int solarOn;
        double sunDuration;
        int sunNodes;
        double xMax;
        double yMax;
        @display("bgi=maps/africa,s;bgb=,,#0080FF");
    submodules:
        bs: BS {
            parameters:
                id = 1;
                xpos = xMax/2;
                ypos = yMax/2;
                @display("i=device/antennatower;is=vl");
        }
        node[numNodes]: Node {
            parameters:
                energy = intuniform(499900, 500000);
                sunstart = intuniform(20, (numNodes/sunNodes)*sunDuration);
                //energy = energy,
                id = index+2;
                xpos = intuniform(0, xMax);
                ypos = intuniform(0, yMax);

                @display("is=vl;p=156,100");
        }
    connections:

}
