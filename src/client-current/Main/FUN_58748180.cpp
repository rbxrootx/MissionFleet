// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x58748180 .. +0x26 bytes.
// Source symbol alias: FUN_58748180.
extern "C" __declspec(naked) void FUN_58748180() {
    __asm {
        // 0x58748180: push esi
        __asm _emit 0x56
        // 0x58748181: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58748183: cmp dword ptr [esi + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x58748187: jb 0x58748195
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x58748189: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5874818C: push eax
        __asm _emit 0x50
        // 0x5874818D: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x4A
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748192: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58748195: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58748197: mov dword ptr [esi + 0x18], 0xf
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874819E: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587481A1: mov byte ptr [esi + 4], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587481A4: pop esi
        __asm _emit 0x5E
        // 0x587481A5: ret
        __asm _emit 0xC3
    }
}
