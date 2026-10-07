// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 122 bytes in 1 exact ranges.
// Source symbol alias: FUN_58742570.

// Ghidra body range 0x58742570..0x587425EA; 122 mapped bytes.
extern "C" __declspec(naked) void FUN_58742570_segment_00() {
    __asm {
        // 0x58742570: push ebx
        __asm _emit 0x53
        // 0x58742571: push ebp
        __asm _emit 0x55
        // 0x58742572: push esi
        __asm _emit 0x56
        // 0x58742573: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58742575: push edi
        __asm _emit 0x57
        // 0x58742576: mov edi, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x58742579: cmp edi, dword ptr [ebp + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x18
        // 0x5874257C: jbe 0x58742583
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5874257E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xA6
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742583: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58742586: mov ebx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x18
        // 0x58742589: cmp dword ptr [ebp + 0x14], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x5874258C: jbe 0x58742593
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5874258E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xA6
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742593: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58742596: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58742598: je 0x5874259e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5874259A: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5874259C: je 0x587425a3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5874259E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xA6
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587425A3: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587425A5: je 0x587425e5
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x587425A7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587425A9: jne 0x587425dd
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x587425AB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xA6
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587425B0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587425B2: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587425B5: jb 0x587425bc
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587425B7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xA6
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587425BC: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587425BE: call 0x58739dc0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x77
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587425C3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587425C5: jne 0x587425e1
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587425C7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xA6
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587425CC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587425CE: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587425D1: jb 0x587425d8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587425D3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xA6
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587425D8: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587425DB: jmp 0x58742586
        __asm _emit 0xEB
        __asm _emit 0xA9
        // 0x587425DD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587425DF: jmp 0x587425b2
        __asm _emit 0xEB
        __asm _emit 0xD1
        // 0x587425E1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587425E3: jmp 0x587425ce
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x587425E5: pop edi
        __asm _emit 0x5F
        // 0x587425E6: pop esi
        __asm _emit 0x5E
        // 0x587425E7: pop ebp
        __asm _emit 0x5D
        // 0x587425E8: pop ebx
        __asm _emit 0x5B
        // 0x587425E9: ret
        __asm _emit 0xC3
    }
}
