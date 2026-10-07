// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 172 bytes in 1 exact ranges.
// Source symbol alias: FUN_5897a030.

// Ghidra body range 0x5897A030..0x5897A0DC; 172 mapped bytes.
extern "C" __declspec(naked) void FUN_5897a030_segment_00() {
    __asm {
        // 0x5897A030: mov al, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5897A034: push ebp
        __asm _emit 0x55
        // 0x5897A035: push esi
        __asm _emit 0x56
        // 0x5897A036: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5897A03A: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5897A03C: je 0x5897a04f
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5897A03E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897A040: push esi
        __asm _emit 0x56
        // 0x5897A041: mov dword ptr [eax + 0x14], 4
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A048: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897A04A: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897A04C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897A04F: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5897A052: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5897A054: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5897A056: push esi
        __asm _emit 0x56
        // 0x5897A057: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897A059: mov dword ptr [esi + 0x144], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A05F: mov dword ptr [eax], 0x5897a0e0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xE0
        __asm _emit 0xA0
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897A065: mov ecx, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A06B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5897A06E: mov dl, byte ptr [ecx + 8]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5897A071: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5897A073: je 0x5897a088
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5897A075: push esi
        __asm _emit 0x56
        // 0x5897A076: mov dword ptr [eax + 4], 0x5897a2f0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0xF0
        __asm _emit 0xA2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897A07D: call 0x5897a4c0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A082: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897A085: pop esi
        __asm _emit 0x5E
        // 0x5897A086: pop ebp
        __asm _emit 0x5D
        // 0x5897A087: ret
        __asm _emit 0xC3
        // 0x5897A088: mov dword ptr [eax + 4], 0x5897a130
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x30
        __asm _emit 0xA1
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897A08F: mov edx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x3C
        // 0x5897A092: mov ecx, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x44
        // 0x5897A095: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5897A097: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5897A099: jle 0x5897a0d9
        __asm _emit 0x7E
        __asm _emit 0x3E
        // 0x5897A09B: push ebx
        __asm _emit 0x53
        // 0x5897A09C: push edi
        __asm _emit 0x57
        // 0x5897A09D: lea edi, [ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x5897A0A0: lea ebx, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x5897A0A3: mov eax, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x14
        // 0x5897A0A6: mov edx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A0AC: imul eax, dword ptr [esi + 0xd8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A0B3: shl eax, 3
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x03
        // 0x5897A0B6: push edx
        __asm _emit 0x52
        // 0x5897A0B7: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5897A0BA: cdq
        __asm _emit 0x99
        // 0x5897A0BB: idiv dword ptr [edi]
        __asm _emit 0xF7
        __asm _emit 0x3F
        // 0x5897A0BD: push eax
        __asm _emit 0x50
        // 0x5897A0BE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5897A0C0: push esi
        __asm _emit 0x56
        // 0x5897A0C1: call dword ptr [ecx + 8]
        __asm _emit 0xFF
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5897A0C4: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5897A0C7: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x5897A0C9: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5897A0CC: inc ebp
        __asm _emit 0x45
        // 0x5897A0CD: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5897A0D0: add edi, 0x54
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x54
        // 0x5897A0D3: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x5897A0D5: jl 0x5897a0a3
        __asm _emit 0x7C
        __asm _emit 0xCC
        // 0x5897A0D7: pop edi
        __asm _emit 0x5F
        // 0x5897A0D8: pop ebx
        __asm _emit 0x5B
        // 0x5897A0D9: pop esi
        __asm _emit 0x5E
        // 0x5897A0DA: pop ebp
        __asm _emit 0x5D
        // 0x5897A0DB: ret
        __asm _emit 0xC3
    }
}
