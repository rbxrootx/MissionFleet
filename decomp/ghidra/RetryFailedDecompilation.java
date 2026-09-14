// Retry only failed functions, preserving verified successful exports.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

public class RetryFailedDecompilation extends GhidraScript {
    @Override public void run() throws Exception {
        String name = currentProgram.getName().replace(".bin", "");
        Path directory = Paths.get("private-inputs/decompilation/pseudocode");
        Path index = directory.resolve(name + "-functions.tsv");
        List<String> rows = Files.readAllLines(index, StandardCharsets.UTF_8);
        String code = Files.readString(directory.resolve(name + ".c"), StandardCharsets.UTF_8);
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        int success = 0;
        try {
            for (int i = 1; i < rows.size(); i++) {
                String[] fields = rows.get(i).split("\t");
                if (fields[3].equals("false")) {
                    DecompileResults result = decompiler.decompileFunction(getFunctionAt(toAddr(Long.parseLong(fields[0], 16))), 60, monitor);
                    if (result.decompileCompleted()) {
                        code = code.replace("/* Decompilation failed at " + fields[0] + " */",
                            "/* Address: " + fields[0] + " */\n" + result.getDecompiledFunction().getC());
                        fields[3] = "true";
                        rows.set(i, String.join("\t", fields));
                    } else println("Retry failed at " + fields[0] + ": " + result.getErrorMessage());
                }
                if (fields[3].equals("true")) success++;
            }
        } finally { decompiler.dispose(); }
        Files.writeString(directory.resolve(name + ".c"), code, StandardCharsets.UTF_8);
        Files.write(index, rows, StandardCharsets.UTF_8);
        int total = rows.size() - 1;
        Files.writeString(directory.resolve(name + "-summary.txt"),
            "functions=" + total + "\ndecompiled=" + success + "\nfailed=" + (total-success) + "\n", StandardCharsets.UTF_8);
        println("Retry results: total=" + total + " success=" + success + " failed=" + (total-success));
    }
}
