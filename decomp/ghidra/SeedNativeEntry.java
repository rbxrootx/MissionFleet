// Seed the original entry point in a raw, non-executable analysis region.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

public class SeedNativeEntry extends GhidraScript {
    @Override public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1 || args.length > 2) {
            throw new IllegalArgumentException("address [function_name] required");
        }
        Address entry = toAddr(Long.decode(args[0]));
        String functionName = args.length == 2 ? args[1] : "original_program_entry";
        currentProgram.getMemory().getBlocks()[0].setExecute(true);
        addEntryPoint(entry);
        disassemble(entry);
        Function function = currentProgram.getFunctionManager().getFunctionAt(entry);
        if (function == null) function = createFunction(entry, functionName);
        else function.setName(functionName, SourceType.USER_DEFINED);
        if (function == null) throw new IllegalStateException("Could not create function at " + entry);
        println("Seeded native function " + function.getName() + " at " + entry);
    }
}
