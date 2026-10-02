"""Build evidence-backed byte-match records for the installed Core.dll client."""
import argparse
import csv
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ADDRESSES = (
    "584869C0",
    "58484AD0", "5872D130",
    "586E8270",
    "586EA6E0", "586EB810",
    "58797A90", "58797CE0", "58797EE0", "58797F30", "58857B70",
    "584A9AD0", "584A9D30", "584A91D0", "584CEB30",
    "5850BB30", "58504C30", "58504BB0", "58504CA0", "58504AA0",
    "58501A80", "58504B50", "58504AE0", "58501AD0", "584C52B0",
    "584A3730", "5850A170", "58508A00", "58508A60", "58505960",
    "58504920", "585071C0", "584A3D70", "58488040",
    "586EBCD0", "586E7EF0", "586E9070", "586E9510", "586EBB80", "586EBD10",
    "584AA480", "584860A0", "584C5D40", "586E94F0", "58507730",
    "584849C0", "584958D0", "587B6280",
    "586E9880", "586E9AF0", "586EAA50", "586EB530", "586EB640", "586EB730",
    "587BA830", "58800A60", "5880D420",
    "588009C0", "58800A30", "588099F0",
    "5880D370", "5880D3E0", "58816550",
    "585B03F0", "587803B0", "58780490", "587B6750", "587B6D70",
    "587D52A0", "587D5310", "587D5340", "587D6E20",
    "587F3930", "587F39A0", "587F39D0", "587F7C00",
    "58819F20", "58819F90", "58819FC0", "5881E330",
    "587D8110", "587D8160", "587D8190", "587D9560",
    "587FAA50", "587FAAA0", "587FAAD0", "587FDBA0",
    "58821250", "588212A0", "588212D0", "588244F0",
    "58486C60", "5849C770", "587B5DB0",
    "58482CD0", "58486980",
    "58525B10", "587B5540", "587B55B0",
    "58482270", "584822D0", "58482320", "58485F30", "58485990",
    "58486810", "58534900", "584AED70", "587B4990", "587B4C00",
    "587B4CE0", "584C9DE0", "584C9DC0",
    "587B50A0", "587B5130",
    "58485DA0", "58485DE0", "58485E40", "58485E80",
    "58485EE0", "58485F10", "58485F90",
    "58495710", "58495870", "587B5F40", "58495610", "587B5B20",
    "58534B00", "584B5140", "5856DBC0",
    "58534D30", "58534E80", "5852D160", "5852D0C0", "5852D5D0", "585341D0", "58534760", "585348B0", "58521FF0", "587B4180", "584C0DE0", "58484B20", "587B5730", "58529610", "58532AD0", "5848C0B0", "5849F480", "587B52B0", "587B5520", "584BF150", "5884CE10", "5884C890", "58831004", "58859610", "58864670", "5882E770", "58487710", "5884D3E5", "5886CED0", "58879A60", "58879A70", "5886246F", "58868BF1", "588646B0", "588646D0", "587AABC0", "5882E666", "58487680", "58487780", "588647D0", "58864910", "58864C70", "58864FE0", "58864C40", "58873ED0", "58873EB0", "58873EE0", "58870110", "58870130", "58870160", "588701C0", "588721E0", "58873F20", "58873F50", "58859720", "5887D0C0", "58531000", "58530EA0",
    "587B6530", "587B3FD0", "587B4550", "587B45C0",
    "5857FE50", "58539D50", "5853ACB0", "5853ACD0", "5853ADA0",
    "5856E240", "5882DD60",
    "5882E060",
    "5882DBD0", "5856E0D0",
    "5882DA20", "5882E530", "5856E040", "587BD560",
)
CORE_SHA256 = "75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4"
EVIDENCE = {
    "584869C0": {
        "name_in_analysis": "FUN_584869c0",
        "called_by": "The mapped Core.dll references this helper from the ship renderer (0x587B6D70), scene object construction (0x586E8270), and ship-state setup (0x5852D5D0), among other callers.",
        "behavior": "Ghidra decompiles the function as returning the DWORD at receiver offset +4. The ship-state constructor uses the returned value in child-object placement arithmetic, consistent with a stored node coordinate or origin component.",
        "uncertainty": "The field's semantic name, coordinate system, and units are not established. The exact return contract is directly visible; its meaning is inferred from call-site arithmetic.",
    },
    "58484AD0": {
        "name_in_analysis": "FUN_58484ad0",
        "called_by": "Directly called three times by scene handler 0x5872D130 for table indices 2, 4, and 5; also used throughout Core.dll factory and setup functions.",
        "behavior": "Bounds-checks an index against receiver field +0x160 and the -1 lower bound. When valid and receiver field +0x190 is nonzero, returns the address of the indexed 0x40-byte entry; otherwise returns null.",
        "uncertainty": "The table entry type and semantic role are unknown. The range check, backing pointer, stride, and null behavior are direct Ghidra observations.",
    },
    "5872D130": {
        "name_in_analysis": "FUN_5872d130",
        "called_by": "Scene update dispatcher 0x58531000 calls it at 0x58531698 with value 0x20000; Ghidra also records callers 0x585F6720 and 0x585B0E50.",
        "behavior": "Looks up child-table entries 2, 4, and 5 through 0x58484AD0 and attaches each through 0x58486C60. It makes three global-helper calls to 0x58485EE0, then for selected values 0x20000, 0x30000, 0x40000, and 0x50000 updates receiver fields +0x64 and +0x68; all but 0x40000 also detach through 0x58486C60(0). Finally it writes 300 to +0x54/+0x58 and copies the two state values to +0x5C/+0x60.",
        "uncertainty": "The lookup entries, attached objects, helper 0x58485EE0 effects, state-value meanings, and numeric units are unknown. The caller uses 0x20000, but the other accepted values are observed only in the handler's comparisons.",
    },
    "586E8270": {
        "name_in_analysis": "FUN_586e8270",
        "called_by": "Scene update dispatcher 0x58531000 calls this function at 0x58531333 when scene state code 1 reaches phase 8, passing the scene plus 0x70, 0x54, 0x400, 0x300, and 11000.",
        "behavior": "Ghidra shows a constructor-shaped sequence: it calls base initializer 0x5856B700, installs vtable 0x588B3194, allocates and stores a child through 0x587803B0, then allocates/configures additional 0x54-byte child records and creates 15 repeated 0x70-byte records in a loop. It also creates several 0xAC-byte children through 0x584CBCE0, initializes child fields with 0x587B55B0/0x587B5540, stores geometry derived from the passed x/y values and helper results, and finishes with three iterations of helper calls 0x586E8FE0, 0x586EBC70, and 0x58521CD0.",
        "uncertainty": "The class purpose, child and table types, resource identifiers, field semantics, helper side effects, and visible screen composition are unknown. Allocation success branches and exact call arguments are visible in Ghidra; semantic labels beyond constructor/child setup are not established.",
    },
    "586EA6E0": {
        "name_in_analysis": "FUN_586ea6e0",
        "called_by": "Post-construction setup routine 0x586EB810 calls it three times with paths at 0x588B3094/0x588B30A8/0x588B30B4 and indices 0/1/2. Those mapped strings are '.\\Announcement.txt', '.\\Patch.txt', and '.\\Eula.sdt'.",
        "behavior": "Ghidra shows it opening the supplied path through 0x587B3300, updating an indexed status field, reading the file into a size+1 buffer, closing the handle, parsing records with 0x58797A90 and the table at 0x588B318C, creating one object for the first record and additional objects for the remaining records, storing the resulting count, freeing the temporary buffer, and releasing a temporary resource through 0x58797BF0.",
        "uncertainty": "The three path names are directly present in mapped data, and the file/read/parse/count flow is visible in Ghidra. Record schema, object types, callback contracts, and whether the parsed text is displayed by this scene remain unresolved.",
    },
    "586E9070": {
        "name_in_analysis": "FUN_586e9070",
        "called_by": "The mapped scene cleanup wrapper at 0x586E9510 calls it at 0x586E951A; Ghidra also identifies an unwind cleanup caller at 0x5888C993.",
        "behavior": "Resets the object's vtable pointer to 0x588B3194, releases and clears multiple stored object pointers through their virtual slot 0, loops over the 12-byte descriptors beginning at receiver +0x138, and calls 0x586EBB80 for each descriptor to destroy its live string elements. It then clears another vector and delegates final cleanup to 0x586E9050 and 0x5856B7C0.",
        "uncertainty": "The exact class name, ownership meaning of most object fields, and whether any cleared controls display the loaded text are unknown. The vector range and cleanup call order are directly visible in Ghidra; labels such as scene destructor are based on the vtable reset and cleanup-shaped caller, not recovered symbols.",
    },
    "586E9510": {
        "name_in_analysis": "FUN_586e9510",
        "called_by": "Ghidra identifies it as the deleting-destructor wrapper associated with the cleanup routine 0x586E9070; the wrapper calls that routine unconditionally.",
        "behavior": "Calls 0x586E9070, then if bit 0 of its second argument is set, calls 0x58831034 with the object pointer and size 0x14C; it returns the original pointer.",
        "uncertainty": "The second argument's complete flag contract and allocator/deallocation semantics of 0x58831034 are not established. The conditional bit test, fixed size, and call order are directly visible in Ghidra.",
    },
    "586EBB80": {
        "name_in_analysis": "FUN_586ebb80",
        "called_by": "Scene cleanup routine 0x586E9070 calls it for each 12-byte descriptor selected by 0x586E94F0.",
        "behavior": "If the string vector's begin and end pointers differ, destroys the live element range through 0x58504AE0 and resets end to begin, retaining the vector allocation/capacity.",
        "uncertainty": "The exact container and allocator type names are unresolved. Element destruction, end-pointer reset, and non-empty guard follow directly from Ghidra control flow.",
    },
    "586EBD10": {
        "name_in_analysis": "FUN_586ebd10",
        "called_by": "Scene cleanup routine 0x586E9070 uses it to bound iteration over the descriptors beginning at receiver +0x138.",
        "behavior": "Returns the number of 12-byte records in the begin/end span: (end - begin) / 0x0C. In this scene, resource loader 0x586EA6E0 selects descriptors 0, 1, and 2 for Announcement, Patch, and Eula resources.",
        "uncertainty": "This helper only establishes a count of 12-byte records. The descriptor meaning comes from the separately documented resource loader and indexed accessor call sites.",
    },
    "584AA480": {
        "name_in_analysis": "FUN_584aa480",
        "called_by": "Row population wrapper 0x584C5D40 calls it for each selected resource string before the row-control buffer is updated.",
        "behavior": "Calls 0x584AA450 to test the string representation; returns the original object pointer when storage is inline and the heap-data pointer obtained through 0x584872B0 when storage is external.",
        "uncertainty": "The exact string class and allocator ABI are not named. The inline-versus-external branch and returned pointer are visible in Ghidra and related to the 24-byte string layout already traced in the vector population path.",
    },
    "584860A0": {
        "name_in_analysis": "FUN_584860a0",
        "called_by": "Row population function 0x586EB530 calls this setter once per visible row, passing either the selected line-string data or an empty temporary string.",
        "behavior": "If receiver field +0x6C and source are non-null, delegates to 0x587B4180 to copy the source into the receiver's +0x6C buffer with a 0x80-byte capacity argument.",
        "uncertainty": "The receiver class and buffer's exact encoding/truncation contract are unknown. The destination field, capacity argument, and helper call are direct Ghidra evidence; identifying the receiver as a row text control is supported by its 15 repeated scene children but remains a class-role inference.",
    },
    "584C5D40": {
        "name_in_analysis": "FUN_584c5d40",
        "called_by": "Row population function 0x586EB530 calls this after computing a line element address with 0x58507730.",
        "behavior": "Forwards the supplied string object to 0x584AA480 and returns its selected character-data pointer.",
        "uncertainty": "The wrapper's broader call contract is unknown. The single delegate and returned value are visible in Ghidra.",
    },
    "586E94F0": {
        "name_in_analysis": "FUN_586e94f0",
        "called_by": "Resource row population 0x586EB530 and cleanup 0x586E9070 use it to select one of three adjacent per-resource descriptors.",
        "behavior": "Returns the address of descriptor `index` in the 12-byte descriptor span: base + index * 0x0C.",
        "uncertainty": "The helper is a plain indexed address calculation. The three descriptors' resource roles are established by loader 0x586EA6E0 and constructor/layout evidence.",
    },
    "58507730": {
        "name_in_analysis": "FUN_58507730",
        "called_by": "Resource row population function 0x586EB530 uses it to select a 24-byte line-string element from the chosen descriptor.",
        "behavior": "Returns the address of element `index` in the vector: begin + index * 0x18.",
        "uncertainty": "The helper is an indexed address calculation. Element layout and string contents are established by the separately mapped string/vector helpers; the element's exact source-level type is not named.",
    },
    "584849C0": {
        "name_in_analysis": "FUN_584849c0",
        "called_by": "Text-row renderer 0x587B6280 calls this with its renderer context before dispatching the draw operation through that context's virtual slot +8.",
        "behavior": "Returns the DWORD at +0x50 of its receiver. In the row-render path, the returned value is passed as the final draw argument to the renderer interface.",
        "uncertainty": "The renderer context type and the semantic name of its +0x50 field are not recovered. The getter and its use as a draw argument are direct Ghidra observations.",
    },
    "584958D0": {
        "name_in_analysis": "FUN_584958d0",
        "called_by": "Text-row renderer 0x587B6280 uses this width helper when applying its horizontal text-alignment flags.",
        "behavior": "Returns the difference between receiver fields +0x1C and +0x14. The renderer adds the value or half of it to its text x position in the corresponding flag branches.",
        "uncertainty": "The two fields' names, units, and complete alignment-flag contract are unknown. The subtraction and x-position uses are visible in the mapped code.",
    },
    "586EB530": {
        "name_in_analysis": "FUN_586eb530",
        "called_by": "Tab selection 0x586E9880, page-up/down helpers 0x586EB640 and 0x586EB730, input handler 0x586E9AF0, and state updater 0x586EAA50 call it to refresh the selected resource's rows.",
        "behavior": "Iterates 15 row slots. For each slot it computes first-visible-index + slot, compares that index with the selected string-vector count, and either retrieves the 24-byte string element and passes its character-data pointer to setter 0x584860A0 or passes an empty temporary string to clear that slot.",
        "uncertainty": "The 15 scene child receivers are consistent with the constructor's 15 repeated child allocations and cleanup's 15 pointer releases; their concrete UI class and on-screen geometry are not proven by these calls alone. The exact viewport count, selection-index arithmetic, and empty-row path are directly visible.",
    },
    "586EB640": {
        "name_in_analysis": "FUN_586eb640",
        "called_by": "Tab/input dispatcher 0x586E9880 and input handler 0x586E9AF0 call it for the page-down action.",
        "behavior": "When first-visible index is below the selected resource's line count minus 15, increments it, updates the associated floating scrollbar position using the remaining scroll range, updates the control through 0x587B5730, and refreshes the 15 rows through 0x586EB530. At the boundary it clamps the scrollbar to the mapped maximum and applies control value 0x213.",
        "uncertainty": "The numeric units and symbolic meanings of the scrollbar constants are unresolved. The index bound, increment, float update, and row refresh are directly visible.",
    },
    "586EB730": {
        "name_in_analysis": "FUN_586eb730",
        "called_by": "Tab/input dispatcher 0x586E9880 and input handler 0x586E9AF0 call it for the page-up action.",
        "behavior": "If first-visible index is zero, sets the scrollbar to the mapped minimum and applies control value 0xFE. Otherwise decrements first-visible index, updates the floating scrollbar position, applies it through 0x587B5730, and refreshes the 15 rows through 0x586EB530.",
        "uncertainty": "The scrollbar constants' units and symbolic names are unknown. The lower-bound test, decrement, and refresh sequence are direct Ghidra observations.",
    },
    "586E9880": {
        "name_in_analysis": "FUN_586e9880",
        "called_by": "Ghidra records it as the scene's 0x14C-byte control object callback path; it dispatches the selected child pointer for event type 2.",
        "behavior": "Compares the incoming child pointer against three resource-tab pointers. On a recognized tab, it stores the selected resource index, resets the first-visible index when the tab's loaded-state flag is set, updates the scrollbar, refreshes rows through 0x586EB530, and marks the selected tab. Two other child pointers dispatch to page-down and page-up helpers 0x586EB730 and 0x586EB640.",
        "uncertainty": "The visible tab labels, control class names, loaded-state field semantics, and remaining child action semantics are unknown. The three-way dispatch and state writes are visible in Ghidra; calling these pointers resource tabs follows their relationship to the three resource descriptors.",
    },
    "586E9AF0": {
        "name_in_analysis": "FUN_586e9af0",
        "called_by": "Installed scene vtable callback; its selected-tab identity and direct live event entry were not resolved, but it contains the input paths that invoke 0x586EB640, 0x586EB730, and 0x586EB530.",
        "behavior": "Processes the selected scene-control input modes, including event codes 0x100, 0x200, 0x201, 0x202, and 0x20A. Its keyboard-control branch routes child codes 0x26 and 0x28 to page-up/down; its pointer/wheel paths adjust the first-visible index and scrollbar position, then refresh the 15 resource rows through 0x586EB530. It also maintains pointer-drag and focus-related state fields.",
        "uncertainty": "The complete event object's ABI, vtable slot identity, external coordinate helper semantics, and live event sequence are unverified. Ghidra establishes the branches and updates statically; this is not a runtime input capture.",
    },
    "586EAA50": {
        "name_in_analysis": "FUN_586eaa50",
        "called_by": "Ghidra records the routine among callbacks that invoke 0x586EB530 to repopulate scene rows.",
        "behavior": "When the receiver's enable/state bits select state 1, it updates grouped control values including 15 repeated entries and refreshes the selected resource rows through 0x586EB530; state 4 applies another group of control updates, while state 5 calls two methods on a stored interface after a counter reaches 0x0C. It also walks an intrusive callback list stored at +0x3C.",
        "uncertainty": "The control-state meanings, relationship of each numeric value to animation/layout, interface contract, and list-node semantics remain unresolved. State tests, repeated group sizes, row-refresh call, counter threshold, and callback traversal are visible in Ghidra.",
    },
    "587B6280": {
        "name_in_analysis": "FUN_587b6280",
        "called_by": "Installed Core vtable address point 0x58894C58 stores this function at slot +0x14; text-row constructor 0x584823B0 installs that vtable and allocates the row's 0x80-byte text buffer at +0x6C.",
        "behavior": "When node flag bit 0 is set, dispatches negative-order child render callbacks before its own draw, intersects the node rectangle with the incoming clip, computes the text origin, and passes the row's +0x6C text buffer and style fields to the renderer object at +0x50 through virtual slot +8. It then dispatches the remaining child callbacks.",
        "uncertainty": "The renderer interface's concrete implementation, text encoding, full style-flag meanings, child-list sentinel contract, and visible pixels are unresolved. Vtable membership, clipping arithmetic, buffer/style arguments, and virtual call order are directly visible in Ghidra and the mapped image.",
    },
    "58797A90": {
        "name_in_analysis": "FUN_58797a90",
        "called_by": "File loader 0x586EA6E0 calls it at 0x586EA7D3 with the NUL-terminated file buffer and delimiter descriptor at 0x588B318C.",
        "behavior": "Initializes a parser object, clears its collection count, performs runtime setup, and delegates the supplied buffer and delimiter descriptor to 0x58797CE0.",
        "uncertainty": "The parser object's class and runtime-helper contracts are unnamed. The delimiter contents and the delegated split behavior are independently established from mapped data and 0x58797CE0.",
    },
    "58797CE0": {
        "name_in_analysis": "FUN_58797ce0",
        "called_by": "Parser initializer 0x58797A90; its output is subsequently read by 0x58797EE0 and 0x58797F30 from the file loader.",
        "behavior": "Copies the input buffer, repeatedly splits it using delimiter bytes supplied by the caller, skips empty spans, removes a trailing carriage return from each nonempty line, wraps each line as a string, and appends it to the parser collection. The caller's descriptor at 0x588B318C contains only LF (0x0A).",
        "uncertainty": "The collection/string implementation helpers and text encoding are not named. The LF split and CR trimming are direct from mapped data and Ghidra control flow; this does not establish how the scene displays each line.",
    },
    "58797EE0": {
        "name_in_analysis": "FUN_58797ee0",
        "called_by": "File loader 0x586EA6E0 after parser initialization at 0x58797A90.",
        "behavior": "Returns the first string element from the parser's collection and advances its stored index when the collection is nonempty; returns null for an empty collection.",
        "uncertainty": "The receiver's class and the string element's ownership contract are not established from this accessor alone.",
    },
    "58797F30": {
        "name_in_analysis": "FUN_58797f30",
        "called_by": "File loader 0x586EA6E0 for each remaining index after the first parser collection element.",
        "behavior": "Bounds-checks the next collection index, advances the receiver's stored index, selects the corresponding element, and returns null once the collection is exhausted.",
        "uncertainty": "The receiver's class and element ownership contract are not established. The bounds, index update, and null return are direct Ghidra observations.",
    },
    "58857B70": {
        "name_in_analysis": "FUN_58857b70",
        "called_by": "Parser 0x58797CE0 to split the copied resource buffer into records using the descriptor at 0x588B318C.",
        "behavior": "Builds a 256-bit membership map from the NUL-terminated delimiter bytes, skips leading delimiters, terminates a token in place at the next delimiter, advances the caller's cursor, and returns null when no token remains. Invalid arguments set runtime error code 0x16 through the error helper.",
        "uncertainty": "The helper's runtime error semantics and pointer ownership are not identified. Its delimiter, token boundaries, in-place NUL termination, and cursor updates are visible in Ghidra; the caller supplies LF and separately removes terminal CR.",
    },
    "584A9AD0": {
        "name_in_analysis": "FUN_584a9ad0",
        "called_by": "File loader 0x586EA6E0 once for the first parsed line and once for each subsequent line before insertion into the selected per-file vector.",
        "behavior": "Constructs a temporary 24-byte string object from the NUL-terminated line: obtains its length and delegates string initialization/copy to 0x584A91D0.",
        "uncertainty": "The source text encoding and exact class name are not established. The 24-byte object layout and short-string fields are visible in Ghidra; calling it an MSVC string is an ABI inference.",
    },
    "584A9D30": {
        "name_in_analysis": "FUN_584a9d30",
        "called_by": "File loader 0x586EA6E0 after each temporary line string has been copied into the selected vector.",
        "behavior": "Destroys the temporary string object, releases its heap storage when required, and resets its inline state through 0x584AA4E0 and 0x584A9BF0.",
        "uncertainty": "The helper routines' allocator and exception-state contracts are not named; the caller's construction/copy/destruction order is directly visible.",
    },
    "584A91D0": {
        "name_in_analysis": "FUN_584a91d0",
        "called_by": "String constructor 0x584A9AD0 for every parsed resource line.",
        "behavior": "Initializes a 24-byte string representation. Lengths below 16 use inline storage with capacity 15; longer strings allocate storage, copy the bytes, and write length/capacity fields.",
        "uncertainty": "The 24-byte layout and 15-byte inline threshold are direct Ghidra observations; the standard-library type name, allocator identity, and text encoding are inferred or unresolved.",
    },
    "584CEB30": {
        "name_in_analysis": "FUN_584ceb30",
        "called_by": "Parser accessors 0x58797EE0/0x58797F30 and the scene resource loader's post-parse count path.",
        "behavior": "Returns the number of parser entries as `(end - begin) / 0x18`, confirming 24-byte elements in the parsed line collection.",
        "uncertainty": "The parser collection's class identity is unnamed; its pointer arithmetic and 24-byte stride are direct from mapped code.",
    },
    "5850BB30": {
        "name_in_analysis": "FUN_5850bb30",
        "called_by": "File loader 0x586EA6E0 for each temporary line string, with the destination descriptor selected by 0x586E94F0(scene, fileIndex).",
        "behavior": "Forwards the line string to the destination vector's append routine at 0x58504C30.",
        "uncertainty": "The destination vectors' user-facing role is not established; the caller and append call are direct evidence.",
    },
    "58504C30": {
        "name_in_analysis": "FUN_58504c30",
        "called_by": "Append wrapper 0x5850BB30 when storing scene resource lines.",
        "behavior": "Compares the vector's end and capacity pointers, appending in place through 0x58504BB0 when space remains and invoking 0x58504CA0 when full.",
        "uncertainty": "The element class is unnamed; the three-pointer descriptor and branch condition are direct Ghidra evidence.",
    },
    "58504BB0": {
        "name_in_analysis": "FUN_58504bb0",
        "called_by": "The in-capacity branch of vector append routine 0x58504C30.",
        "behavior": "Constructs one 24-byte element at the current end through 0x58504AA0 and advances the end pointer by 0x18.",
        "uncertainty": "The exact C++ element type is not named; element stride and end-pointer update are direct observations.",
    },
    "58504CA0": {
        "name_in_analysis": "FUN_58504ca0",
        "called_by": "The full-capacity branch of vector append routine 0x58504C30.",
        "behavior": "Chooses a larger capacity, allocates a new block, constructs the inserted 24-byte value at its new position, transfers elements before and after it, then replaces the old descriptor and releases old storage.",
        "uncertainty": "The allocator and element class names are unresolved. Growth, insertion position, transfer ranges, and old-storage cleanup are visible in Ghidra.",
    },
    "58504AA0": {
        "name_in_analysis": "FUN_58504aa0",
        "called_by": "In-capacity append helper 0x58504BB0.",
        "behavior": "Allocates a 0x18-byte string element and copy-constructs its value through 0x584C52B0.",
        "uncertainty": "The precise element class name is not established; its size and copy-construction path are direct.",
    },
    "58501A80": {
        "name_in_analysis": "FUN_58501a80",
        "called_by": "Reallocating append helper 0x58504CA0 at the insertion point in the new block.",
        "behavior": "Allocates and copy-constructs one 0x18-byte string element through 0x584C52B0.",
        "uncertainty": "The standard-library type name is inferred from the matching element stride and string copy routine.",
    },
    "58504B50": {
        "name_in_analysis": "FUN_58504b50",
        "called_by": "Range transfer helper 0x58505960 while relocating existing vector elements.",
        "behavior": "Copy-assigns one existing 0x18-byte element into the current end of the destination vector through 0x58501A80 and advances the destination end pointer by 0x18.",
        "uncertainty": "The element's class name is not recovered; the copy construction and destination pointer update are direct.",
    },
    "58504AE0": {
        "name_in_analysis": "FUN_58504ae0",
        "called_by": "Vector replacement/cleanup helpers 0x58508A60 and 0x585071C0.",
        "behavior": "Walks a range in 0x18-byte steps and destroys each string element through 0x58501AD0.",
        "uncertainty": "Only the range and destructor dispatch are established; allocator internals remain unnamed.",
    },
    "58501AD0": {
        "name_in_analysis": "FUN_58501ad0",
        "called_by": "String range destructor 0x58504AE0.",
        "behavior": "Delegates per-element destruction from the range loop to helper 0x58502140.",
        "uncertainty": "The helper's exact heap-release behavior is not established in this slice; the per-element destructor call and 0x18-byte iteration are direct.",
    },
    "584C52B0": {
        "name_in_analysis": "FUN_584c52b0",
        "called_by": "Element constructors 0x58504AA0 and 0x58501A80 when a parsed line is inserted or reinserted during vector growth.",
        "behavior": "Constructs a string value by copying the source string representation into the destination object.",
        "uncertainty": "The exact class and allocator helper contracts are not named; its constructor role follows from both element-construction callsites.",
    },
    "584A3730": {
        "name_in_analysis": "FUN_584a3730",
        "called_by": "Vector storage cleanup 0x58508A60 and growth guard cleanup 0x585071C0.",
        "behavior": "Releases vector storage using an allocation size of elementCount times 0x18 bytes.",
        "uncertainty": "The underlying allocator contract is unnamed; the byte-count arithmetic is direct.",
    },
    "5850A170": {
        "name_in_analysis": "FUN_5850a170",
        "called_by": "Capacity check 0x586EBCD0 and growth-capacity helper 0x58508A00.",
        "behavior": "Returns vector capacity as `(capacityPointer - beginPointer) / 0x18`.",
        "uncertainty": "The vector type name is not established; pointer roles follow the direct begin/end/capacity comparisons in 0x58504C30.",
    },
    "58508A00": {
        "name_in_analysis": "FUN_58508a00",
        "called_by": "Reallocating append helper 0x58504CA0.",
        "behavior": "Computes a growth capacity of at least the requested count, normally increasing existing capacity by half, subject to a maximum-size bound.",
        "uncertainty": "The maximum-size helper contract is not named; the 1.5x growth and requested-capacity comparison are direct Ghidra observations.",
    },
    "58508A60": {
        "name_in_analysis": "FUN_58508a60",
        "called_by": "Reserve helper 0x586E7EF0 after allocation and transfer of existing elements.",
        "behavior": "Destroys old elements and storage, then updates the vector's begin, end, and capacity pointers using the new buffer and counts.",
        "uncertainty": "The parameter names are inferred from callsites; the three pointer writes and 0x18-byte element stride are direct.",
    },
    "58505960": {
        "name_in_analysis": "FUN_58505960",
        "called_by": "Reserve helper 0x586E7EF0 and reallocating append helper 0x58504CA0.",
        "behavior": "Transfers a range of 0x18-byte elements into newly allocated storage, using 0x58504B50 for each element and cleaning up partial work on its guarded path.",
        "uncertainty": "The exact exception guarantee and element copy/move distinction remain unresolved; loop bounds and element stride are direct.",
    },
    "58504920": {
        "name_in_analysis": "FUN_58504920",
        "called_by": "Reserve helper 0x586E7EF0 and reallocating append helper 0x58504CA0.",
        "behavior": "Requests vector storage sized for the supplied element capacity through the allocator helper.",
        "uncertainty": "The decompiler shows the allocation helper chain but not its underlying heap contract; callers pass capacities later multiplied by 0x18.",
    },
    "585071C0": {
        "name_in_analysis": "FUN_585071c0",
        "called_by": "Exception cleanup path in reserve helper 0x586E7EF0.",
        "behavior": "When temporary storage was allocated, destroys its constructed elements and releases the buffer.",
        "uncertainty": "The guard object's field names and exact exception guarantee are not recovered; cleanup conditions and calls are direct.",
    },
    "584A3D70": {
        "name_in_analysis": "FUN_584a3d70",
        "called_by": "Capacity checks in 0x586EBCD0 and 0x58508A00.",
        "behavior": "Returns the allocator/container maximum element count used to reject impossible vector growth requests.",
        "uncertainty": "The exact max-size calculation is delegated through runtime helpers and is not named in Ghidra.",
    },
    "58488040": {
        "name_in_analysis": "FUN_58488040",
        "called_by": "Reserve wrapper 0x586EBCD0 when the requested line count exceeds the container maximum.",
        "behavior": "Takes the nonreturning error path through runtime helper 0x5882E78D with message data at 0x58894D20.",
        "uncertainty": "The formatted exception type is not proven by this function alone; the nonreturning helper and message pointer are direct.",
    },
    "586EBCD0": {
        "name_in_analysis": "FUN_586ebcd0",
        "called_by": "Resource loader 0x586EA6E0 once for each file index, after parsing its lines and before appending them.",
        "behavior": "Ensures the selected per-file vector has capacity for the parsed line count; checks the maximum size before delegating allocation and element transfer to 0x586E7EF0.",
        "uncertainty": "The three resource descriptors' user-facing purpose and vector class name are unknown. The scene base/index arithmetic, requested count, capacity check, and reserve call are direct.",
    },
    "586E7EF0": {
        "name_in_analysis": "FUN_586e7ef0",
        "called_by": "Capacity reservation helper 0x586EBCD0 when a per-file vector cannot hold all parsed lines.",
        "behavior": "Allocates storage for the requested capacity, transfers current 0x18-byte elements, updates the vector descriptor, and releases temporary storage on the guarded failure path.",
        "uncertainty": "The exact exception guarantee and allocator semantics are not named; allocation, transfer range, pointer update, and cleanup calls are visible in Ghidra.",
    },
    "586EB810": {
        "name_in_analysis": "FUN_586eb810",
        "called_by": "Scene update dispatcher 0x58531000 calls it at 0x58531366 immediately after constructing and storing the 0x586E8270 scene object.",
        "behavior": "Calls 0x586EA6E0 for three mapped path strings in order: '.\\Announcement.txt' with index 0, '.\\Patch.txt' with index 1, and '.\\Eula.sdt' with index 2.",
        "uncertainty": "The call sequence and strings are direct evidence. The intended UI presentation and how these loaded records relate to the newly constructed scene are not established by this wrapper alone.",
    },
    "587BA830": {
        "name_in_analysis": "FUN_587ba830",
        "called_by": "Directly called by animation-frame wrapper 0x5849C770 from the ship render-node draw path at 0x587B5DB0.",
        "behavior": "Ghidra shows viewport-edge clamping, screen-origin subtraction for draw position and clip edges, target-buffer retrieval, and indirect dispatch through sprite vtable slot 1. Readable ITNTL.dll independently supports slot 1 receiving the buffer, local geometry, color, and effect.",
        "uncertainty": "Core Ghidra pseudocode misattributes arguments around the buffer accessor and indirect call, so the exact Core ABI is not established from pseudocode alone. No explicit rejection of an inverted clip is visible; downstream handling is unverified. Pixel output is not yet compared against a live original-client frame.",
    },
    "58800A60": {
        "name_in_analysis": "FUN_58800a60",
        "called_by": "Slot 1 of the sprite vtable installed by constructor 0x588009C0; selected by the 16-bit target and compressed format-2 loader path.",
        "behavior": "Consumes the sprite span stream at this+0x0C and writes to the caller's screen pixel buffer. Handles transparent skips and row/image terminators, an opaque-copy branch, and masked 16-bit blend branches. The ship draw path supplies color 0x80 and effect 0x101 to one blend branch.",
        "uncertainty": "The display-mask configuration and full effect contract vary by runtime target. No live framebuffer comparison against the original client has been recorded.",
    },
    "5880D420": {
        "name_in_analysis": "FUN_5880d420",
        "called_by": "Slot 1 of the sprite vtable installed by constructor 0x5880D370; selected by the alternate 16-bit display-mask path for compressed format-2 sprites.",
        "behavior": "Consumes a sprite span stream and writes converted pixels to the passed render target using the alternate mask-specialized blend paths.",
        "uncertainty": "The exact pixel-format distinction from 0x58800A60 and the meaning of all mask/effect values remain unresolved; no live framebuffer comparison has been recorded.",
    },
    "588009C0": {
        "name_in_analysis": "FUN_588009c0",
        "called_by": "Selected by the Core loader for the first compressed-format-2 sprite class on a 16-bit target; installs vtable 0x588BE71C.",
        "behavior": "Calls shared base initialization at 0x587C9800 with the three constructor arguments, stores the class vtable at object offset 0, and returns the object.",
        "uncertainty": "The names and semantic meaning of the three base-initialization arguments are unresolved; the constructor call site and vtable write are visible in the mapped Core analysis.",
    },
    "58800A30": {
        "name_in_analysis": "FUN_58800a30",
        "called_by": "Slot 0 of vtable 0x588BE71C installed by constructor 0x588009C0.",
        "behavior": "Calls class cleanup at 0x588009F0; when flag bit 0 is set, releases 0x38 bytes at the object address through 0x58831034; returns the object address.",
        "uncertainty": "The exact C++ deleting-destructor convention is inferred from the flag-controlled deallocation call; external delete call sites were not traced in this slice.",
    },
    "588099F0": {
        "name_in_analysis": "FUN_588099f0",
        "called_by": "Slot 2 of vtable 0x588BE71C installed by constructor 0x588009C0; the indirect invocation sites for this slot have not yet been identified.",
        "behavior": "Reads the sprite span stream at object offset 0x0C, rejects an empty stream and nonintersecting clip geometry, obtains destination geometry through screen helpers, then walks row/span controls and writes masked 16-bit pixel results to the target buffer.",
        "uncertainty": "The precise slot-2 effect contract, runtime mask configuration, and all span subformats are not fully named from Ghidra pseudocode. No live framebuffer comparison has been recorded.",
    },
    "5880D370": {
        "name_in_analysis": "FUN_5880d370",
        "called_by": "Selected by the Core loader for the alternate compressed-format-2 sprite class on a 16-bit target; installs vtable 0x588BE72C.",
        "behavior": "Calls shared base initialization at 0x587C9800 with the three constructor arguments, stores the class vtable at object offset 0, and returns the object.",
        "uncertainty": "The names and semantic meaning of the three base-initialization arguments are unresolved; the constructor call site and vtable write are visible in the mapped Core analysis.",
    },
    "5880D3E0": {
        "name_in_analysis": "FUN_5880d3e0",
        "called_by": "Slot 0 of vtable 0x588BE72C installed by constructor 0x5880D370.",
        "behavior": "Calls class cleanup at 0x5880D3A0; when flag bit 0 is set, releases 0x38 bytes at the object address through 0x58831034; returns the object address.",
        "uncertainty": "The exact C++ deleting-destructor convention is inferred from the flag-controlled deallocation call; external delete call sites were not traced in this slice.",
    },
    "58816550": {
        "name_in_analysis": "FUN_58816550",
        "called_by": "Slot 2 of vtable 0x588BE72C installed by constructor 0x5880D370; the indirect invocation sites for this slot have not yet been identified.",
        "behavior": "Reads the sprite span stream at object offset 0x0C, rejects an empty stream and nonintersecting clip geometry, obtains destination geometry through screen helpers, then walks row/span controls and writes masked 16-bit pixel results to the target buffer.",
        "uncertainty": "The precise slot-2 effect contract, runtime mask configuration, and all span subformats are not fully named from Ghidra pseudocode. No live framebuffer comparison has been recorded.",
    },
    "585B03F0": {
        "name_in_analysis": "FUN_585b03f0",
        "called_by": "Ship-structure sprite accessor invoked by the observed ship setup path; it is the caller that constructs and caches the loaded sprite object.",
        "behavior": "Uses the requested structure ID to format a ShipStructureF%d%d%d.spr path, checks the indexed object cache at 0x589617E8, allocates a 0x198-byte object on a cache miss, invokes the sprite loader constructor, and stores the returned object in the cache.",
        "uncertainty": "The exact ownership and lifetime of the cache table are not fully traced here; Ghidra's inferred constructor call omits the implicit this argument in pseudocode, so its register/stack boundary is taken from the call instruction.",
    },
    "587803B0": {
        "name_in_analysis": "FUN_587803b0",
        "called_by": "Called on the newly allocated 0x198-byte object by the cache-miss path at 0x585B03F0.",
        "behavior": "Delegates initialization and optional path loading to base routine 0x587B6750, installs vtable address point 0x588B5B58, then applies a conditional current-render-target registration path when a path argument is present.",
        "uncertainty": "Ghidra's decompiler omits the implicit this argument at the call boundary; the full meaning of the registration condition and its global accessors is unresolved.",
    },
    "58780490": {
        "name_in_analysis": "FUN_58780490",
        "called_by": "Slot 0 of the vtable address point 0x588B5B58 installed by constructor 0x587803B0.",
        "behavior": "Calls cleanup routine 0x58780470, conditionally releases 0x198 bytes at the object address when flag bit 0 is set, and returns the object address.",
        "uncertainty": "The exact C++ deleting-destructor convention is inferred from its slot-0 placement and flag-controlled deallocation; external delete sites were not traced in this slice.",
    },
    "587B6750": {
        "name_in_analysis": "FUN_587b6750",
        "called_by": "Base initialization invoked by 0x587803B0 with the requested sprite path and a zero mode argument.",
        "behavior": "Installs base vtable 0x588BDC84; if a path is supplied and the parse routine 0x587B6D70 succeeds, returns the initialized object, otherwise fills the default header and record fields before returning it.",
        "uncertainty": "The exact meanings of all default-initialized header offsets are not named; the base constructor's early-return condition is transcribed from Ghidra output.",
    },
    "587B6D70": {
        "name_in_analysis": "FUN_587b6d70",
        "called_by": "Called by base initializer 0x587B6750 when a nonnull sprite path is supplied; the ship cache path reaches it through 0x587803B0.",
        "behavior": "Opens the sprite path, reads an 0x84-byte header, compares its first 0x28 bytes with the embedded signature, accepts the observed version branches below 4, allocates image/frame tables, selects pixel-format-specific sprite constructors for output depths 2/3/4, converts or copies image payloads into span/pixel storage, and builds animation records with a 0x40-byte stride.",
        "uncertainty": "Ghidra reports a sparse 15,015-address body inside the 15,037-byte linear span ending at RET 8; ownership of its 22 omitted bytes is unresolved. Checksum, version, output-depth, and record subformat branches are not exhaustively validated against a live original sprite file. The captured mapped Core image is the byte reference because the installed PE has no raw .text bytes for this extent.",
    },
    "587D52A0": {
        "name_in_analysis": "FUN_587d52a0",
        "called_by": "The installed ship sprite parser selects this constructor when its output depth global is 3 and the image-record subtype byte is 0; the constructor installs vtable address point 0x588BE6BC.",
        "behavior": "Calls shared sprite-data base initialization at 0x587C9800, writes vtable 0x588BE6BC to object offset 0, and returns the object.",
        "uncertainty": "The subtype byte's user-facing pixel/alpha meaning and the three base-initialization arguments are unresolved. Constructor selection and vtable write are directly visible in the mapped Core analysis.",
    },
    "587D5310": {
        "name_in_analysis": "FUN_587d5310",
        "called_by": "Slot 0 of vtable 0x588BE6BC installed by constructor 0x587D52A0.",
        "behavior": "Calls class cleanup at 0x587D52D0; when flag bit 0 is set, releases 0x38 bytes at the object address through 0x58831034; returns the object address.",
        "uncertainty": "The deleting-destructor convention is inferred from its slot-0 placement and flag-controlled free; external delete call sites were not traced in this slice.",
    },
    "587D5340": {
        "name_in_analysis": "FUN_587d5340",
        "called_by": "Slot 1 of vtable 0x588BE6BC; the generic screen dispatcher at 0x587BA830 invokes sprite slot 1 with target buffer, geometry, and color/effect parameters.",
        "behavior": "Rejects a null sprite payload or nonintersecting geometry, clips the sprite rectangle, obtains destination pitch and origin through screen helpers, then traverses the image data and performs mask-specialized channel blending for the three-byte render target. The caller supplies the node color and effect through the final arguments.",
        "uncertainty": "The exact source pixel layout, channel-mask meanings, and full color/effect contract are not named in the Ghidra output. No original-client framebuffer comparison is available; the observed caller/slot relationship is established by the vtable and screen dispatcher.",
    },
    "587D6E20": {
        "name_in_analysis": "FUN_587d6e20",
        "called_by": "Slot 2 of vtable 0x588BE6BC installed by constructor 0x587D52A0; a specific indirect invocation site has not been identified.",
        "behavior": "Reads the sprite payload at object offset 0x0C, clips against the supplied screen rectangle, obtains destination pitch/origin, then traverses image data and applies the class's mask-specialized channel blend path.",
        "uncertainty": "The slot-2 effect contract and its call sites are unresolved. Ghidra shows a related blend traversal to slot 1, but no evidence yet explains the runtime condition that chooses slot 2. No framebuffer comparison has been recorded.",
    },
    "587F3930": {
        "name_in_analysis": "FUN_587f3930",
        "called_by": "The installed ship sprite parser selects this constructor when its output-depth global is 3 and its local class selector is 1; the constructor installs vtable address point 0x588BE6FC.",
        "behavior": "Calls shared sprite-data base initialization at 0x587C9800, writes vtable 0x588BE6FC to object offset 0, and returns the object.",
        "uncertainty": "The selector's user-facing pixel/alpha meaning and the three base-initialization arguments are unresolved. Constructor selection and vtable write are directly visible in the mapped Core analysis.",
    },
    "587F39A0": {
        "name_in_analysis": "FUN_587f39a0",
        "called_by": "Slot 0 of vtable 0x588BE6FC installed by constructor 0x587F3930.",
        "behavior": "Calls class cleanup at 0x587F3960; when flag bit 0 is set, releases 0x38 bytes at the object address through 0x58831034; returns the object address.",
        "uncertainty": "The deleting-destructor convention is inferred from its slot-0 placement and flag-controlled free; external delete call sites were not traced in this slice.",
    },
    "587F39D0": {
        "name_in_analysis": "FUN_587f39d0",
        "called_by": "Slot 1 of vtable 0x588BE6FC; the generic screen dispatcher at 0x587BA830 invokes sprite slot 1 with target buffer, geometry, and color/effect parameters.",
        "behavior": "Rejects a null sprite payload or nonintersecting geometry, clips the sprite rectangle, scans compressed row spans to reach the clipped top, then blends literal pixel runs into the three-byte render target using channel masks and the final color/effect arguments. The span stream uses 0xFFFF row terminators; signed controls below -1 abort.",
        "uncertainty": "The exact source pixel layout, mask meanings, and full color/effect contract are not named in the Ghidra output. No original-client framebuffer comparison is available; the caller/slot relationship is established by the mapped vtable and dispatcher.",
    },
    "587F7C00": {
        "name_in_analysis": "FUN_587f7c00",
        "called_by": "Slot 2 of vtable 0x588BE6FC installed by constructor 0x587F3930; a specific indirect invocation site has not been identified.",
        "behavior": "Reads the sprite payload at object offset 0x0C, clips against the supplied screen rectangle, scans row/span records, and applies the class's mask-specialized channel blend traversal.",
        "uncertainty": "The slot-2 effect contract and its call sites are unresolved. Ghidra shows a related span/blend traversal to slot 1, but no evidence yet explains the runtime condition that chooses slot 2. No framebuffer comparison has been recorded.",
    },
    "58819F20": {
        "name_in_analysis": "FUN_58819f20",
        "called_by": "The installed ship sprite parser selects this constructor when its output-depth global is 3 and its local class selector is 2; the constructor installs vtable address point 0x588BE73C.",
        "behavior": "Calls shared sprite-data base initialization at 0x587C9800, writes vtable 0x588BE73C to object offset 0, and returns the object.",
        "uncertainty": "The selector's user-facing pixel/alpha meaning and the three base-initialization arguments are unresolved. Constructor selection and vtable write are directly visible in the mapped Core analysis.",
    },
    "58819F90": {
        "name_in_analysis": "FUN_58819f90",
        "called_by": "Slot 0 of vtable 0x588BE73C installed by constructor 0x58819F20.",
        "behavior": "Calls class cleanup at 0x58819F50; when flag bit 0 is set, releases 0x38 bytes at the object address through 0x58831034; returns the object address.",
        "uncertainty": "The deleting-destructor convention is inferred from its slot-0 placement and flag-controlled free; external delete call sites were not traced in this slice.",
    },
    "58819FC0": {
        "name_in_analysis": "FUN_58819fc0",
        "called_by": "Slot 1 of vtable 0x588BE73C; the generic screen dispatcher at 0x587BA830 invokes sprite slot 1 with target buffer, geometry, and color/effect parameters.",
        "behavior": "Rejects a null sprite payload or nonintersecting geometry, clips the image rectangle, obtains the screen origin and pitch, scans compressed span records to reach clipped rows, then blends literal pixel runs into the three-byte target using channel masks and the final color/effect arguments. The decompilation treats -1 as a row terminator and returns on lower signed controls.",
        "uncertainty": "The exact source pixel layout, mask meanings, and complete color/effect contract are not named in the Ghidra output. No original-client framebuffer comparison is available; the caller/slot relationship is established by the mapped vtable and dispatcher.",
    },
    "5881E330": {
        "name_in_analysis": "FUN_5881e330",
        "called_by": "Slot 2 of vtable 0x588BE73C installed by constructor 0x58819F20; a specific indirect invocation site has not been identified.",
        "behavior": "Reads the sprite payload at object offset 0x0C, clips against the supplied screen rectangle, traverses compressed row/span records, and applies this class's mask-specialized channel blending.",
        "uncertainty": "The slot-2 effect contract and its call sites are unresolved. Ghidra shows a related span/blend traversal to slot 1, but no evidence explains which runtime condition dispatches here. No framebuffer comparison has been recorded.",
    },
    "587D8110": {
        "name_in_analysis": "FUN_587d8110",
        "called_by": "The installed ship sprite parser selects this constructor when its output-depth global is 4 and its local class selector is 0; it installs vtable address point 0x588BE6CC.",
        "behavior": "Calls shared sprite-data base initialization at 0x587C9800 with zero arguments, writes vtable 0x588BE6CC to object offset 0, and returns the object.",
        "uncertainty": "The selector's user-facing pixel/alpha meaning and the shared object's remaining semantics are unresolved. Parser selection and vtable write are visible in the mapped Core analysis.",
    },
    "587D8160": {
        "name_in_analysis": "FUN_587d8160",
        "called_by": "Slot 0 of vtable 0x588BE6CC installed by constructor 0x587D8110.",
        "behavior": "Calls class cleanup at 0x587D8140; when flag bit 0 is set, releases 0x38 bytes at the object address through 0x58831034; returns the object address.",
        "uncertainty": "The deleting-destructor convention is inferred from its slot-0 placement and flag-controlled free; external delete call sites were not traced in this slice.",
    },
    "587D8190": {
        "name_in_analysis": "FUN_587d8190",
        "called_by": "Slot 1 of vtable 0x588BE6CC; screen dispatcher 0x587BA830 invokes sprite slot 1 with target buffer, geometry, and color/effect arguments.",
        "behavior": "Rejects a null payload or nonintersecting rectangle, clips the image bounds, obtains screen origin and pitch, then walks pixels using the configured target stride and channel masks. Ghidra shows several blend branches controlled by the final color/effect values.",
        "uncertainty": "The exact pixel-channel layout, mask initialization, and full color/effect contract are not recovered. No original-client framebuffer comparison has been recorded.",
    },
    "587D9560": {
        "name_in_analysis": "FUN_587d9560",
        "called_by": "Slot 2 of vtable 0x588BE6CC installed by constructor 0x587D8110; a specific indirect invocation site has not been identified.",
        "behavior": "Checks payload and geometry, clips to the screen rectangle, computes target addresses using the configured pixel stride, and traverses the image data through mask-specialized color/effect branches.",
        "uncertainty": "The slot-2 dispatch condition, effect contract, and complete mask meaning remain unresolved. Ghidra pseudocode supports the buffer/clip traversal; no live framebuffer comparison has been made.",
    },
    "587FAA50": {
        "name_in_analysis": "FUN_587faa50",
        "called_by": "The installed ship sprite parser selects this constructor when its output-depth global is 4 and its local class selector is 1; it installs vtable address point 0x588BE70C.",
        "behavior": "Calls shared sprite-data base initialization at 0x587C9800 with zero arguments, writes vtable 0x588BE70C to object offset 0, and returns the object.",
        "uncertainty": "The selector's user-facing pixel/alpha meaning and the shared object's remaining semantics are unresolved. Parser selection and vtable write are visible in the mapped Core analysis.",
    },
    "587FAAA0": {
        "name_in_analysis": "FUN_587faaa0",
        "called_by": "Slot 0 of vtable 0x588BE70C installed by constructor 0x587FAA50.",
        "behavior": "Calls class cleanup at 0x587FAA80; when flag bit 0 is set, releases 0x38 bytes at the object address through 0x58831034; returns the object address.",
        "uncertainty": "The deleting-destructor convention is inferred from its slot-0 placement and flag-controlled free; external delete call sites were not traced in this slice.",
    },
    "587FAAD0": {
        "name_in_analysis": "FUN_587faad0",
        "called_by": "Slot 1 of vtable 0x588BE70C; the generic screen dispatcher at 0x587BA830 invokes sprite slot 1 with target buffer, geometry, and color/effect parameters.",
        "behavior": "Rejects a null payload or nonintersecting geometry, clips the image rectangle, obtains screen origin and pitch, and walks the image data using the configured target stride and the class's channel-mask globals. Multiple blend branches depend on the final color/effect parameters.",
        "uncertainty": "The exact pixel-channel layout, mask initialization, and full color/effect contract are not recovered. No original-client framebuffer comparison has been recorded.",
    },
    "587FDBA0": {
        "name_in_analysis": "FUN_587fdba0",
        "called_by": "Slot 2 of vtable 0x588BE70C installed by constructor 0x587FAA50; a specific indirect invocation site has not been identified.",
        "behavior": "Checks payload and geometry, clips to the screen rectangle, computes target addresses using the configured pixel stride, and traverses the image data through a distinct set of channel-mask and color/effect branches.",
        "uncertainty": "The slot-2 dispatch condition, exact pixel-channel layout, and full effect contract remain unresolved. Ghidra pseudocode supports the buffer/clip traversal; no live framebuffer comparison has been made.",
    },
    "58821250": {
        "name_in_analysis": "FUN_58821250",
        "called_by": "The installed ship sprite parser selects this constructor when its output-depth global is 4 and its local class selector is 2; it installs vtable address point 0x588BE74C.",
        "behavior": "Calls shared sprite-data base initialization at 0x587C9800 with zero arguments, writes vtable 0x588BE74C to object offset 0, and returns the object.",
        "uncertainty": "The selector's user-facing pixel/alpha meaning and the shared object's remaining semantics are unresolved. Parser selection and vtable write are visible in the mapped Core analysis.",
    },
    "588212A0": {
        "name_in_analysis": "FUN_588212a0",
        "called_by": "Slot 0 of vtable 0x588BE74C installed by constructor 0x58821250.",
        "behavior": "Calls class cleanup at 0x58821280; when flag bit 0 is set, releases 0x38 bytes at the object address through 0x58831034; returns the object address.",
        "uncertainty": "The deleting-destructor convention is inferred from its slot-0 placement and flag-controlled free; external delete call sites were not traced in this slice.",
    },
    "588212D0": {
        "name_in_analysis": "FUN_588212d0",
        "called_by": "Slot 1 of vtable 0x588BE74C; the generic screen dispatcher at 0x587BA830 invokes sprite slot 1 with target buffer, geometry, and color/effect parameters.",
        "behavior": "Rejects a null payload or nonintersecting geometry, clips the image rectangle, obtains screen origin and pitch, and walks the image data using the configured target stride and the class's channel-mask globals. Its branches blend sprite and target pixels according to the final parameters.",
        "uncertainty": "The exact pixel-channel layout, mask initialization, and full color/effect contract are not recovered. No original-client framebuffer comparison has been recorded.",
    },
    "588244F0": {
        "name_in_analysis": "FUN_588244f0",
        "called_by": "Slot 2 of vtable 0x588BE74C installed by constructor 0x58821250; a specific indirect invocation site has not been identified.",
        "behavior": "Checks payload and geometry, clips to the screen rectangle, computes target addresses using the configured pixel stride, and traverses the image data through channel-mask and color/effect branches.",
        "uncertainty": "The slot-2 dispatch condition, exact pixel-channel layout, and full effect contract remain unresolved. Ghidra pseudocode supports the buffer/clip traversal; no live framebuffer comparison has been made.",
    },
    "58486C60": {
        "name_in_analysis": "FUN_58486c60",
        "called_by": "Render-node attachment path for the ship animation record, as documented in docs/client-render-path.md.",
        "behavior": "Stores the supplied record pointer at node offset 0x54. For a nonnull record, calls two accessors and copies a two-DWORD pair to node offsets 0x0C/0x10 and a four-DWORD rectangle to offsets 0x14 through 0x20.",
        "uncertainty": "The helper routines' exact source-level field meanings and the full set of attachment callers are not established by this function alone.",
    },
    "5849C770": {
        "name_in_analysis": "FUN_5849c770",
        "called_by": "Invoked by ship render-node draw slot 0x587B5DB0 using the attached animation object as this; the draw slot supplies screen, position, clip, elapsed time, color, and effect arguments.",
        "behavior": "Requires a nonzero frame count and screen argument, divides elapsed time by the stored period, wraps by the frame count, applies the selected 0x24-byte frame's x/y offsets, and calls screen dispatcher 0x587BA830 with the position, clip, color, and effect values.",
        "uncertainty": "The original function assumes a positive frame period; the exact sprite/record naming and invalid-period behavior are unresolved. No live frame capture has been compared.",
    },
    "587B5DB0": {
        "name_in_analysis": "FUN_587b5db0",
        "called_by": "Draw target at entries +0x14 and +0x30 in the mapped render-node vtable table at 0x58894C94; the ship structure path reaches it through its render-node hierarchy.",
        "behavior": "Runs only when node flag bit 0 is set and elapsed time is nonnegative. It traverses eligible linked-node callbacks, then, when the attached animation pointer and screen are usable, adds node/anchor/parent position and calls frame renderer 0x5849C770 with the node clip, color, and effect fields.",
        "uncertainty": "Ghidra's inferred callback-node details and implicit this boundaries are not fully resolved. Invalid frame-period handling and pixel output remain unverified against the original client.",
    },
    "58482CD0": {
        "name_in_analysis": "FUN_58482cd0",
        "called_by": "Called from render-node attachment routine 0x58486C60 to obtain the animation record's two-DWORD anchor.",
        "behavior": "Returns the supplied record base plus 0x18; the attachment routine copies two DWORDs from this address into render-node offsets 0x0C/0x10.",
        "uncertainty": "The pair's project-level anchor name is descriptive; the original symbol and units are unavailable.",
    },
    "58486980": {
        "name_in_analysis": "FUN_58486980",
        "called_by": "Called from render-node attachment routine 0x58486C60 to obtain the animation record's four-DWORD rectangle.",
        "behavior": "Returns the supplied record base plus 0x20; the attachment routine copies four DWORDs from this address into render-node offsets 0x14 through 0x20.",
        "uncertainty": "The rectangle's original field name and coordinate convention are unavailable; its copy size and destination offsets are visible in the attachment routine.",
    },
    "58525B10": {
        "name_in_analysis": "FUN_58525b10",
        "called_by": "Ship scene construction entry; its direct external caller and original class name are not yet established.",
        "behavior": "Calls base initialization at 0x58482270, installs vtable address point 0x588A6FD8, builds ship-render child objects, and calls render-node color/effect setters with observed constants including 0, 0x80, 0x101, and 0xFFFFFEFF.",
        "uncertainty": "Ghidra reports several unreachable blocks; original field names and the meaning of each child-array index are unknown. The exact receiver-to-value grouping at all setter call sites has not been fully named.",
    },
    "587B5540": {
        "name_in_analysis": "FUN_587b5540",
        "called_by": "Called repeatedly from ship scene construction at 0x58525B10 to configure render-node color.",
        "behavior": "Stores the supplied value at node offset 0x28, then walks the circular child chain rooted at +0x3C via each child +0x38; recursively applies the value when child flag bit 14 at +0x24 is set.",
        "uncertainty": "The user-facing meaning of the flag bit and color value are inferred from the field and call sites; other child-list invariants are not fully traced.",
    },
    "587B55B0": {
        "name_in_analysis": "FUN_587b55b0",
        "called_by": "Called repeatedly from ship scene construction at 0x58525B10 to configure render-node effect.",
        "behavior": "Stores the supplied value at node offset 0x2C, then walks the circular child chain rooted at +0x3C via each child +0x38; recursively applies the value when the signed flag word at child +0x24 is negative.",
        "uncertainty": "The user-facing meaning of the flag bit and effect values are inferred from the field and call sites; other child-list invariants are not fully traced.",
    },
    "58482270": {
        "name_in_analysis": "FUN_58482270",
        "called_by": "Called from ship-scene construction at 0x58525B10 as a node constructor; its direct call to 0x584822D0 initializes the shared render-node base.",
        "behavior": "Delegates to 0x584822D0, installs vtable address point 0x58894C00, copies two constructor values to object offsets +0x50/+0x54, sets +0x58 to 0x100, and clears +0x5C.",
        "uncertainty": "The semantic names and meanings of offsets +0x50 through +0x5C are unknown; the data flow and vtable store are visible in mapped Ghidra output.",
    },
    "584822D0": {
        "name_in_analysis": "FUN_584822d0",
        "called_by": "Called by the constructor at 0x58482270; it delegates shared field/list initialization to 0x587B4990 and then installs vtable address point 0x58894BE0.",
        "behavior": "Runs shared render-node base initialization and sets flag bit 5 in the 16-bit flags field at object offset +0x24.",
        "uncertainty": "The user-facing meaning of flag bit 5 and the base constructor arguments is not established by the matched function alone.",
    },
    "58482320": {
        "name_in_analysis": "FUN_58482320",
        "called_by": "Called repeatedly from ship-scene construction at 0x58525B10 to create child render nodes; constructor calls and returned-node wiring are visible in the decompiled ship setup.",
        "behavior": "Calls 0x587B4990 with supplied geometry and flags, installs vtable address point 0x58894C20, clears object field +0x50, and delegates optional animation-record attachment to 0x58485F30.",
        "uncertainty": "The meaning of each constructor parameter and child index remains unresolved. Exception-list scaffolding is preserved by the byte match, but its runtime exception behavior was not exercised.",
    },
    "58485F30": {
        "name_in_analysis": "FUN_58485f30",
        "called_by": "Called by node constructor 0x58482320 to attach an optional animation record; the sibling path at 0x58486810 uses the already matched helper 0x58486C60.",
        "behavior": "Stores the record pointer at node offset +0x50. If nonnull, copies two DWORDs from record +0x10 to node +0x0C/+0x10 and four DWORDs from record +0x18 to node +0x14 through +0x20, using accessors 0x58485990 and 0x58482CD0.",
        "uncertainty": "The source fields' semantic names and coordinate convention remain unknown; the offsets and copy widths are directly visible in the decompilation.",
    },
    "58485990": {
        "name_in_analysis": "FUN_58485990",
        "called_by": "Called by 0x58485F30 while copying the optional record's first geometry pair.",
        "behavior": "Returns its input pointer advanced by 0x10 bytes.",
        "uncertainty": "The original symbol and semantic name of the record field are unavailable; only the pointer arithmetic is established.",
    },
    "58486810": {
        "name_in_analysis": "FUN_58486810",
        "called_by": "Called from ship-scene construction at 0x58525B10 for animation/render-node children and by the derived constructor 0x58534900.",
        "behavior": "Calls shared node initialization at 0x587B4990, installs vtable address point 0x58894C94, clears object field +0x50, and delegates optional animation-record attachment to 0x58486C60.",
        "uncertainty": "The exact source-level class name and meaning of constructor arguments remain unresolved; the animation attachment helper is separately matched and documented.",
    },
    "58534900": {
        "name_in_analysis": "FUN_58534900",
        "called_by": "Called from ship-scene construction at 0x58525B10 for a derived render node; it delegates common node setup to 0x58486810.",
        "behavior": "Installs vtable address point 0x588A7020, initializes +0x60 to the result of 0x584C9DE0 minus 1, clears +0x50/+0x5C/+0x64/+0x68, and sets +0x58 to 1.",
        "uncertainty": "The semantic role and unit of the attached record's 16-bit field remain unknown. Ghidra's pseudocode misrepresents the getter receiver; mapped instructions load this object into ECX before calling 0x584C9DE0.",
    },
    "584AED70": {
        "name_in_analysis": "FUN_584aed70",
        "called_by": "Called conditionally by shared node initializer 0x587B4990 when its parent/list parameter is nonzero.",
        "behavior": "Invokes the two parent-child insertion routines 0x587B4C00 and 0x587B4CE0 for the new node.",
        "uncertainty": "The helper establishes the ordered call sequence only; insertion ordering, link fields, and already-linked child handling are implemented in the callees.",
    },
    "587B4990": {
        "name_in_analysis": "FUN_587b4990",
        "called_by": "Shared base initializer called by constructors 0x584822D0, 0x58482320, and 0x58486810, all used by ship-scene construction at 0x58525B10.",
        "behavior": "Initializes the common node vtable, position and size fields, default flags, signed ordering value at +0x26, color/effect defaults, and child-list heads/links. When the parent argument is nonzero, calls 0x584AED70 to insert this node into the parent's two child lists.",
        "uncertainty": "Flag names and parameter semantics remain unknown. The decompilation shows the initial values and call condition but not the user-visible meaning of each initialized flag.",
    },
    "587B4C00": {
        "name_in_analysis": "FUN_587b4c00",
        "called_by": "First insertion routine called by 0x584AED70 during shared node initialization at 0x587B4990.",
        "behavior": "Inserts a child into the parent list rooted at +0x3C, ordering by signed 16-bit child field +0x26. Links use child +0x34/+0x38, and the inserted child stores the parent at +0x30. Existing-parent handling may delegate to 0x587B50A0.",
        "uncertainty": "The signed-first-DWORD early-return case is observed but its semantic purpose is unknown. The ordinary detach/reinsert path is covered by 0x587B50A0; malformed-link behavior is not runtime-tested.",
    },
    "587B4CE0": {
        "name_in_analysis": "FUN_587b4ce0",
        "called_by": "Second insertion routine called by 0x584AED70 during shared node initialization at 0x587B4990.",
        "behavior": "Inserts into the second parent list rooted at +0x4C, ordering by signed 16-bit child field +0x26; it links nodes through +0x44/+0x48 and stores the parent at child +0x40. Equal ordering values are placed after existing equals.",
        "uncertainty": "Existing-list-node handling is covered by 0x587B5130; malformed or inconsistent link behavior is not runtime-tested. Ordinary insertion and tie ordering are directly visible.",
    },
    "584C9DE0": {
        "name_in_analysis": "FUN_584c9de0",
        "called_by": "Called by derived render-node constructor 0x58534900 to initialize its time-related field.",
        "behavior": "Returns zero when the object pointer stored at +0x54 is null; otherwise delegates to 0x584C9DC0 to read a 16-bit field at +0x0C from that object.",
        "uncertainty": "The meaning and unit of the returned 16-bit value are not established by this accessor chain.",
    },
    "584C9DC0": {
        "name_in_analysis": "FUN_584c9dc0",
        "called_by": "Called by 0x584C9DE0 when its +0x54 object pointer is nonnull.",
        "behavior": "Returns the 16-bit value stored at input-object offset +0x0C.",
        "uncertainty": "The original field name and units are unavailable; only the conditional access and width are established by the caller and callee.",
    },
    "587B50A0": {
        "name_in_analysis": "FUN_587b50a0",
        "called_by": "Called by the first ordered-list insertion routine 0x587B4C00 when a node already has a parent at +0x30.",
        "behavior": "Unlinks the node from its existing parent's circular list rooted at +0x3C, updates the parent head when needed, restores the node's +0x34/+0x38 links to itself, and clears +0x30.",
        "uncertainty": "The routine assumes consistent list links when +0x30 is nonzero; malformed-link behavior and the caller's separate negative-first-dword early return are not validated by runtime tests.",
    },
    "587B5130": {
        "name_in_analysis": "FUN_587b5130",
        "called_by": "Called by the second ordered-list insertion routine 0x587B4CE0 when a node already has a parent at +0x40.",
        "behavior": "Unlinks the node from its existing null-terminated parent list rooted at +0x4C, updates neighboring links or the parent head, then clears the node's +0x40/+0x44/+0x48 fields.",
        "uncertainty": "The routine assumes consistent neighbor links when +0x40 is nonzero; malformed or partially linked node behavior is not validated by runtime tests.",
    },
    "58485DA0": {
        "name_in_analysis": "FUN_58485da0",
        "called_by": "Called directly by ship-scene construction at 0x58525B10 on a node held in the scene object.",
        "behavior": "Sets or clears flag bit 14 in the node's 16-bit field at +0x24 from the low bit of the supplied byte.",
        "uncertainty": "The user-visible meaning of flag bit 14 is not established; the setter's mask and value flow are visible in Ghidra output.",
    },
    "58485DE0": {
        "name_in_analysis": "FUN_58485de0",
        "called_by": "Called directly by ship-scene construction at 0x58525B10 on the scene and multiple child nodes.",
        "behavior": "Sets or clears flag bit 1 in the node's 16-bit field at +0x24 from the low bit of the supplied byte.",
        "uncertainty": "The user-visible meaning of flag bit 1 is not established; several constructor callsites pass zero.",
    },
    "58485E40": {
        "name_in_analysis": "FUN_58485e40",
        "called_by": "Called directly by ship-scene construction at 0x58525B10 on newly created child nodes.",
        "behavior": "Sets or clears flag bit 15 in the node's 16-bit field at +0x24 from the low bit of the supplied byte.",
        "uncertainty": "The user-visible meaning of flag bit 15 is not established; the constructor callsites observed here pass zero.",
    },
    "58485E80": {
        "name_in_analysis": "FUN_58485e80",
        "called_by": "Called by ship-scene construction at 0x58525B10 to initialize child ordering fields; this routine is also a direct mechanism for repositioning an already-linked node.",
        "behavior": "Stores the supplied 16-bit value at node +0x26. When list-parent fields +0x40 or +0x30 are nonzero, it calls the corresponding verified ordered-list insertion routine, which detaches and reinserts the node using its new key.",
        "uncertainty": "The user-facing meaning and signed interpretation of the ordering key are inferred from the comparison in the list routines. Constructor callsites establish example values, but later runtime reordering was not observed.",
    },
    "58485EE0": {
        "name_in_analysis": "FUN_58485ee0",
        "called_by": "Called directly by ship-scene construction at 0x58525B10 to initialize flag words on the scene and its child nodes.",
        "behavior": "Sets or clears flag bit 0 in the node's 16-bit field at +0x24 from the low bit of the supplied byte.",
        "uncertainty": "The user-visible meaning of flag bit 0 is not established; constructor callsites observed in this slice pass zero.",
    },
    "58485F10": {
        "name_in_analysis": "FUN_58485f10",
        "called_by": "Called by ship-scene construction at 0x58525B10 on a child object stored at scene offset +0x12138.",
        "behavior": "Stores the supplied DWORD at object offset +0x68; the constructor callsite supplies 0x10101.",
        "uncertainty": "The meaning of object offset +0x68 and the significance of value 0x10101 remain unknown.",
    },
    "58485F90": {
        "name_in_analysis": "FUN_58485f90",
        "called_by": "Called directly by ship-scene construction at 0x58525B10 on the scene object and another child node.",
        "behavior": "Replaces the low four bits of the 16-bit field at +0x24 with the low nibble of the supplied byte while preserving the upper bits.",
        "uncertainty": "The meaning of the low-nibble flag group is not established; observed constructor calls in this slice pass zero.",
    },
    "58495710": {
        "name_in_analysis": "FUN_58495710",
        "called_by": "Called by render-node child scheduler 0x587B5F40 and animation-node draw slot 0x587B5DB0 while comparing ordered child entries.",
        "behavior": "Returns the input node pointer advanced by 0x26, the signed 16-bit ordering-key field read by the scheduler.",
        "uncertainty": "The original symbol and user-facing meaning of the ordering field are unavailable; signed order is established by its consumer and list insertion code.",
    },
    "58495870": {
        "name_in_analysis": "FUN_58495870",
        "called_by": "Called by render-node child scheduler 0x587B5F40 and animation-node draw slot 0x587B5DB0 after dispatching a child callback.",
        "behavior": "Returns the input node pointer advanced by 0x48, the next-link field used by the null-terminated child list.",
        "uncertainty": "The original symbol is unavailable; the returned offset and its use as the next child pointer are visible in the matched-list layout and mapped call path.",
    },
    "587B5F40": {
        "name_in_analysis": "FUN_587b5f40",
        "called_by": "Virtual slot +0x14 of vtable address point 0x58894C20 installed by constructor 0x58482320; parent render-node schedulers invoke this slot while walking child list +0x4C.",
        "behavior": "When flag bit 0 is set, traverses the node's +0x4C list and invokes each child's virtual slot +0x14 for negative ordering keys before drawing its own attached sprite through 0x587BA830; it then resumes callbacks for nonnegative keys. Its own draw uses position + anchor + caller position, the passed clip, and node color/effect fields.",
        "uncertainty": "The first-DWORD threshold check at 0x10001 and the invalid-entry handling are observed but not semantically named. Dynamic callback behavior for other node vtables and live draw ordering are not tested against the running client.",
    },
    "58495610": {
        "name_in_analysis": "FUN_58495610",
        "called_by": "Called by node-update callback 0x587B5B20 while reading the next link in its child-update list.",
        "behavior": "Returns the address of the DWORD at object offset +0x3C, which the update callback reads as the next link.",
        "uncertainty": "This leaf accessor establishes only the field offset; it does not establish a semantic type or behavior for malformed lists.",
    },
    "587B5B20": {
        "name_in_analysis": "FUN_587b5b20",
        "called_by": "Virtual slot +0x0C of vtable 0x58894C94, installed by constructor 0x58486810. The neighboring draw callback is slot +0x14 at 0x587B5DB0.",
        "behavior": "When flag bit 2 at +0x24 is set, increments the DWORD at +0x50, walks the circular child-update list rooted at +0x3C, and invokes each child's virtual slot +0x0C without explicit stack arguments.",
        "uncertainty": "The +0x50 counter advances once per callback visit; evidence does not identify its external clock source or prove it is wall-clock or frame elapsed time. The list threshold 0x10000 is observed, but its origin is unknown.",
    },
    "58534B00": {
        "name_in_analysis": "FUN_58534b00",
        "called_by": "Virtual slot +0x0C of derived node vtable 0x588A7020 installed by constructor 0x58534900. The constructor is used in the ship scene at 0x58525B10 and by other scene setup functions.",
        "behavior": "When node flag bit 2 is set, handles a special +0x5C state value of 2 using the node counter at +0x50, a value at +0x58, and the frame count returned via 0x584C9DE0. It changes state to 0 or 1 on the observed terminal conditions, invokes virtual slot +0x08 on optional objects at +0x64 and +0x68, may call helper 0x5856DBC0, and then recursively dispatches child update slot +0x0C through the +0x3C list.",
        "uncertainty": "The semantic names of +0x58, +0x5C, +0x64, and +0x68 remain unknown, as does the child-list tag threshold. State entry through 0x58534E80 is now statically established, but runtime transition cadence and visual output remain untested.",
    },
    "584B5140": {
        "name_in_analysis": "FUN_584b5140",
        "called_by": "Called twice from the state-2 branch of callback 0x58534B00 when its endpoint tests are not met; also used by other installed Core.dll functions.",
        "behavior": "Adds the signed explicit argument to the receiver's DWORD at +0x50.",
        "uncertainty": "The unit of the adjustment and the semantic name of the +0x50 counter are not established; the ship-animation caller shows it affects frame selection.",
    },
    "5856DBC0": {
        "name_in_analysis": "FUN_5856dbc0",
        "called_by": "Called by ship-animation state callback 0x58534B00 when its +0x68 object is nonnull and a terminal counter condition is met; the call supplies node-relative coordinates and global selector 0x58962090.",
        "behavior": "Rejects x/y values outside [-639,639] and [-511,511]. If receiver field +0x1C is nonzero, calls 0x587BBBA0 with x/y normalized by global 0x58895218, the selector converted to float, then calls receiver slot +0x04 with zero. Otherwise maps selector values 9, 0, 1, 4, 16, 25, and 1000 to integer values passed to receiver slot +0x0C (with a default of -10000), then calls slot +0x04 with zero.",
        "uncertainty": "The receiver type, selector meaning, coordinate units, scaling value, and downstream effects of 0x587BBBA0 and the virtual calls remain unidentified. This establishes branch and dispatch behavior, not a named visual effect.",
    },
    "58534D30": {
        "name_in_analysis": "FUN_58534d30",
        "called_by": "Called by ship-scene update function 0x5852D160 immediately before it starts the derived animation node's transition through 0x58534E80.",
        "behavior": "Resets receiver fields +0x50 to zero, +0x58 to one, and +0x5C to zero.",
        "uncertainty": "The function is also called by many other scene handlers; this establishes the exact writes but not the user-visible name of the reset operation.",
    },
    "58534E80": {
        "name_in_analysis": "FUN_58534e80",
        "called_by": "Called from 0x5852D160 after reset 0x58534D30; Ghidra also lists callers from other installed scene handlers.",
        "behavior": "Sets receiver +0x5C to 2, sets +0x58 to -1 when its explicit argument is zero or +1 otherwise, and when +0x64 is nonnull invokes that object's virtual slot +0x08 and calls 0x5856DBC0 with node-relative coordinates and global selector 0x58962090.",
        "uncertainty": "The selector and attached object semantics remain unknown. The sign-to-counter behavior and state write are directly visible, while external callers' high-level intent is not named.",
    },
    "5852D160": {
        "name_in_analysis": "FUN_5852d160",
        "called_by": "Direct call sites in function 0x58531000 at 0x58531249 and 0x58531BED.",
        "behavior": "Updates scene fields including +0x12154 and +0x8C based on the value at +0x12148, optionally notifies an attached object through virtual slot +0x04, attaches a resource selected by a local value through 0x58486C60, then calls reset 0x58534D30 followed by forward transition start 0x58534E80(1). It finally clears +0x28 and writes 0x100 to +0x58 on the scene object.",
        "uncertainty": "The scene fields and selected resource IDs are not semantically named. This function demonstrates one concrete forward-transition trigger but does not establish its user-visible event or prove the transition ran live.",
    },
    "5852D0C0": {
        "name_in_analysis": "FUN_5852d0c0",
        "called_by": "Direct call from scene update dispatcher 0x58531000 at 0x5853123E, on the alternate parity branch of scene state 1.",
        "behavior": "Clears selected packed flag bits at scene offset +0x24, writes 0x56 to +0x12154, increments +0x12148 by 4, writes 0x100 to +0x28, and clears +0x58.",
        "uncertainty": "The scene field meanings, the significance of the 0x56 and 0x100 values, and the user-visible distinction from sibling path 0x5852D160 remain unknown. This describes static writes only; no live transition was captured.",
    },
    "5852D5D0": {
        "name_in_analysis": "FUN_5852d5d0",
        "called_by": "Direct call from ship-scene update dispatcher 0x58531000 at 0x58531BC6 when the packed scene-state code is 13 and DWORD field +0x12168 equals 100.",
        "behavior": "Creates and attaches several scene objects using helpers 0x58484AD0, 0x58486C60, 0x58482320, and 0x587BA970; stores three created object pointers in globals 0x5896067C, 0x58960680, and 0x58960684; configures additional node values and resources through 0x584AED70; creates another object through 0x586B1C50, enables scene flag bit 0 at +0x24, calls 0x584BED30, then invokes virtual slot +0x08 on the object at +0x12130.",
        "uncertainty": "The allocated object types, resource IDs and globals, meaning of the literal sequence passed to 0x58485E80, and user-visible purpose of this state-13 branch remain unresolved. Behavior is from static Ghidra pseudocode; no live scene or frame was captured.",
    },
    "585341D0": {
        "name_in_analysis": "FUN_585341d0",
        "called_by": "Direct call from ship-scene update dispatcher 0x58531000 at 0x5853156F while the packed scene-state code equals 7.",
        "behavior": "When global byte 0x5894733C is nonzero, clears it, loops over the count returned by 0x585348B0, copies 0x47 DWORDs from each record returned by 0x58534760, transforms the copied data through 0x58521FF0 and 0x587B4180, updates two per-entry scene blocks through callback 0x58894308, and reattaches a selected object when the corresponding pointer is nonnull. It clamps a negative selected index at scene +0x24C to zero, refreshes the active record through callback 0x58894464, updates the selected scene block and copies a 16-bit per-entry value to +0x248.",
        "uncertainty": "The copied record format, role of global byte 0x5894733C, meanings of scene offsets and callbacks, and semantics of the selected 16-bit value are unknown. Ghidra's pseudocode leaves one loop-indexed attachment expression ambiguous; no live selection update or rendered frame was captured.",
    },
    "58534760": {
        "name_in_analysis": "FUN_58534760",
        "called_by": "Called by state-code-7 record updater 0x585341D0 at 0x5853424A for each record index.",
        "behavior": "Treats the receiver's first two DWORDs as the begin/end pointers for contiguous 0x11C-byte records. If the unsigned index is greater than or equal to (end - begin) / 0x11C, calls bounds/error helper 0x584F4D30; then returns begin + index * 0x11C.",
        "uncertainty": "The record format and whether the bounds/error helper returns, throws, or terminates are not named here. No malformed-index runtime case was exercised.",
    },
    "585348B0": {
        "name_in_analysis": "FUN_585348b0",
        "called_by": "Called by state-code-7 record updater 0x585341D0 at 0x58534206 to size its record loop; also called by scene methods 0x58533B00 and 0x58533D50.",
        "behavior": "Returns (receiver DWORD at +4 minus receiver DWORD at +0) divided by 0x11C, the same stride used by record accessor 0x58534760.",
        "uncertainty": "The receiver's container type, ownership, and semantic record type are unknown; the count is inferred from pointer difference and fixed stride in the mapped code.",
    },
    "58521FF0": {
        "name_in_analysis": "FUN_58521ff0",
        "called_by": "Called by state-code-7 updater 0x585341D0 at 0x58534265 with a local buffer; Ghidra also identifies callers in WinMain and several other client routines.",
        "behavior": "Establishes an exception frame, calls 0x58521D90, passes its explicit pointer argument to 0x584A9AD0, initializes a 24-byte local object through 0x5851FCE0, obtains a result from 0x584C5D40, passes the result and prior helper value to 0x584A9D30, restores the exception chain, and returns the result.",
        "uncertainty": "The runtime object and data-format semantics of these helper calls are unresolved. Ghidra marks stack-cookie handling as an injected security check; no runtime result was observed.",
    },
    "587B4180": {
        "name_in_analysis": "FUN_587b4180",
        "called_by": "Called by state-code-7 updater 0x585341D0 at 0x58534287 to initialize and copy a 0x20-byte per-record scene block; Ghidra also identifies callers in other installed-client routines.",
        "behavior": "Returns 0x80070057 when destination is null or byte count is zero. If source length is zero, writes zero to the first destination byte and returns zero. Otherwise it zeroes byteCount bytes through 0x5884CE10 and delegates the copy to 0x58740A70, returning that helper's result.",
        "uncertainty": "The helper's broader object/array contract and the semantic meaning of the state-7 record copied through it remain unknown. No invalid-argument or zero-length runtime case was exercised.",
    },
    "584C0DE0": {
        "name_in_analysis": "FUN_584c0de0",
        "called_by": "Called by ship-scene dispatcher 0x58531000 at 0x58531B39 in state code 2 when phase field +0x4853 equals 0x16 and the associated counter path reaches its terminal branch; Ghidra also identifies caller 0x584C0C30.",
        "behavior": "If receiver pointer +0x5F4 is null, allocates 0x54 bytes through 0x58831004, calls factory 0x58482320 with global 0x58960600 and pointer-table entry 0 from 0x58484B20, stores the result at +0x5F4, and calls 0x58485E80(0x7FF8). It then always calls 0x58485EE0 with its explicit byte argument and restores the exception chain.",
        "uncertainty": "The allocated object's type, global resource meaning, and semantics of calls 0x58485E80 and 0x58485EE0 are not established. The helper has another caller, so the state-2 interpretation applies only to the observed dispatcher callsite.",
    },
    "58484B20": {
        "name_in_analysis": "FUN_58484b20",
        "called_by": "Called by lazy child factory 0x584C0DE0 at 0x584C0E43 with index zero; Ghidra identifies many other array/table accessor callers.",
        "behavior": "Returns the pointer-table entry at receiver +0x18C plus index * 4 only when index is nonnegative, below the DWORD count at +0x164, and the table pointer is nonnull; otherwise returns null.",
        "uncertainty": "The receiver's concrete type, table element type, and ownership semantics are unresolved. This is static accessor behavior; callers' higher-level meanings vary.",
    },
    "587B5730": {
        "name_in_analysis": "FUN_587b5730",
        "called_by": "Called by ship-scene dispatcher 0x58531000 at 0x58531A59 in its state-code-2 branch; Ghidra also identifies another caller at 0x58757540.",
        "behavior": "Reads receiver +0x08, writes the explicit value there through 0x5849F480, then walks the circular child list at +0x3C. For each child whose flag bit 13 at +0x24 is set, it calls 0x587B52B0 with explicitValue - previousReceiverValue.",
        "uncertainty": "The field at +0x08, child flag meaning, and coordinate units are unnamed. The exact runtime effect of the recursive propagation was not observed.",
    },
    "58529610": {
        "name_in_analysis": "FUN_58529610",
        "called_by": "Called by ship-scene dispatcher 0x58531000 at 0x58531A77, 0x58531A84, and 0x58531A96 in state code 2; other callers also use it.",
        "behavior": "Returns the address of receiver field +0x2C.",
        "uncertainty": "The field's semantic name is unresolved; the state-2 branch dereferences the returned pointer and uses numeric thresholds before calling a setter.",
    },
    "58532AD0": {
        "name_in_analysis": "FUN_58532ad0",
        "called_by": "Called by ship-scene dispatcher 0x58531000 at 0x58531A6E in state code 2 when scene field +0x29 equals zero.",
        "behavior": "Writes zero to scene +0x98, +0x9C; writes 0x40000000 to +0xA4 and one to +0x70; then calls child-state helper 0x58485EE0 twice with zero.",
        "uncertainty": "The scene field roles and reason for the two child-state calls remain unknown. These writes align with the sentinel/counter fields processed by 0x58530EA0, but no runtime transition was observed.",
    },
    "5848C0B0": {
        "name_in_analysis": "FUN_5848c0b0",
        "called_by": "Listed by Ghidra among the direct callees of ship-scene dispatcher 0x58531000; the state-code-2 pseudocode uses its result as input to 0x587B5730.",
        "behavior": "Returns the DWORD at receiver offset +0x08.",
        "uncertainty": "Ghidra's call-reference list does not identify a dispatcher callsite for this getter, and the receiver type and field meaning are unknown.",
    },
    "5849F480": {
        "name_in_analysis": "FUN_5849f480",
        "called_by": "Called by recursive field updater 0x587B5730 to write the receiver's +0x08 field.",
        "behavior": "Stores its explicit value at receiver offset +0x08.",
        "uncertainty": "The receiver field's semantic meaning and value units are not identified.",
    },
    "587B52B0": {
        "name_in_analysis": "FUN_587b52b0",
        "called_by": "Called by recursive updater 0x587B5730 for flagged children; also recursively calls itself and has unrelated callers.",
        "behavior": "Calls 0x587B5520 on the receiver with the explicit delta, then walks the circular child list at +0x3C and recursively applies the same delta to children whose flag bit 13 at +0x24 is set.",
        "uncertainty": "The propagated field's semantic name, flag meaning, and intended hierarchy behavior remain unresolved; no runtime propagation was observed.",
    },
    "587B5520": {
        "name_in_analysis": "FUN_587b5520",
        "called_by": "Called by recursive updater 0x587B52B0 to apply a delta to receiver +0x08.",
        "behavior": "Adds the explicit signed value to the receiver DWORD at +0x08.",
        "uncertainty": "The receiver field's semantic meaning and units are unknown.",
    },
    "584BF150": {
        "name_in_analysis": "FUN_584bf150",
        "called_by": "Direct call from ship-scene dispatcher 0x58531000 at 0x58531AE2 in state code 2 after the adjusted value reaches or exceeds 0x100; the dispatcher passes five zero DWORDs and 0x40.",
        "behavior": "Runs base initialization through 0x587B4990, installs vtable address 0x58895A68, writes a 0x5A0-byte literal descriptor block at object +0x14, allocates and stores a child through 0x587803B0 at +0x5F0, then loops over six descriptor groups and 40 entries per group. Matching entries allocate child records through 0x58482320 and table accessor 0x58484B20, apply effect/color setters 0x587B55B0/0x587B5540 for two descriptor cases, and may call 0x58485F90. Finally it clears selected packed flag bits at +0x24, sets state code 5, and returns the object.",
        "uncertainty": "The descriptor schema, created object types, resource IDs, meanings of group/entry bytes and setter values, and user-visible role of this component are not established. The 0x5A0-byte table is recovered as literal initialization data; no runtime construction or rendered output was observed.",
    },
    "5884CE10": {
        "name_in_analysis": "FUN_5884ce10",
        "called_by": "Direct call from constructor 0x584BF150 at 0x584C01CF while initializing its 0x5A0-byte descriptor block.",
        "behavior": "Fills a destination range with the low byte of the requested value and returns the destination. The zero-length path returns without writing; runtime CPU-feature branches select the fill implementation.",
        "uncertainty": "Ghidra pseudocode supports byte-fill semantics, but exact CPU-feature branch conditions and vectorized write behavior are only captured by the byte-matched machine code. Other callers are outside this subsystem slice.",
    },
    "5884C890": {
        "name_in_analysis": "FUN_5884c890",
        "called_by": "Direct call from constructor 0x584BF150 at 0x584C01ED while copying the descriptor literal into its object.",
        "behavior": "Implements overlap-aware memory copying: it uses a forward path for non-overlapping or lower-address destinations and a backward path when the destination begins inside the source range. Runtime CPU-feature branches select optimized copy paths.",
        "uncertainty": "The Ghidra function body has an incomplete boundary: it ends at 0x5884CDC2, cutting the final `mov` instruction. The mapped bytes and decompiler return label show the epilogue continuing through `ret` at 0x5884CDC6, so the inventory records the full 1,335-byte linear code extent ending at 0x5884CDC7. The optimization branches are byte-matched but have not been benchmarked or exercised independently.",
    },
    "58831004": {
        "name_in_analysis": "FUN_58831004",
        "called_by": "Direct calls from constructor 0x584BF150 at 0x584C01FA, 0x584C030F, and 0x584C0474 for child/object allocations.",
        "behavior": "Retries allocation through 0x58859610, asking 0x58864670 to make progress after a failed attempt. If progress fails, finite-size requests enter 0x5882E770; the -1 sentinel path constructs an alternate exception object through 0x58487710 and calls nonreturning exception helper 0x5884D3E5.",
        "uncertainty": "The callback that signals allocation progress and the semantic type represented by the -1 sentinel are not established. The mapped control flow is exact; no allocation-failure scenario was induced at runtime.",
    },
    "58859610": {
        "name_in_analysis": "FUN_58859610",
        "called_by": "Direct retry-loop call from allocation wrapper 0x58831004.",
        "behavior": "An 11-byte forwarding thunk that preserves the size argument and jumps to allocator core 0x5886CED0.",
        "uncertainty": "The allocator core delegates the actual heap operation through a global function pointer; the platform allocator implementation behind that pointer is not recovered here.",
    },
    "58864670": {
        "name_in_analysis": "FUN_58864670",
        "called_by": "Called by allocation wrapper 0x58831004 after an allocation attempt fails; allocator core 0x5886CED0 also calls it while a retry callback is registered.",
        "behavior": "Resolves a callback through 0x588646D0. If present, invokes it with the requested size and returns a booleanized nonzero result; if absent, returns zero.",
        "uncertainty": "The callback's registration source and real-world operation (for example, reclaiming memory) are not named by Ghidra. The indirect invocation and return condition are visible in the mapped instructions.",
    },
    "5882E770": {
        "name_in_analysis": "FUN_5882e770",
        "called_by": "Allocation wrapper 0x58831004 on failure for a request whose size is not the -1 sentinel.",
        "behavior": "Constructs an exception object with 0x5882E666 and passes it with type metadata at 0x588EC484 to the nonreturning exception helper 0x5884D3E5.",
        "uncertainty": "Ghidra does not provide the source-level exception class name for the metadata at 0x588EC484. This path was not triggered in a live client.",
    },
    "58487710": {
        "name_in_analysis": "FUN_58487710",
        "called_by": "Allocation wrapper 0x58831004 only when the requested size equals -1, before entering 0x5884D3E5.",
        "behavior": "Initializes the supplied exception object through 0x58487680 using metadata at 0x58894D00, then writes vtable address 0x58894CF8 into its first field and returns the object.",
        "uncertainty": "The -1 sentinel's semantic meaning and the exception class associated with these vtable addresses are unknown.",
    },
    "5884D3E5": {
        "name_in_analysis": "FUN_5884d3e5",
        "called_by": "Nonreturning failure paths from 0x5882E770 and the -1 sentinel branch of 0x58831004.",
        "behavior": "Runs an optional cleanup callback from the exception object, selects an MSVC C++ exception code from its descriptor flags, and calls the runtime RaiseException entry at 0x5889439C with code 0xE06D7363 and three parameters.",
        "uncertainty": "The exact descriptor classes selected by 0x19930520 and 0x01994000 remain unnamed. Ghidra identifies a cleanup vtable call but does not establish the object's concrete type.",
    },
    "5886CED0": {
        "name_in_analysis": "FUN_5886ced0",
        "called_by": "Allocator core reached by forwarding thunk 0x58859610.",
        "behavior": "Normalizes a zero-byte request to one byte, calls the configured heap function at 0x5889415C using heap handle 0x58969C70, and on failure retries while the global recovery gate and callback 0x58864670 report progress. If all attempts fail, stores error value 12 through the per-thread error pointer returned by 0x5886246F and returns zero.",
        "uncertainty": "The heap function and callback are indirect globals; the concrete allocator and memory-recovery action are unresolved. The TLS error-slot accessor's fallback behavior is mapped separately but not runtime-tested.",
    },
    "58879A60": {
        "name_in_analysis": "FUN_58879a60",
        "called_by": "Allocator core 0x5886CED0 uses its result as the retry gate before calling progress callback 0x58864670.",
        "behavior": "Returns global value at 0x58969C7C.",
        "uncertainty": "The global's initialization, type, and meaning are unknown; Ghidra only establishes that it gates the allocator retry loop.",
    },
    "58879A70": {
        "name_in_analysis": "FUN_58879a70",
        "called_by": "Writes the retry-mode global read by 0x58879A60 and used by allocator core 0x5886CED0.",
        "behavior": "Returns the previous mode; accepts only 0 or 1, writes invalid-parameter error 22 and calls 0x58850FAB for other values, and uses locked writes for valid updates to global 0x58969C7C.",
        "uncertainty": "No direct caller was identified in this analysis. Its role as an allocator retry-mode setter is inferred from the validated 0/1 input and the allocation retry check, not from an exported source-level name.",
    },
    "588646B0": {
        "name_in_analysis": "FUN_588646b0",
        "called_by": "Writes the global value read and transformed by callback resolver 0x588646D0.",
        "behavior": "Stores its explicit DWORD argument in global 0x5896978C and returns.",
        "uncertainty": "The stored value is consumed by the allocator retry callback path, but the exact encoding and source-level registration API are not established. Ghidra reports no direct callsites.",
    },
    "5886246F": {
        "name_in_analysis": "FUN_5886246f",
        "called_by": "Allocator core 0x5886CED0 obtains this pointer before storing error value 12 after final failure.",
        "behavior": "Calls 0x58868BF1 to resolve per-thread runtime data and returns either its address plus 0x10 or fallback storage at 0x58907420.",
        "uncertainty": "The exact CRT field name and the runtime condition selecting fallback storage are not recovered.",
    },
    "58868BF1": {
        "name_in_analysis": "FUN_58868bf1",
        "called_by": "Called by error-slot accessor 0x5886246F.",
        "behavior": "Resolves a thread runtime-data block using TLS index 0x58907458, selects between two TLS lookup paths based on global flag 0x5896997C, and falls back through helper 0x58868A69 when the indexed lookup is unavailable.",
        "uncertainty": "The TLS API wrappers, initialization of the index/flag, and exact runtime block layout are not semantically named. The +0x10 use by 0x5886246F is directly visible.",
    },
    "588646D0": {
        "name_in_analysis": "FUN_588646d0",
        "called_by": "Callback resolver used by allocator progress function 0x58864670.",
        "behavior": "Initializes and reads callback-related runtime state using globals at 0x5896978C and 0x588ED2E0, with cleanup/registration helpers, then returns the resolved callback value.",
        "uncertainty": "The exact callback object, synchronization semantics, and roles of the runtime helpers 0x58832760, 0x58863C1C, 0x5885786C, and 0x5886471E are unresolved.",
    },
    "587AABC0": {
        "name_in_analysis": "FUN_587aabc0",
        "called_by": "Listed by Ghidra as the guard-check callee in indirect callback paths 0x58864670 and 0x5884D3E5.",
        "behavior": "Returns immediately without modifying state.",
        "uncertainty": "Its role in the legacy runtime's indirect-call guard remains unclear; the observed native function body is a bare return.",
    },
    "5882E666": {
        "name_in_analysis": "FUN_5882e666",
        "called_by": "Object initializer called by allocation-failure handler 0x5882E770.",
        "behavior": "Writes vtable pointer 0x58894CEC to object offset 0, clears offsets +4 and +8, then restores the metadata pointer 0x588BE8CC at +4 and returns the object.",
        "uncertainty": "The concrete exception class and semantics of its fields are not named in the mapped analysis.",
    },
    "58487680": {
        "name_in_analysis": "FUN_58487680",
        "called_by": "Called by alternate allocation-failure object constructor 0x58487710.",
        "behavior": "Calls 0x58487780 on the secondary object pointer with value 1, writes vtable address point 0x58894CEC to its receiver's first field, and returns the receiver.",
        "uncertainty": "The constructor/base-class relationship and exception type represented by these metadata pointers remain unresolved.",
    },
    "58487780": {
        "name_in_analysis": "FUN_58487780",
        "called_by": "Base object initializer called by 0x58487680.",
        "behavior": "Writes vtable pointer 0x58894CCC at object offset 0, clears offsets +4 and +8, stores its explicit metadata argument at +4, and returns the object.",
        "uncertainty": "The object and metadata types are inferred from constructor placement and the neighboring failure path; no runtime exception was captured.",
    },
    "588647D0": {
        "name_in_analysis": "FUN_588647d0",
        "called_by": "Math-operation callers include 0x5887C480 and 0x588788D0; it directly delegates classification to 0x58864910.",
        "behavior": "Classifies the supplied floating-point result, constructs an exception record through 0x58864C70 on error, derives a math exception category from operation flags, then either stores domain/range error values 33/34 or dispatches the configured math-error callback through 0x58864FE0. It returns the selected floating-point result.",
        "uncertainty": "The complete operation-code and argument-field mapping is not named, and the callback was not exercised in a live client. This is a CRT-style math error path based on its exception/status logic and callback structure.",
    },
    "58864910": {
        "name_in_analysis": "FUN_58864910",
        "called_by": "Floating-point result classifier called by 0x588647D0 and 0x588788D0.",
        "behavior": "Examines status/operation bits and a double result, normalizes subnormal values through 0x58859720, applies rounding-sensitive result adjustments using 0x588721E0, and invokes 0x58870160 when exception flags must be raised. It returns whether the operation completed without a classified error.",
        "uncertainty": "The caller flag names, exact IEEE exception names for each bit, and precise rounding behavior have not been runtime-tested across processor modes.",
    },
    "58864C70": {
        "name_in_analysis": "FUN_58864c70",
        "called_by": "Exception-record builder called by 0x588647D0, and through forwarding wrapper 0x58864C40.",
        "behavior": "Maps floating-point operation and status bits to NTSTATUS values in the 0xC000008E-0xC0000093 range, records input/output values and control/status words, calls the RaiseException entry at 0x5889439C, then merges the returned status into the caller's floating-point state.",
        "uncertainty": "The exact exception-record structure field names and each NTSTATUS-to-operation mapping remain unnamed. RaiseException was identified from the mapped import pointer and exception-status arguments.",
    },
    "58864FE0": {
        "name_in_analysis": "FUN_58864fe0",
        "called_by": "Optional callback dispatch path selected by 0x588647D0 when a math-error callback is registered.",
        "behavior": "Searches 29 operation entries beginning at 0x588C4A30, builds the callback's exception structure, and invokes 0x58873EE0 when a matching handler exists; otherwise it sets the relevant thread error value and returns the original result.",
        "uncertainty": "The table's operator names and public `_exception` field meanings are not recovered. The callback path is static evidence only.",
    },
    "58864C40": {
        "name_in_analysis": "FUN_58864c40",
        "called_by": "Called by 0x588788D0; Ghidra shows it forwarding its six arguments to 0x58864C70 with a final zero mode.",
        "behavior": "A 35-byte adapter that forwards the exception arguments to 0x58864C70 and supplies mode zero.",
        "uncertainty": "The caller's higher-level math operation and reason for selecting mode zero are not identified.",
    },
    "58873ED0": {
        "name_in_analysis": "FUN_58873ed0",
        "called_by": "Writer of the global callback value read by 0x58873EB0 and 0x58873EE0.",
        "behavior": "Stores its explicit value at global 0x58969C40 and returns.",
        "uncertainty": "Ghidra found no direct callsite; its role as a math-error callback setter is inferred from the corresponding global reader and invoker.",
    },
    "58873EB0": {
        "name_in_analysis": "FUN_58873eb0",
        "called_by": "Callback-presence query in 0x588647D0 and other math-operation handlers.",
        "behavior": "Decodes the guarded global value at 0x58969C40 and returns whether it is nonzero.",
        "uncertainty": "The callback's source-level type and caller ownership are not named.",
    },
    "58873EE0": {
        "name_in_analysis": "FUN_58873ee0",
        "called_by": "Callback invoker used by 0x58864FE0 and other math-operation paths.",
        "behavior": "Decodes the guarded callback value at 0x58969C40, returns zero if absent, otherwise passes the supplied exception structure through the indirect-call guard and invokes the callback.",
        "uncertainty": "The callback signature is only partially inferred from the callsite; no handler registration or invocation was captured at runtime.",
    },
    "58870110": {
        "name_in_analysis": "FUN_58870110",
        "called_by": "Called by exception-record builder 0x58864C70.",
        "behavior": "Reads and returns the x87 floating-point status word.",
        "uncertainty": "The Ghidra input-register annotation does not expose the underlying x87 instruction in pseudocode; identity is established by native bytes and caller context.",
    },
    "58870130": {
        "name_in_analysis": "FUN_58870130",
        "called_by": "Called by math wrapper 0x588647D0 and callback/result cleanup paths including 0x58864FE0.",
        "behavior": "Reads and returns the x87 floating-point control word.",
        "uncertainty": "The control word's role at each callsite and interaction with MXCSR are not validated on hardware.",
    },
    "58870160": {
        "name_in_analysis": "FUN_58870160",
        "called_by": "Called by classifier 0x58864910 when its selected floating-point exception flags are nonzero.",
        "behavior": "Runs a 91-byte x87 status/exception helper; Ghidra reduces the body to a return, so its hardware-state effects are represented here only by the exact mapped bytes and direct caller condition.",
        "uncertainty": "The effects on x87 pending exception flags are not expressible in the recovered pseudocode and have not been validated on live hardware.",
    },
    "588701C0": {
        "name_in_analysis": "FUN_588701c0",
        "called_by": "Called by exception builder 0x58864C70 to obtain an x87 status value.",
        "behavior": "Reads and returns the x87 floating-point status word.",
        "uncertainty": "Its distinction from sibling status accessor 0x58870110 is not named; both are independently byte-matched.",
    },
    "588721E0": {
        "name_in_analysis": "FUN_588721e0",
        "called_by": "Called by classifier 0x58864910 while adjusting subnormal/rounded results.",
        "behavior": "Queries the combined floating-point environment through 0x58873F50 and passes the result to 0x58873F20 for a rounding-field consistency check.",
        "uncertainty": "Ghidra shows the consistency helper's result discarded; the wrapper's required side effect or optimization intent is unclear.",
    },
    "58873F20": {
        "name_in_analysis": "FUN_58873f20",
        "called_by": "Rounding-state helper 0x588721E0.",
        "behavior": "Extracts two rounding-mode bit fields from its argument, returns the field when they agree, and returns 0xFFFFFFFF when they differ.",
        "uncertainty": "The x87/MXCSR bit-field names are inferred from the adjacent environment reader; no processor-mode comparison was run.",
    },
    "58873F50": {
        "name_in_analysis": "FUN_58873f50",
        "called_by": "Floating-point environment reader 0x588721E0 and helper 0x5887C0B0.",
        "behavior": "Combines x87 control-word fields with MXCSR fields when the processor-support global is set, mapping rounding and exception-mask bits into a single runtime value.",
        "uncertainty": "The support global's initialization and every bit's public control-word name are unknown; no x87/SSE mode matrix was executed.",
    },
    "58859720": {
        "name_in_analysis": "FUN_58859720",
        "called_by": "Called by 0x58864910 to normalize a subnormal double before its error/rounding analysis.",
        "behavior": "Normalizes a subnormal 64-bit double using helper 0x5887D0C0, returns an extended-precision value, and writes its adjusted binary exponent through the third argument. Zero maps to exponent zero and floating zero.",
        "uncertainty": "The exact x87 extended-precision rounding and exception behavior was not compared against a live numeric test corpus.",
    },
    "5887D0C0": {
        "name_in_analysis": "FUN_5887d0c0",
        "called_by": "64-bit normalization helper called by 0x58859720 and several other numeric routines.",
        "behavior": "Implements the mapped 64-bit variable-shift path for counts below 64 and returns zero for larger counts.",
        "uncertainty": "Ghidra's recovered input-register model leaves the full 64-bit operand split across implicit registers; exact ABI meaning is preserved by byte matching rather than reconstructed C types.",
    },
    "58531000": {
        "name_in_analysis": "FUN_58531000",
        "called_by": "Virtual slot +0x0C in the ship-scene vtable address point 0x588A6FD8 installed by constructor 0x58525B10.",
        "behavior": "A 4,095-byte scene update dispatcher. When the update-enable bit at +0x24 is set, it processes several encoded scene-state branches, updates stage and counter fields, starts transition 0x5852D160 on one parity branch of state 1, invokes other screen/resource helpers on additional states, calls child/update helper 0x58530EA0, then dispatches virtual update slot +0x0C through the circular child list at +0x3C.",
        "uncertainty": "The scene-state codes, offsets, parity counter, resource IDs, and most called helpers do not have established semantic names. Static vtable and call evidence verifies control flow; it does not show which branch occurs in a live client or establish displayed pixels.",
    },
    "587B6530": {
        "name_in_analysis": "FUN_587b6530",
        "called_by": "The renderer adapter vtable address point 0x588BDC5C has slot +0x08 pointing to this function; text control draw callback 0x587B6280 dispatches through that slot.",
        "behavior": "When text and the supplied renderer/resource are non-null, acquires the drawing surface through global renderer object 0x584869C0 and its slot +0x44. It applies callback-configured state, clips the requested vertical bounds to the supplied rectangle, chooses format 4 or 6 from the mode argument, and forwards one or two text draws through 0x587B3FD0 before releasing the surface through slot +0x68. In mode zero, the optional second draw is offset by one pixel in both axes.",
        "uncertainty": "The meanings of callback slots at 0x588940A0/84/A8/C4, argument flags, selected format values, and optional offset draw's visual role are unresolved. Argument flow and clipping conditions are directly visible in Ghidra; no rendered frame was captured.",
    },
    "587B3FD0": {
        "name_in_analysis": "FUN_587b3fd0",
        "called_by": "Text drawing adapter 0x587B6530 calls it for the main draw and, in one mode, an offset draw.",
        "behavior": "Obtains a converted string buffer and its character count from 0x587B45C0/0x587B4550, invokes the registered draw callback at 0x588940B0 with the destination surface, coordinates, mode, rectangle, text resource, converted buffer, and count, then releases the temporary conversion buffer through a Core thunk.",
        "uncertainty": "The exact encoding, callback ABI semantics, and the final argument's meaning are not established by this Core call path. The callback receives the observed values in the mapped order; its implementation is outside this function and supplied through runtime registration.",
    },
    "587B4550": {
        "name_in_analysis": "FUN_587b4550",
        "called_by": "String conversion helper 0x587B3FD0 uses it to allocate/fill its temporary buffer; text-format helper 0x587B3300 also calls it.",
        "behavior": "If no character count was supplied, asks callback 0x5889429C to measure the string. It allocates a temporary buffer sized at twice the character count, then calls the same callback with the active graphics context and string to populate the buffer.",
        "uncertainty": "The callback's text encoding, byte-count convention, and graphics-context semantics are unresolved. Multiplication, allocation, and callback argument order are directly visible; the buffer's contents are not inspected at runtime.",
    },
    "587B45C0": {
        "name_in_analysis": "FUN_587b45c0",
        "called_by": "String conversion helper 0x587B3FD0 and fallback sizing path in 0x587B4550.",
        "behavior": "Calls registered callback 0x5889429C with the active graphics-context global and the supplied string to obtain a DWORD result, forwarding zeroed optional arguments and the supplied context value.",
        "uncertainty": "The callback contract and result meaning are unknown; this helper's argument forwarding and return are directly established by Ghidra.",
    },
    "58530EA0": {
        "name_in_analysis": "FUN_58530ea0",
        "called_by": "Called by scene update callback 0x58531000 at 0x58531F5C before the circular child-update traversal.",
        "behavior": "When scene fields +0xA4 and +0xA0 both equal 0x40000000, increments +0x9C. If object +0x88 exists, calls its vtable slot +0x0C with a value based on global 0x58962064 minus 100 times the counter. Once the counter exceeds 0x4F, clears +0xA0 and calls object vtable slot +0x08.",
        "uncertainty": "The two sentinel fields, object type, slot +0x0C calling convention, and meaning/units of the global coordinate remain unknown. No live object motion or visual result was observed.",
    },
    "5857FE50": {
        "name_in_analysis": "FUN_5857fe50",
        "called_by": "Ghidra records a direct call from `0x5856E240` at `0x5856E2F1`; this constructor calls the resource initializer `0x58539D50` at `0x5857FECF`.",
        "behavior": "Initializes a scene base with six zero values and `0x40`, installs vtable address point `0x588AA82C`, initializes a temporary child/context object, then calls `0x58539D50` with global `0x589056B4`. It creates another child via `0x585367B0`, stores it at receiver offset `+0x60`, and calls that child's virtual slot `+0x04`.",
        "uncertainty": "The scene class, temporary object's role, child type, and virtual-slot semantics are not named. The constructor sequence, vtable, field write, and call arguments are directly visible in Ghidra.",
    },
    "58539D50": {
        "name_in_analysis": "FUN_58539d50",
        "called_by": "Scene constructor `0x5857FE50` calls it with global `0x589056B4` at `0x5857FECF`.",
        "behavior": "Stores its argument in global `0x589056B4`, resets related state, and initializes a group of scene resources. The Ghidra call sequence repeatedly invokes factory callback `0x588940D4` with resource IDs including `10`, `11`, `0x10`, `0x14`, and `0x18`, plus mapped dimensions/flags and label pointers; the returned objects are wrapped by `0x587B60F0` and stored in scene globals. It also initializes repeated child/resource arrays and additional scene state.",
        "uncertainty": "Factory callback implementation, resource-ID meanings, label semantics, child-object types, and rendered composition are unresolved. The callback inputs, wrapper, global destinations, loop bounds, and direct call sequence are visible in Ghidra; this is a static constructor trace without a frame capture.",
    },
    "5853ACB0": {
        "name_in_analysis": "FUN_5853acb0",
        "called_by": "Scene constructor `0x5857FE50` calls it with a temporary object at `0x5857FEC1` before resource setup `0x58539D50`.",
        "behavior": "Forwards its argument to `0x587BD5D0` and returns zero.",
        "uncertainty": "The helper's object type and initializer effects are not recovered; the single call and return value are directly visible in Ghidra.",
    },
    "5853ACD0": {
        "name_in_analysis": "FUN_5853acd0",
        "called_by": "Resource screen setup `0x58539D50` calls it immediately after `0x5853ADA0(2)`.",
        "behavior": "Allocates and stores an object returned by `0x584F1470` at global `0x589620A4`, then loads the mapped path `.\\spr\\Warning.spr` through `0x587803B0` and stores the resulting object at `0x589606DC`.",
        "uncertainty": "The first object's type, the loaded sprite's role in the screen, and its visible appearance are not established by these calls. The allocation, globals, helper calls, and path string are directly visible in Ghidra and mapped data.",
    },
    "5853ADA0": {
        "name_in_analysis": "FUN_5853ada0",
        "called_by": "Resource screen setup `0x58539D50` calls it with argument `2` at `0x58539DA5`.",
        "behavior": "Uses registered callbacks with the mapped registry path `SOFTWARE\\FleetMission\\NAVYFIELDClient\\Log` and value strings `ID`, `PlayerID`, `pass`, and `PS`. Argument zero reads selected values and prepares writes; argument one writes selected values. The observed screen-setup call passes `2`, which falls through those mode branches and proceeds to the final cleanup callback.",
        "uncertainty": "The registry callback implementations and exact value types are not identified; the function's names are inferred from the literal path/value strings. The caller's argument `2` and the function's branch behavior are directly visible in Ghidra.",
    },
    "5856E240": {
        "name_in_analysis": "FUN_5856e240",
        "called_by": "Window/bootstrap setup routine `0x5882DD60` calls it after creating and storing its shared context objects, then runs the newly created object's virtual method at `+0x04`.",
        "behavior": "Initializes globals for the active scene context, calls registered startup callbacks, allocates and initializes a `0x74`-byte object through `0x5856DDB0`, allocates a `0x64`-byte scene through constructor `0x5857FE50`, stores it in global `0x58962228`, writes global context `0x58965F1C` to a registered interface, and calls three setup helpers on the scene before invoking its virtual slot `+0x04`.",
        "uncertainty": "The allocated object types, callback contracts, meaning of the globals, and virtual method behavior are not named. The call order, allocation sizes, global stores, and virtual dispatch are Ghidra observations; the `scene` label follows the constructor's known resource initialization path.",
    },
    "5882DD60": {
        "name_in_analysis": "FUN_5882dd60",
        "called_by": "`WinMain` calls this routine from both branches selected by `0x584C55A0`: each branch first calls `0x58521FF0` with a different mapped string and window geometry. Ghidra records the two call sites at `0x5856E783` and `0x5856E816`.",
        "behavior": "Builds shared window/client context around registered runtime callbacks, optionally prepares a callback structure, derives adjusted geometry for modes other than 10, calls the registered window/context factory, and on success creates and stores three helper/context objects before calling `0x5856E240` to install and initialize the resource scene. The success path stores the main context at `0x58965F1C` and a large `0x40220`-byte allocated object at `0x589660D0`.",
        "uncertainty": "The callback implementations and the types/roles of the allocated objects are outside this Core function. `WinMain`'s decompiled call expression supplies four apparent arguments while this function is decompiled with eleven parameters, so parameter/register mapping and mode-specific geometry semantics remain unresolved; no UI frame or interaction was captured.",
    },
    "5882E060": {
        "name_in_analysis": "FUN_5882e060",
        "called_by": "`WinMain` calls this function at `0x5856E88F` after `0x5882DD60` succeeds, the registered context callbacks run, and startup helpers `0x58502810` and `0x585022F0` complete.",
        "behavior": "Runs the client's main timer and message loop. It first requires globals `0x58965F74` and `0x58965F78`, otherwise calls cleanup helper `0x5882DBD0` and returns zero. The loop compares elapsed values returned by callback `0x58894524` against global threshold `0x58905FC0`, conditionally runs registered update/render helpers, polls and removes queued events through callbacks `0x58894478`, `0x58894450`, and `0x58894474`, then dispatches selected event-code ranges through a registered callback or virtual slot `+0x10`. Event code `0x462` is routed to `0x5882D710` when global `0x589660D0` is set; late loop iterations call callback `0x58894240` with value 1.",
        "uncertainty": "The callback implementations, event structure layout, event-code symbolic meanings, timer units, dispatch-object type, and cleanup contract are not recovered. The numeric branches, global checks, callback order, dispatch slots, and return paths are Ghidra observations; the labels 'timer' and 'message loop' describe the repeated time sampling and queued-event dispatch, not a runtime API capture.",
    },
    "5882DBD0": {
        "name_in_analysis": "FUN_5882dbd0",
        "called_by": "Main loop `0x5882E060` calls this routine before returning from both the missing-context path (`0x5882E40A`) and the event-poll termination path (`0x5882E460`). It is also called from setup callback `0x5882DA20` at `0x5882DB18`.",
        "behavior": "Clears dispatch globals `0x589660C4`, `0x589660C8`, and `0x589660CC`, then calls Core helper `0x5856E0D0`. It releases non-null objects in globals `0x589660D0`, `0x58965F78`, and `0x58965F74` through their first virtual slot with argument 1, clearing each global. It then invokes registered callback `0x58894484`, zero-initializes a `0x94`-byte local record through `0x5884CE10`, sets its first DWORD to `0x94`, and passes it to callback `0x58894134`; if the resulting local status is 2, it calls `0x588944C0` with global context `0x58965F1C`.",
        "uncertainty": "The released object types and virtual-slot argument semantics, callback contracts, local record schema, and meaning of status 2 are unknown. The teardown-shaped caller paths, global resets, virtual dispatches, record size, and conditional callback are direct Ghidra observations; the `cleanup` label is based on those effects and its call sites.",
    },
    "5856E0D0": {
        "name_in_analysis": "FUN_5856e0d0",
        "called_by": "Exit/setup cleanup routine `0x5882DBD0` calls it at `0x5882DC01`.",
        "behavior": "Runs once while global guard `0x5896222C` is zero. It releases two stored objects through virtual slot `+0x08`, calls helpers `0x585008C0`, `0x58500D90`, `0x585008C0`, `0x58500DB0`, and `0x58857B5A(0)`, writes `0x41` and zero to globals `0x589604E0` and `0x589604E1`, sets the guard, releases globals `0x58965F24` and `0x58962228` through virtual slot zero with argument 1, then calls registered callback `0x58894468(0)`.",
        "uncertainty": "The two object types, helper side effects, virtual-slot argument meanings, state bytes, and final callback contract are unresolved. The guard, call sequence, global writes, releases, and sole direct caller are Ghidra observations; identifying this as scene/client cleanup follows its enclosing caller and the globals released.",
    },
    "5882DA20": {
        "name_in_analysis": "FUN_5882da20",
        "called_by": "Window/context setup `0x5882DD60` places this function pointer in a callback record and submits it through registered callback `0x58894438` at `0x5882DDE7`.",
        "behavior": "Dispatches on its second argument. Code 2 calls teardown `0x5882DBD0`; code 3 queries coordinates through callback `0x588944B8` and stores adjusted values via `0x5882E530`; code `0x10` forwards a local event record through stored object's virtual slot `+0x10`; code `0x1C` invokes callback `0x58894448` and, when global `0x58965F74` is nonzero, calls `0x587BD560`; code `0x20` calls callback `0x588944B4(0)`. All cases then call generic handler `0x5856E040`; a nonzero return invokes callback `0x58894448` with the original four arguments.",
        "uncertainty": "The registered callback contracts, exact message/event ABI, coordinate meanings, stored object type, and `0x587BD560` receiver identity are unresolved. The dispatch constants, branch conditions, helper calls, and callback order are Ghidra observations. Calling it a window-message procedure is supported by its installation in the setup callback record and message-like codes, but no native window API trace or runtime event log was captured.",
    },
    "5882E530": {
        "name_in_analysis": "FUN_5882e530",
        "called_by": "Window callback `0x5882DA20` invokes it for event code 3 after obtaining two values through callback `0x588944B8`.",
        "behavior": "Stores its two supplied DWORD values at receiver offsets `+0x58` and `+0x5C`.",
        "uncertainty": "The receiver class and stored fields' meanings are not named. The two writes and caller's value source are directly visible in Ghidra.",
    },
    "5856E040": {
        "name_in_analysis": "FUN_5856e040",
        "called_by": "Window callback `0x5882DA20` invokes it after its event-specific switch for every input code.",
        "behavior": "Returns 1 by default. For input code 1 it invokes callback `0x588944BC` with the first argument and value 1. For code 7 it obtains a 16-byte local record through callback `0x588944B8` and passes it to `0x588944B0`. For code `0x112`, it returns 0 when the third argument masked with `0xFFF0` equals `0xF100`.",
        "uncertainty": "The callback meanings, local record schema, and symbolic meanings of the numeric event and command values are unresolved. Conditions, arguments, callback order, and return values follow directly from Ghidra control flow.",
    },
    "587BD560": {
        "name_in_analysis": "FUN_587bd560",
        "called_by": "Window callback `0x5882DA20` invokes it for code `0x1C` when global `0x58965F74` is nonzero; Ghidra also records a caller at `0x587BCFD9`.",
        "behavior": "Checks receiver fields at offsets `+0x50`, `+0x68`, and `+0x6C`, calling `0x587C8930` once for each nonzero field.",
        "uncertainty": "The receiver type, field ownership, and deallocation/helper semantics are unknown. The three offsets, independent nonzero tests, and call count are direct Ghidra observations; the receiver passed at the window callback call site is not explicit in the decompiler output.",
    },
}


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--mark-verified", action="store_true",
                        help="record byte identity after the local verifier passes")
    args = parser.parse_args()

    inventory_path = ROOT / "config/NF2_2026/core-functions.tsv"
    with inventory_path.open(encoding="utf-8", newline="") as stream:
        inventory = {row["address"].upper(): row for row in csv.DictReader(stream, delimiter="\t")}
    manifest_path = ROOT / "reports/unpacked-client/manifest.json"
    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    module = next(item for item in manifest["modules"] if item["name"] == "Core.dll")
    original = Path(module["path"])
    if digest(original) != CORE_SHA256:
        raise ValueError(f"Installed Core.dll does not match pinned build: {original}")
    capture = ROOT / "reports/unpacked-client/Core.mapped.bin"
    relocation_path = ROOT / "var/current-core-relocations.json"
    relocations = json.loads(relocation_path.read_text(encoding="utf-8"))
    old_config = json.loads((ROOT / "config/NF2_2062/client-verifications.json").read_text(encoding="utf-8"))

    output = ROOT / "config/NF2_2026/core-verifications.json"
    previous_addresses = []
    if output.exists():
        previous = json.loads(output.read_text(encoding="utf-8"))
        previous_addresses = [item["address"] for item in previous.get("matches", [])]
    ordered_addresses = [address for address in previous_addresses if address in ADDRESSES]
    ordered_addresses.extend(address for address in ADDRESSES if address not in ordered_addresses)

    matches = []
    marker = "objdiff-3.8.0-byte-identical" if args.mark_verified else "candidate-not-yet-verified"
    for address in ordered_addresses:
        row = inventory[address]
        name = row["name"]
        source = f"src/client-current/Core/{name}.cpp"
        source_path = ROOT / source
        matches.append({
            "address": address,
            "name": name,
            "size": int(row["size"]),
            "symbol": "_" + name,
            "source": source,
            "source_sha256": digest(source_path),
            "verified_by": marker,
            "flags": ["/O2", "/GX-", "/Zm200"],
            # A previous interrupted source-generation run can leave a valid
            # generated function source without committing its final relocation
            # report. Such functions with no relocation operands need an empty
            # audit list; the byte verifier remains the authority.
            "relocations": [dict(item, audit_only=True)
                            for item in relocations.get(address, [])],
            "evidence": EVIDENCE[address],
        })

    document = {
        "schema_version": 1,
        "component": "Core.dll",
        "image_base": f"{int(module['loaded_image_base']):08X}",
        "mapped_image": "reports/unpacked-client/Core.mapped.bin",
        "manifest": "reports/unpacked-client/manifest.json",
        "mapped_sha256": digest(capture),
        "original_sha256": CORE_SHA256,
        "compiler": {
            **old_config["compiler"],
            "family": "Microsoft Visual C++ 6.0 SP5 byte-emission toolchain; Core.dll original compiler unverified",
        },
        "matches": matches,
    }
    output.write_text(json.dumps(document, indent=2) + "\n", encoding="utf-8", newline="\n")
    print(f"Wrote {len(matches)} {marker} Core.dll records to {output.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
