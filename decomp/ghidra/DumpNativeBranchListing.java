// List branch instructions and nearby native instructions that compare a
// selected function against a small set of constants. Useful for checking
// Ghidra pseudocode branch structure against the original x86 bytes.
// @category MissionFleet
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import java.util.ArrayList;
import java.util.List;

public class DumpNativeBranchListing extends GhidraScript {
    @Override public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 2) {
            Address start = toAddr(args[0]);
            Address end = toAddr(args[1]);
            InstructionIterator range = currentProgram.getListing().getInstructions(
                new AddressSet(start, end), true);
            while (range.hasNext()) {
                Instruction instruction = range.next();
                println(instruction.getAddress() + "  " + instruction);
            }
            return;
        }
        if (args.length != 1) throw new IllegalArgumentException("Expected a function address or address range");
        Function function = getFunctionContaining(toAddr(args[0]));
        if (function == null) throw new IllegalArgumentException("No function at " + args[0]);

        List<Instruction> instructions = new ArrayList<>();
        InstructionIterator iterator = currentProgram.getListing().getInstructions(function.getBody(), true);
        while (iterator.hasNext()) instructions.add(iterator.next());

        for (int index = 0; index < instructions.size(); ++index) {
            Instruction instruction = instructions.get(index);
            String text = instruction.toString().toLowerCase();
            if (!(text.contains("0x100") || text.contains("0x101") || text.contains("0x102"))) continue;
            int start = Math.max(0, index - 5);
            int end = Math.min(instructions.size(), index + 7);
            println("--- branch context near " + instruction.getAddress() + " ---");
            for (int nearby = start; nearby < end; ++nearby) {
                Instruction item = instructions.get(nearby);
                println(item.getAddress() + "  " + item);
            }
        }
    }
}
