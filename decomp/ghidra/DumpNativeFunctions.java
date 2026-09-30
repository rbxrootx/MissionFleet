// Decompile selected addresses and list direct callers/callees for review.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;

public class DumpNativeFunctions extends GhidraScript {
    @Override public void run() throws Exception {
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try {
            String[] args = getScriptArgs();
            boolean listCallers = true;
            int firstAddress = 0;
            if (args.length != 0 && args[0].equals("--no-callers")) {
                listCallers = false;
                firstAddress = 1;
            }
            for (int argIndex = firstAddress; argIndex < args.length; ++argIndex) {
                String value = args[argIndex];
                Address address = toAddr(value);
                Function function = getFunctionContaining(address);
                if (function == null) {
                    println("NO FUNCTION AT " + address);
                    continue;
                }
                println("\n===== " + function.getName() + " @ " + function.getEntryPoint() +
                    " bytes=" + function.getBody().getNumAddresses() + " =====");
                if (listCallers) {
                    println("CALLERS:");
                    for (Reference reference : getReferencesTo(function.getEntryPoint())) {
                        Function caller = getFunctionContaining(reference.getFromAddress());
                        if (caller != null) println("  " + caller.getName() + " @ " + caller.getEntryPoint() +
                            " from " + reference.getFromAddress());
                    }
                }
                println("CALLEES:");
                for (Function callee : function.getCalledFunctions(monitor))
                    println("  " + callee.getName() + " @ " + callee.getEntryPoint());
                DecompileResults result = decompiler.decompileFunction(function, 60, monitor);
                if (result.decompileCompleted()) println(result.getDecompiledFunction().getC());
                else println("DECOMPILATION FAILED: " + result.getErrorMessage());
            }
        } finally {
            decompiler.dispose();
        }
    }
}
