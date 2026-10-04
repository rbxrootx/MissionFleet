// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B6090 .. +0xD bytes.
// Source symbol alias: FUN_587b6090.
extern "C" __declspec(naked) void FUN_587b6090() {
    __asm {
        // 0x587B6090: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587B6093: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587B6096: mov dword ptr [ecx + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x587B6099: mov dword ptr [ecx + 0x70], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x70
        // 0x587B609C: ret
        __asm _emit 0xC3
    }
}
