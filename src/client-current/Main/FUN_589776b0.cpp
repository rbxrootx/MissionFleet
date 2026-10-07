// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 135 bytes in 1 exact ranges.
// Source symbol alias: FUN_589776b0.

// Ghidra body range 0x589776B0..0x58977737; 135 mapped bytes.
extern "C" __declspec(naked) void FUN_589776b0_segment_00() {
    __asm {
        // 0x589776B0: push ebp
        __asm _emit 0x55
        // 0x589776B1: push esi
        __asm _emit 0x56
        // 0x589776B2: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589776B6: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x589776B8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x589776BA: push esi
        __asm _emit 0x56
        // 0x589776BB: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x589776BE: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x589776C0: mov dword ptr [esi + 0x140], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589776C6: mov dword ptr [eax], 0x58977740
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x77
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x589776CC: mov cl, byte ptr [esi + 0xb0]
        __asm _emit 0x8A
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589776D2: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x589776D5: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x589776D7: jne 0x58977734
        __asm _emit 0x75
        __asm _emit 0x5B
        // 0x589776D9: mov cl, byte ptr [esp + 0x10]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589776DD: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x589776DF: je 0x589776f5
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x589776E1: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x589776E3: push esi
        __asm _emit 0x56
        // 0x589776E4: mov dword ptr [ecx + 0x14], 4
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589776EB: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x589776ED: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x589776EF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589776F2: pop esi
        __asm _emit 0x5E
        // 0x589776F3: pop ebp
        __asm _emit 0x5D
        // 0x589776F4: ret
        __asm _emit 0xC3
        // 0x589776F5: mov edx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x3C
        // 0x589776F8: mov ecx, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x44
        // 0x589776FB: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x589776FD: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x589776FF: jle 0x58977734
        __asm _emit 0x7E
        __asm _emit 0x33
        // 0x58977701: push ebx
        __asm _emit 0x53
        // 0x58977702: push edi
        __asm _emit 0x57
        // 0x58977703: lea edi, [ecx + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x1C
        // 0x58977706: lea ebx, [eax + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x58977709: mov ecx, dword ptr [edi - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xF0
        // 0x5897770C: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x5897770E: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58977711: shl ecx, 3
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58977714: shl edx, 3
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x58977717: push ecx
        __asm _emit 0x51
        // 0x58977718: push edx
        __asm _emit 0x52
        // 0x58977719: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5897771B: push esi
        __asm _emit 0x56
        // 0x5897771C: call dword ptr [eax + 8]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5897771F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58977722: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x58977724: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58977727: inc ebp
        __asm _emit 0x45
        // 0x58977728: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5897772B: add edi, 0x54
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x54
        // 0x5897772E: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58977730: jl 0x58977709
        __asm _emit 0x7C
        __asm _emit 0xD7
        // 0x58977732: pop edi
        __asm _emit 0x5F
        // 0x58977733: pop ebx
        __asm _emit 0x5B
        // 0x58977734: pop esi
        __asm _emit 0x5E
        // 0x58977735: pop ebp
        __asm _emit 0x5D
        // 0x58977736: ret
        __asm _emit 0xC3
    }
}
