// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 391 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_587eac40.

// Ghidra body range 0x587EAC40..0x587EAD69; 297 mapped bytes.
extern "C" __declspec(naked) void FUN_587eac40_segment_00() {
    __asm {
        // 0x587EAC40: push ebx
        __asm _emit 0x53
        // 0x587EAC41: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587EAC43: push esi
        __asm _emit 0x56
        // 0x587EAC44: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587EAC46: cmp dword ptr [0x58a24510], ebx
        __asm _emit 0x39
        __asm _emit 0x1D
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAC4C: je 0x587eadc9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAC52: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EAC57: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587EAC5A: mov edx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAC60: mov al, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587EAC63: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x587EAC65: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587EAC67: jne 0x587eadc9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAC6D: cmp dword ptr [esp + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587EAC71: je 0x587ead62
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAC77: mov eax, dword ptr [esi + 0x10558]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EAC7D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587EAC7F: je 0x587eadc9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAC85: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587EAC87: je 0x587eadc9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAC8D: push ebp
        __asm _emit 0x55
        // 0x587EAC8E: push edi
        __asm _emit 0x57
        // 0x587EAC8F: mov edi, 8
        __asm _emit 0xBF
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAC94: mov ebp, 0x40000000
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587EAC99: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EACA0: mov ecx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EACA6: cmp dword ptr [edi + ecx], ebx
        __asm _emit 0x39
        __asm _emit 0x1C
        __asm _emit 0x0F
        // 0x587EACA9: je 0x587ead4c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EACAF: mov eax, dword ptr [esi + 0x10558]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EACB5: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EACBB: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587EACBE: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587EACC1: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587EACC4: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587EACC6: push edx
        __asm _emit 0x52
        // 0x587EACC7: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587EACCA: push eax
        __asm _emit 0x50
        // 0x587EACCB: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587EACCE: push edx
        __asm _emit 0x52
        // 0x587EACCF: push eax
        __asm _emit 0x50
        // 0x587EACD0: call 0x5876c010
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x13
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587EACD5: mov ecx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EACDB: mov ecx, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x0F
        // 0x587EACDE: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x587EACE1: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587EACE4: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587EACE6: push eax
        __asm _emit 0x50
        // 0x587EACE7: call 0x587b07b0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x5A
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587EACEC: push eax
        __asm _emit 0x50
        // 0x587EACED: call 0x5876c6b0
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x19
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587EACF2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587EACF4: cdq
        __asm _emit 0x99
        // 0x587EACF5: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587EACF7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587EACF9: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EACFC: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587EACFF: jle 0x587ead3d
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x587EAD01: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EAD03: jle 0x587ead20
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x587EAD05: mov edx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAD0B: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x587EAD0E: mov dword ptr [eax + 0x124], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAD18: mov dword ptr [eax + 0x108], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAD1E: jmp 0x587ead4c
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x587EAD20: jge 0x587ead4c
        __asm _emit 0x7D
        __asm _emit 0x2A
        // 0x587EAD22: mov eax, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAD28: mov eax, dword ptr [edi + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x07
        // 0x587EAD2B: mov dword ptr [eax + 0x124], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EAD35: mov dword ptr [eax + 0x108], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAD3B: jmp 0x587ead4c
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x587EAD3D: mov ecx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAD43: mov edx, dword ptr [ecx + edi]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x39
        // 0x587EAD46: mov dword ptr [edx + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAD4C: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587EAD4F: cmp edi, 0x88
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAD55: jl 0x587eaca0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EAD5B: pop edi
        __asm _emit 0x5F
        // 0x587EAD5C: pop ebp
        __asm _emit 0x5D
        // 0x587EAD5D: pop esi
        __asm _emit 0x5E
        // 0x587EAD5E: pop ebx
        __asm _emit 0x5B
        // 0x587EAD5F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EAD62: mov eax, 0xc
        __asm _emit 0xB8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAD67: jmp 0x587ead70
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x587EAD70..0x587EADCE; 94 mapped bytes.
extern "C" __declspec(naked) void FUN_587eac40_segment_01() {
    __asm {
        // 0x587EAD70: mov ecx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAD76: mov ecx, dword ptr [ecx + eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0xFC
        // 0x587EAD7A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EAD7C: je 0x587ead84
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587EAD7E: mov dword ptr [ecx + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAD84: mov edx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAD8A: mov ecx, dword ptr [eax + edx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x10
        // 0x587EAD8D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EAD8F: je 0x587ead97
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587EAD91: mov dword ptr [ecx + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAD97: mov ecx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EAD9D: mov ecx, dword ptr [ecx + eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x04
        // 0x587EADA1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EADA3: je 0x587eadab
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587EADA5: mov dword ptr [ecx + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EADAB: mov edx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EADB1: mov ecx, dword ptr [edx + eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x08
        // 0x587EADB5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EADB7: je 0x587eadbf
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587EADB9: mov dword ptr [ecx + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EADBF: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x587EADC2: cmp eax, 0x8c
        __asm _emit 0x3D
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EADC7: jl 0x587ead70
        __asm _emit 0x7C
        __asm _emit 0xA7
        // 0x587EADC9: pop esi
        __asm _emit 0x5E
        // 0x587EADCA: pop ebx
        __asm _emit 0x5B
        // 0x587EADCB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
