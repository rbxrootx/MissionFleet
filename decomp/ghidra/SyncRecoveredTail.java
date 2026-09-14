// Verify an existing analysis prefix and append newly recovered tail bytes.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import ghidra.program.model.mem.MemoryBlock;
import java.nio.file.*;
import java.io.ByteArrayInputStream;
import java.util.Arrays;

public class SyncRecoveredTail extends GhidraScript {
    @Override public void run() throws Exception {
        byte[] source = Files.readAllBytes(Paths.get("private-inputs/decompilation/regions/" + currentProgram.getName()));
        MemoryBlock block = currentProgram.getMemory().getBlocks()[0];
        int existing = (int)block.getSize();
        if (existing > source.length) throw new Exception("Existing region larger than recovered input");
        byte[] prefix = new byte[existing];
        currentProgram.getMemory().getBytes(block.getStart(), prefix);
        if (!Arrays.equals(prefix, Arrays.copyOf(source, existing))) throw new Exception("Recovered prefix differs; reimport required");
        if (source.length > existing && currentProgram.getMemory().getBlocks().length == 1) {
            currentProgram.getMemory().createInitializedBlock("recovered_tail", block.getStart().add(existing),
                new ByteArrayInputStream(source, existing, source.length - existing), source.length - existing, monitor, false);
        }
        println("Verified recovered region prefix; source length=" + source.length);
    }
}
