
package leachnoinet.ned;

simple BS
{
    parameters:
        int id;
        int randInit;
        int numNodes;
        double xpos;
        double ypos;
        @display("i=device/pc2;is=n");
    gates:
        inout port[];
        input in[];
        output out[];
}

