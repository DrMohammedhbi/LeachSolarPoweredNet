 
// 

package leachnoinet.ned;
//
// TODO documentation
//
simple Node
{
    parameters:
        int id;
        double energy;
        double sunstart;
        double xpos;
        double ypos;
        @display("i=device/device");
    gates:
        inout port[];
        input in[];
        output out[];
}

