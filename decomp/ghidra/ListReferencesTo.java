// List code and data references to selected addresses.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;

public class ListReferencesTo extends GhidraScript {
    @Override public void run() throws Exception {
        for (String value : getScriptArgs()) {
            Address target = toAddr(value);
            println("\n===== REFERENCES TO " + target + " =====");
            for (Reference reference : getReferencesTo(target)) {
                Function owner = getFunctionContaining(reference.getFromAddress());
                println(reference.getFromAddress() + " " + reference.getReferenceType() +
                    (owner == null ? "" : " in " + owner.getName() + " @ " + owner.getEntryPoint()));
            }
        }
    }
}
