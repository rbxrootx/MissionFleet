// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 87 bytes in 1 exact ranges.
// Source symbol alias: FUN_58792160.

// Ghidra body range 0x58792160..0x587921B7; 87 mapped bytes.
extern "C" __declspec(naked) void FUN_58792160_segment_00() {
    __asm {
        // 0x58792160: push ebx
        __asm _emit 0x53
        // 0x58792161: push ebp
        __asm _emit 0x55
        // 0x58792162: push esi
        __asm _emit 0x56
        // 0x58792163: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58792167: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5879216B: push edi
        __asm _emit 0x57
        // 0x5879216C: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58792170: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58792172: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x58792174: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x58792179: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5879217B: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5879217D: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58792180: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58792182: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58792185: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58792187: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879218E: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58792190: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x58792192: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x58792194: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x58792196: sub ebx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD9
        // 0x58792198: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x5879219A: je 0x587921b0
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5879219C: sub ebp, esi
        __asm _emit 0x2B
        __asm _emit 0xEE
        // 0x5879219E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587921A0: sub esi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x1C
        // 0x587921A3: push esi
        __asm _emit 0x56
        // 0x587921A4: lea ecx, [esi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x2E
        // 0x587921A7: call 0x58791e50
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587921AC: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587921AE: jne 0x587921a0
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x587921B0: pop edi
        __asm _emit 0x5F
        // 0x587921B1: pop esi
        __asm _emit 0x5E
        // 0x587921B2: pop ebp
        __asm _emit 0x5D
        // 0x587921B3: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587921B5: pop ebx
        __asm _emit 0x5B
        // 0x587921B6: ret
        __asm _emit 0xC3
    }
}
