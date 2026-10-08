// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 131 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887a980.

// Ghidra body range 0x5887A980..0x5887AA03; 131 mapped bytes.
extern "C" __declspec(naked) void FUN_5887a980_segment_00() {
    __asm {
        // 0x5887A980: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5887A984: push ebx
        __asm _emit 0x53
        // 0x5887A985: push ebp
        __asm _emit 0x55
        // 0x5887A986: push esi
        __asm _emit 0x56
        // 0x5887A987: push edi
        __asm _emit 0x57
        // 0x5887A988: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5887A98A: mov ecx, dword ptr [edi + eax*4 + 0x244]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x87
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A991: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xD8
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887A996: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5887A998: lea esi, [edi + 0x244]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A99E: mov ebp, 5
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A9A3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5887A9A5: push ebx
        __asm _emit 0x53
        // 0x5887A9A6: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xDE
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887A9AB: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5887A9AE: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5887A9B1: jne 0x5887a9a3
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x5887A9B3: mov eax, dword ptr [edi + 0x244]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A9B9: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A9BF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887A9C1: je 0x5887a9c8
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5887A9C3: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5887A9C6: jmp 0x5887a9cb
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5887A9C8: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5887A9CB: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887A9D1: push eax
        __asm _emit 0x50
        // 0x5887A9D2: call 0x588f4090
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5887A9D7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887A9D9: je 0x5887a9f6
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5887A9DB: mov ecx, dword ptr [edi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A9E1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5887A9E3: push eax
        __asm _emit 0x50
        // 0x5887A9E4: call 0x5886ffa0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x55
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887A9E9: mov ecx, dword ptr [edi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A9EF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5887A9F1: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5887A9F4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5887A9F6: mov dword ptr [edi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A9FC: pop edi
        __asm _emit 0x5F
        // 0x5887A9FD: pop esi
        __asm _emit 0x5E
        // 0x5887A9FE: pop ebp
        __asm _emit 0x5D
        // 0x5887A9FF: pop ebx
        __asm _emit 0x5B
        // 0x5887AA00: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
