// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 258 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975340.

// Ghidra body range 0x58975340..0x58975442; 258 mapped bytes.
extern "C" __declspec(naked) void FUN_58975340_segment_00() {
    __asm {
        // 0x58975340: push esi
        __asm _emit 0x56
        // 0x58975341: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58975345: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58975348: cmp eax, 0x65
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x65
        // 0x5897534B: je 0x5897536f
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5897534D: cmp eax, 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x66
        // 0x58975350: je 0x5897536f
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x58975352: cmp eax, 0x67
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x67
        // 0x58975355: je 0x5897539a
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x58975357: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58975359: push esi
        __asm _emit 0x56
        // 0x5897535A: mov dword ptr [eax + 0x14], 0x14
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975361: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58975363: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x58975366: mov dword ptr [ecx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x58975369: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897536B: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897536D: jmp 0x58975397
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x5897536F: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975375: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x58975378: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5897537A: jae 0x5897538d
        __asm _emit 0x73
        __asm _emit 0x11
        // 0x5897537C: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897537E: push esi
        __asm _emit 0x56
        // 0x5897537F: mov dword ptr [edx + 0x14], 0x43
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975386: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58975388: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897538A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897538D: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975393: push esi
        __asm _emit 0x56
        // 0x58975394: call dword ptr [ecx + 8]
        __asm _emit 0xFF
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58975397: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897539A: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589753A0: mov cl, byte ptr [eax + 0xd]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x0D
        // 0x589753A3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x589753A5: jne 0x58975426
        __asm _emit 0x75
        __asm _emit 0x7F
        // 0x589753A7: push ebx
        __asm _emit 0x53
        // 0x589753A8: push edi
        __asm _emit 0x57
        // 0x589753A9: mov ebx, 0x18
        __asm _emit 0xBB
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589753AE: push esi
        __asm _emit 0x56
        // 0x589753AF: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x589753B1: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589753B7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589753BA: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x589753BC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589753BE: jbe 0x5897540a
        __asm _emit 0x76
        __asm _emit 0x4A
        // 0x589753C0: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x589753C3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589753C5: je 0x589753df
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x589753C7: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x589753CA: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x589753CD: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589753D3: push esi
        __asm _emit 0x56
        // 0x589753D4: mov dword ptr [edx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x589753D7: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x589753DA: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x589753DC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589753DF: mov edx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589753E5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x589753E7: push esi
        __asm _emit 0x56
        // 0x589753E8: call dword ptr [edx + 4]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x589753EB: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x589753EE: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x589753F0: jne 0x589753ff
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x589753F2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x589753F4: push esi
        __asm _emit 0x56
        // 0x589753F5: mov dword ptr [eax + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x589753F8: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x589753FA: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x589753FC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589753FF: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975405: inc edi
        __asm _emit 0x47
        // 0x58975406: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58975408: jb 0x589753c0
        __asm _emit 0x72
        __asm _emit 0xB6
        // 0x5897540A: mov edx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975410: push esi
        __asm _emit 0x56
        // 0x58975411: call dword ptr [edx + 8]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x08
        // 0x58975414: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897541A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897541D: mov cl, byte ptr [eax + 0xd]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x0D
        // 0x58975420: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58975422: je 0x589753ae
        __asm _emit 0x74
        __asm _emit 0x8A
        // 0x58975424: pop edi
        __asm _emit 0x5F
        // 0x58975425: pop ebx
        __asm _emit 0x5B
        // 0x58975426: mov eax, dword ptr [esi + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897542C: push esi
        __asm _emit 0x56
        // 0x5897542D: call dword ptr [eax + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58975430: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58975433: push esi
        __asm _emit 0x56
        // 0x58975434: call dword ptr [ecx + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58975437: push esi
        __asm _emit 0x56
        // 0x58975438: call 0x58976b70
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897543D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58975440: pop esi
        __asm _emit 0x5E
        // 0x58975441: ret
        __asm _emit 0xC3
    }
}
