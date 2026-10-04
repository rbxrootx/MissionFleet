// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B6070 .. +0x11 bytes.
// Source symbol alias: FUN_587b6070.
extern "C" __declspec(naked) void FUN_587b6070() {
    __asm {
        // 0x587B6070: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B6074: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B6078: mov dword ptr [ecx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x587B607B: mov dword ptr [ecx + 0x78], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x78
        // 0x587B607E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
