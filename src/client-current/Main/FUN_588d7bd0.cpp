// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 108 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d7bd0.

// Ghidra body range 0x588D7BD0..0x588D7C3C; 108 mapped bytes.
extern "C" __declspec(naked) void FUN_588d7bd0_segment_00() {
    __asm {
        // 0x588D7BD0: push ebx
        __asm _emit 0x53
        // 0x588D7BD1: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588D7BD5: push esi
        __asm _emit 0x56
        // 0x588D7BD6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D7BD8: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x588D7BDA: je 0x588d7c37
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x588D7BDC: push edi
        __asm _emit 0x57
        // 0x588D7BDD: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588D7BDF: cmp dword ptr [esi + 0x141c], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7BE5: jle 0x588d7c1a
        __asm _emit 0x7E
        __asm _emit 0x33
        // 0x588D7BE7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D7BE9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7BF0: mov eax, dword ptr [esi + eax*4 + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7BF7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D7BF9: je 0x588d7c0e
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588D7BFB: test bl, 1
        __asm _emit 0xF6
        __asm _emit 0xC3
        __asm _emit 0x01
        // 0x588D7BFE: je 0x588d7c0e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588D7C00: mov ecx, dword ptr [esi + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7C06: push ecx
        __asm _emit 0x51
        // 0x588D7C07: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D7C09: call 0x587b1a40
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x9E
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D7C0E: inc edi
        __asm _emit 0x47
        // 0x588D7C0F: movzx eax, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC7
        // 0x588D7C12: cmp eax, dword ptr [esi + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7C18: jl 0x588d7bf0
        __asm _emit 0x7C
        __asm _emit 0xD6
        // 0x588D7C1A: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D7C20: pop edi
        __asm _emit 0x5F
        // 0x588D7C21: cmp dword ptr [edx + 4], esi
        __asm _emit 0x39
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x588D7C24: jne 0x588d7c37
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x588D7C26: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D7C2B: mov ecx, dword ptr [eax + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D7C31: push ebx
        __asm _emit 0x53
        // 0x588D7C32: call 0x587a6dc0
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xF1
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588D7C37: pop esi
        __asm _emit 0x5E
        // 0x588D7C38: pop ebx
        __asm _emit 0x5B
        // 0x588D7C39: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
