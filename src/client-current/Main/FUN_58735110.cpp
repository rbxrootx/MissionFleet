// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58735110 .. +0x25 bytes.
// Source symbol alias: FUN_58735110.
extern "C" __declspec(naked) void FUN_58735110() {
    __asm {
        // 0x58735110: push esi
        __asm _emit 0x56
        // 0x58735111: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735113: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58735115: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58735117: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5873511A: mov dword ptr [esi + 0x18], 0xf
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735121: push eax
        __asm _emit 0x50
        // 0x58735122: mov byte ptr [esi + 4], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58735125: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58735129: push eax
        __asm _emit 0x50
        // 0x5873512A: call 0x58734f20
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873512F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58735131: pop esi
        __asm _emit 0x5E
        // 0x58735132: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
