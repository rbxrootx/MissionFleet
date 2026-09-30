// Find exact/substring strings, their references and owning decompiled functions.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;
import java.nio.charset.StandardCharsets;
import java.util.LinkedHashSet;
import java.util.Set;

public class TraceNativeStrings extends GhidraScript {
    @Override public void run() throws Exception {
        String[] needles = getScriptArgs();
        Set<Function> owners = new LinkedHashSet<>();
        Set<String> matchedAddresses = new LinkedHashSet<>();
        DataIterator data = currentProgram.getListing().getDefinedData(true);
        while (data.hasNext()) {
            Data item = data.next();
            if (!(item.getValue() instanceof String)) continue;
            String text = (String)item.getValue();
            boolean match = false;
            for (String needle : needles) if (text.contains(needle)) match = true;
            if (!match) continue;
            matchedAddresses.add(item.getAddress().toString());
            println("STRING " + item.getAddress() + " " + text.replace('\n', ' '));
            for (Reference reference : getReferencesTo(item.getAddress())) {
                Function owner = getFunctionContaining(reference.getFromAddress());
                println("  XREF " + reference.getFromAddress() + " " +
                    (owner == null ? "<no function>" : owner.getName() + " @ " + owner.getEntryPoint()));
                if (owner != null) owners.add(owner);
            }
        }
        Memory memory = currentProgram.getMemory();
        for (String needle : needles) {
            byte[] bytes = needle.getBytes(StandardCharsets.US_ASCII);
            ghidra.program.model.address.Address cursor = memory.getMinAddress();
            while (cursor != null && cursor.compareTo(memory.getMaxAddress()) <= 0) {
                ghidra.program.model.address.Address found = memory.findBytes(cursor, bytes, null, true, monitor);
                if (found == null) break;
                if (matchedAddresses.add(found.toString())) {
                    println("BYTES " + found + " " + needle);
                    for (Reference reference : getReferencesTo(found)) {
                        Function owner = getFunctionContaining(reference.getFromAddress());
                        println("  XREF " + reference.getFromAddress() + " " +
                            (owner == null ? "<no function>" : owner.getName() + " @ " + owner.getEntryPoint()));
                        if (owner != null) owners.add(owner);
                    }
                }
                cursor = found.add(1);
            }
        }
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try {
            for (Function function : owners) {
                println("\n===== " + function.getName() + " @ " + function.getEntryPoint() +
                    " bytes=" + function.getBody().getNumAddresses() + " =====");
                DecompileResults result = decompiler.decompileFunction(function, 90, monitor);
                if (result.decompileCompleted()) println(result.getDecompiledFunction().getC());
                else println("DECOMPILATION FAILED: " + result.getErrorMessage());
            }
        } finally {
            decompiler.dispose();
        }
    }
}
