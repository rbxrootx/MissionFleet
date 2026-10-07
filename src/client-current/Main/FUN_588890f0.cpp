// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 40 bytes in 1 exact ranges.
// Source symbol alias: FUN_588890f0.

// Ghidra body range 0x588890F0..0x58889118; 40 mapped bytes.
extern "C" __declspec(naked) void FUN_588890f0_segment_00() {
    __asm {
        // 0x588890F0: push esi
        __asm _emit 0x56
        // 0x588890F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588890F3: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588890F6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588890F8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588890FB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588890FD: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58889100: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58889103: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58889106: push eax
        __asm _emit 0x50
        // 0x58889107: push edx
        __asm _emit 0x52
        // 0x58889108: call 0x587b67a0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xD6
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5888910D: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58889110: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58889112: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58889115: pop esi
        __asm _emit 0x5E
        // 0x58889116: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
