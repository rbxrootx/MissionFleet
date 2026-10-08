// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 217 bytes in 1 exact ranges.
// Source symbol alias: FUN_587da040.

// Ghidra body range 0x587DA040..0x587DA119; 217 mapped bytes.
extern "C" __declspec(naked) void FUN_587da040_segment_00() {
    __asm {
        // 0x587DA040: push ecx
        __asm _emit 0x51
        // 0x587DA041: push ebx
        __asm _emit 0x53
        // 0x587DA042: push ebp
        __asm _emit 0x55
        // 0x587DA043: mov ebp, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA049: push esi
        __asm _emit 0x56
        // 0x587DA04A: lea eax, [ebp + 0xbb0]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA050: push edi
        __asm _emit 0x57
        // 0x587DA051: mov edx, 0x1c
        __asm _emit 0xBA
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA056: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DA05A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA060: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DA064: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587DA066: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DA068: je 0x587da0e0
        __asm _emit 0x74
        __asm _emit 0x76
        // 0x587DA06A: movzx eax, word ptr [eax + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x02
        // 0x587DA06E: cmp ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x32
        // 0x587DA072: jb 0x587da07a
        __asm _emit 0x72
        __asm _emit 0x06
        // 0x587DA074: cmp ax, 0x35
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x35
        // 0x587DA078: jbe 0x587da092
        __asm _emit 0x76
        __asm _emit 0x18
        // 0x587DA07A: cmp ax, 0x3d
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x3D
        // 0x587DA07E: je 0x587da092
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587DA080: cmp ax, 0x79
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x79
        // 0x587DA084: je 0x587da092
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587DA086: cmp ax, 0x54
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x54
        // 0x587DA08A: je 0x587da092
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587DA08C: cmp ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x587DA090: jne 0x587da0e0
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x587DA092: mov eax, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA098: movzx eax, word ptr [eax + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0E
        // 0x587DA09C: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x587DA09F: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x587DA0A2: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587DA0A4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DA0A6: jle 0x587da0e0
        __asm _emit 0x7E
        __asm _emit 0x38
        // 0x587DA0A8: lea edi, [ebp + 0x9a4]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA0AE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587DA0B0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587DA0B2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA0B4: je 0x587da0d8
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587DA0B6: mov bx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x5E
        // 0x587DA0BA: shr bx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587DA0BE: xor bl, 0xaa
        __asm _emit 0x80
        __asm _emit 0xF3
        __asm _emit 0xAA
        // 0x587DA0C1: cmp bl, 0x4b
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x4B
        // 0x587DA0C4: jb 0x587da0d8
        __asm _emit 0x72
        __asm _emit 0x12
        // 0x587DA0C6: mov ecx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA0CC: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x587DA0CE: cmp ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x20
        // 0x587DA0D1: jb 0x587da0d8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587DA0D3: cmp ecx, 0x22
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x22
        // 0x587DA0D6: jbe 0x587da0fa
        __asm _emit 0x76
        __asm _emit 0x22
        // 0x587DA0D8: inc esi
        __asm _emit 0x46
        // 0x587DA0D9: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587DA0DC: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587DA0DE: jl 0x587da0b0
        __asm _emit 0x7C
        __asm _emit 0xD0
        // 0x587DA0E0: add dword ptr [esp + 0x10], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        // 0x587DA0E5: inc edx
        __asm _emit 0x42
        // 0x587DA0E6: cmp edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x1F
        // 0x587DA0E9: jl 0x587da060
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x71
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DA0EF: pop edi
        __asm _emit 0x5F
        // 0x587DA0F0: pop esi
        __asm _emit 0x5E
        // 0x587DA0F1: pop ebp
        __asm _emit 0x5D
        // 0x587DA0F2: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA0F7: pop ebx
        __asm _emit 0x5B
        // 0x587DA0F8: pop ecx
        __asm _emit 0x59
        // 0x587DA0F9: ret
        __asm _emit 0xC3
        // 0x587DA0FA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA0FC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA0FE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA100: push 0x178e
        __asm _emit 0x68
        __asm _emit 0x8E
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA105: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x19
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587DA10A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587DA10C: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xAC
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587DA111: pop edi
        __asm _emit 0x5F
        // 0x587DA112: pop esi
        __asm _emit 0x5E
        // 0x587DA113: pop ebp
        __asm _emit 0x5D
        // 0x587DA114: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DA116: pop ebx
        __asm _emit 0x5B
        // 0x587DA117: pop ecx
        __asm _emit 0x59
        // 0x587DA118: ret
        __asm _emit 0xC3
    }
}
