import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

import java.io.File;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;

/** Export cross-function control-flow edges and data references to function entries. */
public class ExportMainFunctionEdges extends GhidraScript {
    @Override
    public void run() throws Exception {
        File output = new File(getScriptArgs()[0]);
        File parent = output.getParentFile();
        if (parent != null) {
            parent.mkdirs();
        }

        try (PrintWriter writer = new PrintWriter(output, StandardCharsets.UTF_8)) {
            writer.println("kind\tfunction\tsite\ttype\ttarget\ttarget_function");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled();
                Function function = functions.next();
                InstructionIterator instructions = currentProgram.getListing()
                    .getInstructions(function.getBody(), true);
                while (instructions.hasNext()) {
                    Instruction instruction = instructions.next();
                    if (!instruction.getFlowType().isCall() && !instruction.getFlowType().isJump()) {
                        continue;
                    }
                    for (Address target : instruction.getFlows()) {
                        if (function.getBody().contains(target)) {
                            continue;
                        }
                        Function callee = currentProgram.getFunctionManager().getFunctionContaining(target);
                        writer.printf("CALL\t%s\t%s\t%s\t%s\t%s%n",
                            function.getEntryPoint(), instruction.getAddress(),
                            instruction.getFlowType(), target,
                            callee == null ? "" : callee.getEntryPoint());
                    }

                }

                ReferenceIterator references = currentProgram.getReferenceManager()
                    .getReferencesTo(function.getEntryPoint());
                while (references.hasNext()) {
                    Reference reference = references.next();
                    if (!reference.getReferenceType().isData()) {
                        continue;
                    }
                    Function owner = getFunctionContaining(reference.getFromAddress());
                    writer.printf("DATA\t%s\t%s\t%s\t%s\t%s%n",
                        function.getEntryPoint(), reference.getFromAddress(),
                        reference.getReferenceType(), function.getEntryPoint(),
                        owner == null ? "" : owner.getEntryPoint());
                }
            }
        }
        println("Wrote cross-function control edges and function-entry data references to " + output);
    }
}
