import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;

/** Export selected function pseudocode for evidence review. */
public class DumpMainFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File output = new File(args[0]);
        File parent = output.getParentFile();
        if (parent != null) {
            parent.mkdirs();
        }

        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try (PrintWriter writer = new PrintWriter(output, StandardCharsets.UTF_8)) {
            for (int index = 1; index < args.length; index++) {
                monitor.checkCancelled();
                Address address = currentProgram.getAddressFactory().getAddress(args[index]);
                Function function = currentProgram.getFunctionManager().getFunctionAt(address);
                if (function == null) {
                    throw new IllegalArgumentException("No function at " + args[index]);
                }
                DecompileResults result = decompiler.decompileFunction(function, 60, monitor);
                writer.println("/* " + function.getName() + " at " + address + " */");
                writer.println(result.getDecompiledFunction() == null
                    ? "/* decompile failed: " + result.getErrorMessage() + " */"
                    : result.getDecompiledFunction().getC());
                writer.println();
            }
        } finally {
            decompiler.dispose();
        }
        println("Wrote selected pseudocode to " + output);
    }
}
