// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 66 bytes in 1 exact ranges.
// Source symbol alias: FUN_587708e0.

// Ghidra body range 0x587708E0..0x58770922; 66 mapped bytes.
extern "C" __declspec(naked) void FUN_587708e0_segment_00() {
    __asm {
        // 0x587708E0: push esi
        __asm _emit 0x56
        // 0x587708E1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587708E3: mov cl, byte ptr [esi + 0x7a]
        __asm _emit 0x8A
        __asm _emit 0x4E
        __asm _emit 0x7A
        // 0x587708E6: mov byte ptr [esi + 0x78], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x00
        // 0x587708EA: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x587708ED: jne 0x587708f6
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587708EF: mov eax, 9
        __asm _emit 0xB8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587708F4: jmp 0x58770905
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x587708F6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587708F8: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587708FB: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x587708FE: lea eax, [eax*4 + 3]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770905: push ecx
        __asm _emit 0x51
        // 0x58770906: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58770908: mov byte ptr [esi + 0x79], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x79
        // 0x5877090B: call 0x5876f620
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58770910: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58770912: call 0x587706f0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58770917: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5877091A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5877091C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5877091F: pop esi
        __asm _emit 0x5E
        // 0x58770920: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
