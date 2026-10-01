// Export public-safe address/name/size metadata for one recovered module.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.File;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;

public class ExportFunctionInventory extends GhidraScript {
    @Override public void run() throws Exception {
        File output = new File(getScriptArgs()[0]);
        File parent = output.getParentFile();
        if (parent != null) parent.mkdirs();
        int count = 0;
        try (PrintWriter writer = new PrintWriter(new OutputStreamWriter(
                new java.io.FileOutputStream(output), StandardCharsets.UTF_8))) {
            writer.println("component\taddress\tname\tsize");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext() && !monitor.isCancelled()) {
                Function function = functions.next();
                if (function.isExternal()) continue;
                String name = function.getName().replace('\t', '_').replace('\n', '_').replace('\r', '_');
                writer.println("client-main\t" + function.getEntryPoint() + "\t" + name + "\t" +
                    function.getBody().getNumAddresses());
                ++count;
            }
        }
        println("Exported " + count + " non-external function records to " + output);
    }
}
