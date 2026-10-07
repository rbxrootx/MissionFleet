// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 231 bytes in 2 exact ranges.
// Source symbol alias: FUN_58739cd0.

// Ghidra body range 0x58739CD0..0x58739CED; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_58739cd0_segment_00() {
    __asm {
        // 0x58739CD0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58739CD3: push ebx
        __asm _emit 0x53
        // 0x58739CD4: push ebp
        __asm _emit 0x55
        // 0x58739CD5: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58739CD9: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58739CDB: push esi
        __asm _emit 0x56
        // 0x58739CDC: add ecx, 0x5c
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x5C
        // 0x58739CDF: push edi
        __asm _emit 0x57
        // 0x58739CE0: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58739CE4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58739CE6: mov esi, 0xb40
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739CEB: jmp 0x58739cf0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58739CF0..0x58739DBA; 202 mapped bytes.
extern "C" __declspec(naked) void FUN_58739cd0_segment_01() {
    __asm {
        // 0x58739CF0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58739CF4: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58739CF7: mov ecx, dword ptr [esi + eax + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x06
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739CFE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58739D00: je 0x58739d0b
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58739D02: movzx ecx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x58739D05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x58739D09: je 0x58739d1f
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58739D0B: mov ecx, dword ptr [esi + eax + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x06
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739D12: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58739D14: je 0x58739d93
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x58739D16: movzx ecx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x58739D19: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x58739D1D: jne 0x58739d93
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x58739D1F: mov edx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739D25: mov edx, dword ptr [edx + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739D2B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58739D2D: mov ebp, 0x80000000
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58739D32: shr ebp, cl
        __asm _emit 0xD3
        __asm _emit 0xED
        // 0x58739D34: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739D39: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x58739D3B: and edx, ebp
        __asm _emit 0x23
        __asm _emit 0xD5
        // 0x58739D3D: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x58739D3F: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x58739D41: jne 0x58739d93
        __asm _emit 0x75
        __asm _emit 0x50
        // 0x58739D43: cmp dword ptr [esi + eax + 0x34c], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x06
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739D4B: je 0x58739d93
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x58739D4D: mov ecx, 0xaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739D52: xor cx, word ptr [esi + eax + 0x2cc]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x8C
        __asm _emit 0x06
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739D5A: jbe 0x58739d93
        __asm _emit 0x76
        __asm _emit 0x37
        // 0x58739D5C: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58739D60: movzx ecx, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0A
        // 0x58739D63: cmp cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x58739D67: je 0x58739d6f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58739D69: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58739D6D: jne 0x58739d93
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x58739D6F: mov eax, dword ptr [esi + eax - 0x900]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739D76: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58739D78: je 0x58739d93
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58739D7A: cmp word ptr [edx + 0x34], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x58739D7F: ja 0x58739d87
        __asm _emit 0x77
        __asm _emit 0x06
        // 0x58739D81: cmp dword ptr [edx + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x58739D85: je 0x58739d93
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58739D87: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58739D8B: push ebx
        __asm _emit 0x53
        // 0x58739D8C: push edi
        __asm _emit 0x57
        // 0x58739D8D: push eax
        __asm _emit 0x50
        // 0x58739D8E: call 0x587392d0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739D93: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58739D96: inc edi
        __asm _emit 0x47
        // 0x58739D97: cmp esi, 0xbc0
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739D9D: jl 0x58739cf0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x4D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739DA3: add dword ptr [esp + 0x10], 0x38
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x38
        // 0x58739DA8: inc ebx
        __asm _emit 0x43
        // 0x58739DA9: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x58739DAC: jl 0x58739ce4
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x32
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739DB2: pop edi
        __asm _emit 0x5F
        // 0x58739DB3: pop esi
        __asm _emit 0x5E
        // 0x58739DB4: pop ebp
        __asm _emit 0x5D
        // 0x58739DB5: pop ebx
        __asm _emit 0x5B
        // 0x58739DB6: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58739DB9: ret
        __asm _emit 0xC3
    }
}
