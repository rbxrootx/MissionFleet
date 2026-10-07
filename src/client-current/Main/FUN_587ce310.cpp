// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CE310 .. +0xA bytes.
// Source symbol alias: FUN_587ce310.
extern "C" __declspec(naked) void FUN_587ce310() {
    __asm {
        // 0x587CE310: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587CE314: mov dword ptr [ecx + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x587CE317: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
