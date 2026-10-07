// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 179 bytes in 1 exact ranges.
// Source symbol alias: FUN_587925c0.

// Ghidra body range 0x587925C0..0x58792673; 179 mapped bytes.
extern "C" __declspec(naked) void FUN_587925c0_segment_00() {
    __asm {
        // 0x587925C0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587925C3: push ebx
        __asm _emit 0x53
        // 0x587925C4: push esi
        __asm _emit 0x56
        // 0x587925C5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587925C7: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587925CA: push edi
        __asm _emit 0x57
        // 0x587925CB: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587925CE: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587925D0: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x587925D2: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x587925D7: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587925D9: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587925DB: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587925DE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587925E0: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587925E3: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587925E5: jne 0x587925eb
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587925E7: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587925E9: jmp 0x58792620
        __asm _emit 0xEB
        __asm _emit 0x35
        // 0x587925EB: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587925ED: jbe 0x587925f4
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587925EF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xA6
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x587925F4: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587925F8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587925FA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587925FC: je 0x58792602
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587925FE: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58792600: je 0x58792607
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58792602: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xA6
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58792607: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5879260B: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x5879260D: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x58792612: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58792614: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58792616: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58792619: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5879261B: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x5879261E: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58792620: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58792624: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58792628: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5879262C: push ecx
        __asm _emit 0x51
        // 0x5879262D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5879262F: push edx
        __asm _emit 0x52
        // 0x58792630: push eax
        __asm _emit 0x50
        // 0x58792631: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58792633: call 0x58792220
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792638: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5879263B: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5879263E: jbe 0x58792645
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58792640: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xA6
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58792645: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58792647: push edi
        __asm _emit 0x57
        // 0x58792648: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5879264C: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58792650: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58792654: call 0x5878d590
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xAF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792659: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5879265D: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58792661: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58792665: pop edi
        __asm _emit 0x5F
        // 0x58792666: pop esi
        __asm _emit 0x5E
        // 0x58792667: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58792669: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5879266C: pop ebx
        __asm _emit 0x5B
        // 0x5879266D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58792670: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
