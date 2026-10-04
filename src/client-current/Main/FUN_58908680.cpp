// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908680 .. +0x6A bytes.
// Source symbol alias: FUN_58908680.
extern "C" __declspec(naked) void FUN_58908680() {
    __asm {
        // 0x58908680: mov eax, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908686: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908688: jne 0x5890869a
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5890868A: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x5890868D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5890868F: mov dword ptr [ecx + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908695: mov eax, dword ptr [edx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x3C
        // 0x58908698: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x5890869A: push esi
        __asm _emit 0x56
        // 0x5890869B: mov esi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x14
        // 0x5890869E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x589086A0: je 0x589086e8
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x589086A2: push edi
        __asm _emit 0x57
        // 0x589086A3: mov edi, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589086A9: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x589086AB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x589086AD: mov dword ptr [ecx + 0x84], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589086B3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589086B5: je 0x589086c5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x589086B7: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x589086B9: je 0x589086c5
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x589086BB: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x589086BE: add edx, dword ptr [ecx + 0x5c]
        __asm _emit 0x03
        __asm _emit 0x51
        __asm _emit 0x5C
        // 0x589086C1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589086C3: jne 0x589086b7
        __asm _emit 0x75
        __asm _emit 0xF2
        // 0x589086C5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x589086C7: je 0x589086df
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x589086C9: mov eax, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x589086CC: sub eax, dword ptr [ecx + 0x5c]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x589086CF: sub eax, dword ptr [ecx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x589086D2: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x589086D4: jle 0x589086df
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x589086D6: mov edx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x589086D9: mov dword ptr [ecx + 0x80], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589086DF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x589086E1: mov edx, dword ptr [eax + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x3C
        // 0x589086E4: pop edi
        __asm _emit 0x5F
        // 0x589086E5: pop esi
        __asm _emit 0x5E
        // 0x589086E6: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x589086E8: pop esi
        __asm _emit 0x5E
        // 0x589086E9: ret
        __asm _emit 0xC3
    }
}
