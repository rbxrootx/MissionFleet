// Export pseudocode and a function index. Output remains private/unlicensed.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.symbol.Reference;
import java.io.*;
import java.nio.charset.StandardCharsets;

public class ExportNativeDecompilation extends GhidraScript {
    @Override public void run() throws Exception {
        File directory = new File(getScriptArgs()[0]);
        directory.mkdirs();
        String name = currentProgram.getName().replace(".bin", "");
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        int total = 0, success = 0, failed = 0;
        try (PrintWriter code = new PrintWriter(new OutputStreamWriter(new FileOutputStream(new File(directory, name + ".c")), StandardCharsets.UTF_8));
             PrintWriter index = new PrintWriter(new OutputStreamWriter(new FileOutputStream(new File(directory, name + "-functions.tsv")), StandardCharsets.UTF_8))) {
            code.println("/* Ghidra-generated pseudocode from a recovered static code region.");
            code.println(" * NOT original source, NOT buildable C, NOT covered by the workspace MIT license.");
            code.println(" * Types and function boundaries require review; see region metadata for recovery limits. */\n");
            index.println("address\tname\tbody_bytes\tdecompiled");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext() && !monitor.isCancelled()) {
                Function function = functions.next();
                if (function.isExternal()) continue;
                total++;
                DecompileResults result = decompiler.decompileFunction(function, 20, monitor);
                if (!result.decompileCompleted() && !monitor.isCancelled()) {
                    result = decompiler.decompileFunction(function, 60, monitor);
                }
                boolean ok = result.decompileCompleted();
                index.println(function.getEntryPoint() + "\t" + function.getName() + "\t" + function.getBody().getNumAddresses() + "\t" + ok);
                if (ok) {
                    success++;
                    code.println("/* Address: " + function.getEntryPoint() + " */");
                    code.println(result.getDecompiledFunction().getC());
                } else {
                    failed++;
                    code.println("/* Decompilation failed at " + function.getEntryPoint() + " */");
                    println("Failure at " + function.getEntryPoint() + ": " + result.getErrorMessage());
                }
                if (total % 100 == 0) println("Exported " + total + " functions from " + name);
            }
        } finally {
            decompiler.dispose();
        }
        try (PrintWriter summary = new PrintWriter(new File(directory, name + "-summary.txt"))) {
            summary.println("functions=" + total);
            summary.println("decompiled=" + success);
            summary.println("failed=" + failed);
        }
        try (PrintWriter strings = new PrintWriter(new OutputStreamWriter(new FileOutputStream(new File(directory, name + "-string-xrefs.tsv")), StandardCharsets.UTF_8))) {
            strings.println("string_address\treferring_address\tfunction\ttext");
            DataIterator data = currentProgram.getListing().getDefinedData(true);
            while (data.hasNext()) {
                Data item = data.next();
                if (!(item.getValue() instanceof String)) continue;
                String value = ((String)item.getValue()).replace('\t', ' ').replace('\n', ' ').replace('\r', ' ');
                for (Reference reference : getReferencesTo(item.getAddress())) {
                    Function owner = getFunctionContaining(reference.getFromAddress());
                    strings.println(item.getAddress() + "\t" + reference.getFromAddress() + "\t" +
                        (owner == null ? "" : owner.getName()) + "\t" + value);
                }
            }
        }
        println("DECOMPILATION COMPLETE: " + name + " functions=" + total + " success=" + success + " failed=" + failed);
    }
}
