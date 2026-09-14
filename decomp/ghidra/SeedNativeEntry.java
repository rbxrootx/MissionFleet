// Seed the original entry point in a raw, non-executable analysis region.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;

public class SeedNativeEntry extends GhidraScript {
    @Override public void run() throws Exception {
        String[] args = getScriptArgs();
        Address entry = toAddr(Long.decode(args[0]));
        currentProgram.getMemory().getBlocks()[0].setExecute(true);
        addEntryPoint(entry);
        disassemble(entry);
        createFunction(entry, "original_program_entry");
        println("Seeded original native entry: " + entry);
    }
}
