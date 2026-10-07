// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A8E70 .. +0x22 bytes.
// Source symbol alias: FUN_587a8e70.
extern "C" __declspec(naked) void FUN_587a8e70() {
    __asm {
        // 0x587A8E70: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8E72: push esi
        __asm _emit 0x56
        // 0x587A8E73: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A8E75: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A8E78: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587A8E7B: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587A8E7E: mov dword ptr [esi + 0x40], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8E85: call 0x587a8c50
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8E8A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A8E8C: pop esi
        __asm _emit 0x5E
        // 0x587A8E8D: jmp 0x587a8d10
        __asm _emit 0xE9
        __asm _emit 0x7E
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
