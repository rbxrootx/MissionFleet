// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 131 bytes in 1 exact ranges.
// Source symbol alias: FUN_5879dcf0.

// Ghidra body range 0x5879DCF0..0x5879DD73; 131 mapped bytes.
extern "C" __declspec(naked) void FUN_5879dcf0_segment_00() {
    __asm {
        // 0x5879DCF0: push esi
        __asm _emit 0x56
        // 0x5879DCF1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5879DCF3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5879DCF7: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DCFC: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5879DCFF: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DD04: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5879DD07: jne 0x5879dd6f
        __asm _emit 0x75
        __asm _emit 0x66
        // 0x5879DD09: push ebx
        __asm _emit 0x53
        // 0x5879DD0A: mov bx, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5879DD0F: movsx eax, bx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xC3
        // 0x5879DD12: add eax, -7
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xF9
        // 0x5879DD15: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5879DD18: ja 0x5879dd6e
        __asm _emit 0x77
        __asm _emit 0x54
        // 0x5879DD1A: push edi
        __asm _emit 0x57
        // 0x5879DD1B: jmp dword ptr [eax*4 + 0x5879dd74]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xDD
        __asm _emit 0x79
        __asm _emit 0x58
        // 0x5879DD22: mov edi, 4
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DD27: jmp 0x5879dd32
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5879DD29: mov edi, 0xf
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DD2E: jmp 0x5879dd32
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5879DD30: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5879DD32: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879DD34: call 0x5879d450
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879DD39: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DD3F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879DD41: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xAA
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879DD46: push edi
        __asm _emit 0x57
        // 0x5879DD47: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879DD49: call 0x5879d4f0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879DD4E: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DD54: push edi
        __asm _emit 0x57
        // 0x5879DD55: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xAA
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879DD5A: cmp bx, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x0D
        // 0x5879DD5E: jne 0x5879dd6d
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5879DD60: mov ecx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DD66: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x5879DD68: call 0x5890bc40
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xDE
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879DD6D: pop edi
        __asm _emit 0x5F
        // 0x5879DD6E: pop ebx
        __asm _emit 0x5B
        // 0x5879DD6F: pop esi
        __asm _emit 0x5E
        // 0x5879DD70: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
