// Print code/data references to selected globals in the current native image.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class DumpNativeGlobalReferences extends GhidraScript {
    @Override public void run() throws Exception {
        if (getScriptArgs().length == 0)
            throw new IllegalArgumentException("Expected one or more global addresses");
        for (String value : getScriptArgs()) {
            Address target = toAddr(value);
            println("GLOBAL " + target);
            ReferenceIterator references = currentProgram.getReferenceManager().getReferencesTo(target);
            while (references.hasNext()) {
                Reference reference = references.next();
                Address from = reference.getFromAddress();
                Function function = getFunctionContaining(from);
                Instruction instruction = currentProgram.getListing().getInstructionAt(from);
                println("REF " + from + " " + reference.getReferenceType() + " " +
                    (function == null ? "<no function>" : function.getName() + " @ " + function.getEntryPoint()) +
                    (instruction == null ? "" : " | " + instruction));
            }
            try {
                println("DWORD " + getInt(target));
            } catch (Exception ignored) {
                println("DWORD <unreadable>");
            }
        }
    }
}
