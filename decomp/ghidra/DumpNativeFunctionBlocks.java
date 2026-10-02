// Print a native function's discontiguous body ranges and decoded instruction stream.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.AddressRange;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;

public class DumpNativeFunctionBlocks extends GhidraScript {
    @Override public void run() throws Exception {
        if (getScriptArgs().length != 1)
            throw new IllegalArgumentException("Expected a function address");
        Function function = getFunctionContaining(toAddr(getScriptArgs()[0]));
        if (function == null) throw new IllegalArgumentException("No function at selected address");
        println("FUNCTION " + function.getName() + " @ " + function.getEntryPoint() +
            " body_bytes=" + function.getBody().getNumAddresses());
        for (AddressRange range : function.getBody().getAddressRanges(true)) {
            println("RANGE " + range.getMinAddress() + ".." + range.getMaxAddress() +
                " bytes=" + range.getLength());
        }
        InstructionIterator instructions = currentProgram.getListing().getInstructions(
            function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            println(instruction.getAddress() + " bytes=" + instruction.getLength() +
                "  " + instruction);
        }
    }
}
