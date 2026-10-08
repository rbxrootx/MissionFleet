// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 161 bytes in 1 exact ranges.
// Source symbol alias: FUN_588281a0.

// Ghidra body range 0x588281A0..0x58828241; 161 mapped bytes.
extern "C" __declspec(naked) void FUN_588281a0_segment_00() {
    __asm {
        // 0x588281A0: push ebx
        __asm _emit 0x53
        // 0x588281A1: push esi
        __asm _emit 0x56
        // 0x588281A2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588281A4: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588281AA: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588281B0: push edi
        __asm _emit 0x57
        // 0x588281B1: push eax
        __asm _emit 0x50
        // 0x588281B2: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588281B7: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588281B9: lea edi, [esi + 0x154]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588281BF: nop
        __asm _emit 0x90
        // 0x588281C0: mov ecx, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588281C6: lea eax, [ebx + ecx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x0B
        // 0x588281C9: cmp eax, dword ptr [esi + 0x1f8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588281CF: jge 0x5882822b
        __asm _emit 0x7D
        __asm _emit 0x5A
        // 0x588281D1: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588281D7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588281D9: push eax
        __asm _emit 0x50
        // 0x588281DA: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0xFF
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588281DF: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588281E5: push eax
        __asm _emit 0x50
        // 0x588281E6: call 0x587537e0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xB5
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588281EB: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588281F1: dec eax
        __asm _emit 0x48
        // 0x588281F2: push eax
        __asm _emit 0x50
        // 0x588281F3: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xDD
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588281F8: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588281FA: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588281FD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588281FF: je 0x58828234
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58828201: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58828204: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58828207: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5882820A: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5882820D: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58828210: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58828212: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58828215: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58828217: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5882821A: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5882821D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58828220: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58828223: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58828226: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58828229: jmp 0x58828234
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5882822B: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5882822D: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828234: inc ebx
        __asm _emit 0x43
        // 0x58828235: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58828238: cmp ebx, 8
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x08
        // 0x5882823B: jl 0x588281c0
        __asm _emit 0x7C
        __asm _emit 0x83
        // 0x5882823D: pop edi
        __asm _emit 0x5F
        // 0x5882823E: pop esi
        __asm _emit 0x5E
        // 0x5882823F: pop ebx
        __asm _emit 0x5B
        // 0x58828240: ret
        __asm _emit 0xC3
    }
}
