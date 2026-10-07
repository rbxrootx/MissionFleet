// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 105 bytes in 1 exact ranges.
// Source symbol alias: FUN_587466b0.

// Ghidra body range 0x587466B0..0x58746719; 105 mapped bytes.
extern "C" __declspec(naked) void FUN_587466b0_segment_00() {
    __asm {
        // 0x587466B0: push esi
        __asm _emit 0x56
        // 0x587466B1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587466B3: cmp dword ptr [esi + 0xdc], 0xa
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x587466BA: jl 0x587466fb
        __asm _emit 0x7C
        __asm _emit 0x3F
        // 0x587466BC: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587466C2: sub ecx, dword ptr [esi + 0xec]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587466C8: push edi
        __asm _emit 0x57
        // 0x587466C9: lea edi, [esi + 0xe0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587466CF: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587466D4: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587466D6: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587466D9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587466DB: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587466DE: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587466E0: je 0x587466fa
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587466E2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587466E4: call 0x58745970
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587466E9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587466EB: call 0x58745f40
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587466F0: mov dword ptr [esi + 0xdc], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587466FA: pop edi
        __asm _emit 0x5F
        // 0x587466FB: inc dword ptr [esi + 0xdc]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746701: cmp dword ptr [esi + 0xdc], 0x1869f
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9F
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874670B: jle 0x58746717
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x5874670D: mov dword ptr [esi + 0xdc], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746717: pop esi
        __asm _emit 0x5E
        // 0x58746718: ret
        __asm _emit 0xC3
    }
}
