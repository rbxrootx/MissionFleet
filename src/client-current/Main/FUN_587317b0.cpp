// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587317B0 .. +0x25 bytes.
// Source symbol alias: FUN_587317b0.
// Caller evidence: 0x587A90D0, 0x58866880, and 0x588D4300 (two sites).
// Mechanically this is a signed bounds check plus a nullable DWORD-table lookup:
// count at receiver +0x164, table pointer at +0x18C, one stack index argument.
// Receiver and table semantics are unresolved; see docs/current-main-indexed-pointer-lookup.md.
extern "C" __declspec(naked) void FUN_587317b0() {
    __asm {
        // 0x587317B0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587317B4: cmp dword ptr [ecx + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587317BA: jle 0x587317d0
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587317BC: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587317BE: jl 0x587317d0
        __asm _emit 0x7C
        __asm _emit 0x10
        // 0x587317C0: mov eax, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587317C6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587317C8: je 0x587317d0
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587317CA: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x587317CD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587317D0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587317D2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
