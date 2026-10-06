// FUN_587B0910: store a packed two-bit record selector in child state +0x80.
// Both verified child builders derive the argument from the table at +0x274.
// The selector's meaning remains unresolved; the mapped instruction stream is exact.
// See docs/current-main-child-record-scalar-update.md.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B0910 .. +0xD bytes.
// Source symbol alias: FUN_587b0910.
extern "C" __declspec(naked) void FUN_587b0910() {
    __asm {
        // 0x587B0910: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B0914: mov dword ptr [ecx + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B091A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
