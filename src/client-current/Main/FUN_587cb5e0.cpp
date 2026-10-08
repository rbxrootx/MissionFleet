// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 206 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cb5e0.

// Ghidra body range 0x587CB5E0..0x587CB6AE; 206 mapped bytes.
extern "C" __declspec(naked) void FUN_587cb5e0_segment_00() {
    __asm {
        // 0x587CB5E0: push ebx
        __asm _emit 0x53
        // 0x587CB5E1: mov ebx, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB5E7: push esi
        __asm _emit 0x56
        // 0x587CB5E8: push edi
        __asm _emit 0x57
        // 0x587CB5E9: mov edi, dword ptr [ecx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB5EF: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587CB5F4: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587CB5F6: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CB5F9: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587CB5FB: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x587CB5FE: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x587CB600: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x587CB602: jle 0x587cb60c
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587CB604: mov dword ptr [ecx + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB60A: jmp 0x587cb61b
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x587CB60C: cmp esi, 0x14
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x14
        // 0x587CB60F: jge 0x587cb61b
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x587CB611: mov dword ptr [ecx + 0xb4], 0x14
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB61B: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CB61F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CB621: je 0x587cb6a8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB627: mov edx, dword ptr [eax + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB62D: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587CB632: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587CB634: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CB637: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CB639: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CB63C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CB63E: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587CB640: je 0x587cb6a8
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x587CB642: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB648: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587CB64A: sub esi, edi
        __asm _emit 0x2B
        __asm _emit 0xF7
        // 0x587CB64C: cmp dword ptr [ecx + 0xcc], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB653: mov dword ptr [ecx + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB659: jge 0x587cb661
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587CB65B: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587CB65D: jl 0x587cb66f
        __asm _emit 0x7C
        __asm _emit 0x10
        // 0x587CB65F: jmp 0x587cb665
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587CB661: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587CB663: jg 0x587cb66f
        __asm _emit 0x7F
        __asm _emit 0x0A
        // 0x587CB665: mov dword ptr [ecx + 0xcc], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB66F: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587CB674: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x587CB676: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587CB679: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587CB67B: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x587CB67E: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x587CB680: lea eax, [esi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB6
        // 0x587CB683: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587CB685: cdq
        __asm _emit 0x99
        // 0x587CB686: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587CB688: mov edi, dword ptr [ecx + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB68E: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587CB690: mov dword ptr [ecx + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB696: cdq
        __asm _emit 0x99
        // 0x587CB697: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587CB699: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CB69B: cmp eax, 0x190
        __asm _emit 0x3D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB6A0: jle 0x587cb6a8
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x587CB6A2: mov dword ptr [ecx + 0xcc], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB6A8: pop edi
        __asm _emit 0x5F
        // 0x587CB6A9: pop esi
        __asm _emit 0x5E
        // 0x587CB6AA: pop ebx
        __asm _emit 0x5B
        // 0x587CB6AB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
