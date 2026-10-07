import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.address.AddressRange;
import ghidra.program.model.address.AddressRangeIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;

import java.io.File;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;

/** Export Ghidra function body ranges and instruction coverage for the current program. */
public class ExportMainFunctionBodies extends GhidraScript {
    @Override
    public void run() throws Exception {
        File output = new File(getScriptArgs()[0]);
        File parent = output.getParentFile();
        if (parent != null) {
            parent.mkdirs();
        }

        long functionCount = 0;
        long bodyBytes = 0;
        long instructionBytes = 0;
        try (PrintWriter writer = new PrintWriter(output, StandardCharsets.UTF_8)) {
            writer.println("function\tstart\tlength\tinstruction_bytes\tinstruction_count");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled();
                Function function = functions.next();
                functionCount++;
                AddressRangeIterator ranges = function.getBody().getAddressRanges();
                while (ranges.hasNext()) {
                    AddressRange range = ranges.next();
                    long covered = 0;
                    long count = 0;
                    AddressSet rangeSet = new AddressSet(range.getMinAddress(), range.getMaxAddress());
                    InstructionIterator instructions = currentProgram.getListing()
                        .getInstructions(rangeSet, true);
                    while (instructions.hasNext()) {
                        Instruction instruction = instructions.next();
                        covered += instruction.getLength();
                        count++;
                    }
                    long length = range.getLength();
                    bodyBytes += length;
                    instructionBytes += covered;
                    writer.printf("%s\t%s\t%d\t%d\t%d%n", function.getEntryPoint(),
                        range.getMinAddress(), length, covered, count);
                }
            }
        }
        println("Exported " + functionCount + " functions; bodyBytes=" + bodyBytes +
            " instructionBytes=" + instructionBytes + " to " + output);
    }
}
