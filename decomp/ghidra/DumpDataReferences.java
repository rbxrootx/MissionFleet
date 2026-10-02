// List code and data references to selected mapped addresses.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;

public class DumpDataReferences extends GhidraScript {
    @Override public void run() throws Exception {
        for (String value : getScriptArgs()) {
            Address target = toAddr(value);
            println("\n===== REFERENCES TO " + target + " =====");
            for (Reference reference : getReferencesTo(target)) {
                Function function = getFunctionContaining(reference.getFromAddress());
                String owner = function == null ? "<no containing function>" :
                    function.getName() + " @ " + function.getEntryPoint();
                println("  " + reference.getFromAddress() + " " + reference.getReferenceType() +
                    " from " + owner);
            }
        }
    }
}
