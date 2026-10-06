// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58789FE0 .. +0xFA bytes.
// Source symbol alias: FUN_58789fe0.
extern "C" __declspec(naked) void FUN_58789fe0() {
    __asm {
        // 0x58789FE0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58789FE2: push 0x5897fb56
        __asm _emit 0x68
        __asm _emit 0x56
        __asm _emit 0xFB
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58789FE7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789FED: push eax
        __asm _emit 0x50
        // 0x58789FEE: push ecx
        __asm _emit 0x51
        // 0x58789FEF: push esi
        __asm _emit 0x56
        // 0x58789FF0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58789FF5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58789FF7: push eax
        __asm _emit 0x50
        // 0x58789FF8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58789FFC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A002: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5878A004: cmp dword ptr [esi + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5878A008: push 0x6654
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A00D: jne 0x5878a069
        __asm _emit 0x75
        __asm _emit 0x5A
        // 0x5878A00F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x2C
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878A014: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5878A017: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5878A01B: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A023: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878A025: je 0x5878a059
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x5878A027: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5878A02B: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A02F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5878A031: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878A033: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878A035: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878A037: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878A039: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878A03B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878A03D: push ecx
        __asm _emit 0x51
        // 0x5878A03E: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5878A042: push edx
        __asm _emit 0x52
        // 0x5878A043: push ecx
        __asm _emit 0x51
        // 0x5878A044: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5878A046: call 0x588e05c0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x65
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5878A04B: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5878A04E: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5878A051: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5878A054: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5878A057: jmp 0x5878a0c1
        __asm _emit 0xEB
        __asm _emit 0x68
        // 0x5878A059: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878A05B: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5878A05E: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5878A061: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5878A064: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5878A067: jmp 0x5878a0c1
        __asm _emit 0xEB
        __asm _emit 0x58
        // 0x5878A069: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x2B
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878A06E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5878A071: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5878A075: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A07D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878A07F: je 0x5878a0a7
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5878A081: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5878A085: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A089: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5878A08B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878A08D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878A08F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878A091: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878A093: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878A095: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878A097: push edx
        __asm _emit 0x52
        // 0x5878A098: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5878A09C: push ecx
        __asm _emit 0x51
        // 0x5878A09D: push edx
        __asm _emit 0x52
        // 0x5878A09E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5878A0A0: call 0x588e05c0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x65
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5878A0A5: jmp 0x5878a0a9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878A0A7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878A0A9: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5878A0AC: mov dword ptr [ecx + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x5878A0AF: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5878A0B2: mov edx, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x78
        // 0x5878A0B5: mov dword ptr [edx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x74
        // 0x5878A0B8: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5878A0BB: mov ecx, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x78
        // 0x5878A0BE: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5878A0C1: inc dword ptr [esi + 8]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5878A0C4: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5878A0C7: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5878A0CB: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A0D2: pop ecx
        __asm _emit 0x59
        // 0x5878A0D3: pop esi
        __asm _emit 0x5E
        // 0x5878A0D4: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5878A0D7: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
