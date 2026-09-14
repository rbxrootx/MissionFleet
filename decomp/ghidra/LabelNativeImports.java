// Label recovered import slots without modifying their byte values.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;

public class LabelNativeImports extends GhidraScript {
    @Override public void run() throws Exception {
        String name = currentProgram.getName().replace(".bin", "");
        Path path = Paths.get("private-inputs/decompilation/regions/" + name + ".imports.tsv");
        int count = 0;
        for (String line : Files.readAllLines(path, StandardCharsets.UTF_8)) {
            String[] fields = line.split("\t");
            String label = "imp_" + fields[1].replaceAll("[^A-Za-z0-9_]", "_") + "_" + fields[2].replaceAll("[^A-Za-z0-9_]", "_");
            createLabel(toAddr(Long.decode(fields[0])), label, true);
            count++;
        }
        println("Labeled " + count + " recovered import slots");
    }
}
