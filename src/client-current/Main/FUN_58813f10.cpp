// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1383 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_58813f10.

// Ghidra body range 0x58813F10..0x588142E8; 984 mapped bytes.
extern "C" __declspec(naked) void FUN_58813f10_segment_00() {
    __asm {
        // 0x58813F10: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58813F13: push ebx
        __asm _emit 0x53
        // 0x58813F14: push ebp
        __asm _emit 0x55
        // 0x58813F15: push esi
        __asm _emit 0x56
        // 0x58813F16: push edi
        __asm _emit 0x57
        // 0x58813F17: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58813F19: call 0x58810540
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58813F1E: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58813F21: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58813F23: push ebx
        __asm _emit 0x53
        // 0x58813F24: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x34
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58813F29: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58813F2C: push ebx
        __asm _emit 0x53
        // 0x58813F2D: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x34
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58813F32: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58813F35: push ebx
        __asm _emit 0x53
        // 0x58813F36: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x34
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58813F3B: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58813F3E: push ebx
        __asm _emit 0x53
        // 0x58813F3F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x34
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58813F44: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58813F4A: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x58813F4D: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58813F53: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58813F56: mov eax, dword ptr [edx + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58813F5C: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58813F5F: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58813F64: push eax
        __asm _emit 0x50
        // 0x58813F65: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x33
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58813F6A: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58813F70: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58813F73: mov eax, dword ptr [edx + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58813F79: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58813F7C: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58813F81: push eax
        __asm _emit 0x50
        // 0x58813F82: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x33
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58813F87: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58813F8D: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58813F90: mov eax, dword ptr [edx + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58813F96: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58813F98: jne 0x58813f9f
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58813F9A: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58813F9F: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58813FA5: push ebx
        __asm _emit 0x53
        // 0x58813FA6: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58813FAC: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x33
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58813FB1: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xA1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58813FB6: cmp dword ptr [eax + 0x164], 0x50
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x50
        // 0x58813FBD: jle 0x58813fd5
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58813FBF: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58813FC5: je 0x58813fd5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58813FC7: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58813FCD: mov eax, dword ptr [eax + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58813FD3: jmp 0x58813fd7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58813FD5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58813FD7: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58813FDD: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58813FE0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58813FE2: je 0x5881400c
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58813FE4: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58813FE7: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58813FEA: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58813FED: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58813FF0: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58813FF3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58813FF5: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58813FF8: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58813FFA: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58813FFD: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58814000: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58814003: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58814006: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58814009: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5881400C: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814012: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814017: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x5881401A: test byte ptr [esi + 0xb4], al
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814020: je 0x58814077
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x58814022: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814028: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881402C: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814032: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814036: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881403C: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814040: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814046: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881404A: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814050: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814054: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881405A: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881405E: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814064: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814069: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5881406D: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814073: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58814077: test byte ptr [esi + 0xb4], 2
        __asm _emit 0xF6
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5881407E: je 0x588140d5
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x58814080: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814086: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881408A: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814090: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814094: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881409A: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881409E: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588140A4: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588140A8: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588140AE: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588140B2: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588140B8: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588140BC: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588140C2: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588140C7: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588140CB: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588140D1: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588140D5: test byte ptr [esi + 0xb4], 0x10
        __asm _emit 0xF6
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x588140DC: je 0x58814133
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x588140DE: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588140E4: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588140E9: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588140ED: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588140F3: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588140F7: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588140FD: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814101: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814107: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881410B: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814111: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814115: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881411B: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881411F: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814125: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814129: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881412F: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814133: test byte ptr [esi + 0xb4], 0x20
        __asm _emit 0xF6
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x5881413A: je 0x58814191
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x5881413C: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814142: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814147: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5881414B: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814151: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58814155: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881415B: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881415F: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814165: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814169: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881416F: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814173: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814179: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881417D: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814183: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814187: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881418D: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814191: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814197: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5881419A: mov ecx, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588141A0: mov dl, byte ptr [ecx + 4]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588141A3: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588141A6: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x588141A9: jne 0x588141d3
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x588141AB: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588141B1: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588141B5: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588141BB: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588141BF: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588141C5: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588141C9: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588141CF: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588141D3: mov byte ptr [esi + 0x114], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588141D9: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588141DF: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x588141E2: mov edx, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588141E8: mov dl, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x588141EB: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588141EE: xor cl, cl
        __asm _emit 0x32
        __asm _emit 0xC9
        // 0x588141F0: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588141F2: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x588141F5: lea edx, [esi + 0x15c]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588141FB: jne 0x588142d7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814201: mov ebx, 0x474
        __asm _emit 0xBB
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814206: sub ebx, esi
        __asm _emit 0x2B
        __asm _emit 0xDE
        // 0x58814208: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5881420C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58814210: mov edi, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814216: mov edi, dword ptr [edi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881421C: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xFB
        // 0x5881421E: cmp dword ptr [edi + edx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58814222: je 0x588142bd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814228: mov ecx, dword ptr [edx - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0xE0
        // 0x5881422B: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881422F: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814235: mov ecx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881423B: movzx ecx, word ptr [ecx + ebp + 0x244]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814243: mov edi, dword ptr [0x58a24714]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814249: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x03
        // 0x5881424C: cmp dword ptr [edi + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x8F
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814252: jle 0x5881426c
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58814254: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58814256: jl 0x5881426c
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58814258: cmp dword ptr [edi + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881425F: je 0x5881426c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58814261: shl ecx, 6
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x06
        // 0x58814264: add ecx, dword ptr [edi + 0x190]
        __asm _emit 0x03
        __asm _emit 0x8F
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881426A: jmp 0x5881426e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881426C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881426E: mov edi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x3A
        // 0x58814270: mov dword ptr [edi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x54
        // 0x58814273: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58814275: je 0x588142a5
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x58814277: mov ebx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x18
        // 0x5881427A: mov dword ptr [edi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x5881427D: mov ebx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x1C
        // 0x58814280: mov dword ptr [edi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x58814283: mov ebx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x20
        // 0x58814286: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x58814289: mov dword ptr [edi + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x14
        // 0x5881428C: mov ebx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x5881428F: add edi, 0x14
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x14
        // 0x58814292: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x58814295: mov ebx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x58814298: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x08
        // 0x5881429B: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5881429E: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588142A2: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x588142A5: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x588142A7: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588142AB: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x588142AD: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588142B4: mov ecx, dword ptr [edx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x20
        // 0x588142B7: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588142BB: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x588142BD: add ebp, 0xd4
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588142C3: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588142C6: cmp ebp, 0x424
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588142CC: jl 0x58814210
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x3E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588142D2: jmp 0x5881442d
        __asm _emit 0xE9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588142D7: mov edi, 0x71c
        __asm _emit 0xBF
        __asm _emit 0x1C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588142DC: sub edi, esi
        __asm _emit 0x2B
        __asm _emit 0xFE
        // 0x588142DE: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588142E2: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588142E6: jmp 0x588142f0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x588142F0..0x5881447F; 399 mapped bytes.
extern "C" __declspec(naked) void FUN_58813f10_segment_01() {
    __asm {
        // 0x588142F0: mov ebx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588142F6: mov ebx, dword ptr [ebx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x9B
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588142FC: add ebx, edi
        __asm _emit 0x03
        __asm _emit 0xDF
        // 0x588142FE: cmp dword ptr [ebx + edx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58814302: je 0x58814414
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814308: mov ecx, dword ptr [edx - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0xE0
        // 0x5881430B: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881430F: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814315: mov ecx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881431B: movzx ecx, word ptr [ecx + ebp + 0x270]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0x29
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814323: mov edi, dword ptr [0x58a24714]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814329: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x03
        // 0x5881432C: cmp dword ptr [edi + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x8F
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814332: jle 0x5881434c
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58814334: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58814336: jl 0x5881434c
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58814338: cmp dword ptr [edi + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881433F: je 0x5881434c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58814341: shl ecx, 6
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x06
        // 0x58814344: add ecx, dword ptr [edi + 0x190]
        __asm _emit 0x03
        __asm _emit 0x8F
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881434A: jmp 0x5881434e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881434C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881434E: mov edi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x3A
        // 0x58814350: mov dword ptr [edi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x54
        // 0x58814353: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58814355: je 0x5881437f
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58814357: mov ebx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x18
        // 0x5881435A: mov dword ptr [edi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x5881435D: mov ebx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x1C
        // 0x58814360: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x58814363: mov dword ptr [edi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x58814366: mov ebx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x19
        // 0x58814368: add edi, 0x14
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x14
        // 0x5881436B: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x5881436D: mov ebx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x58814370: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x58814373: mov ebx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x58814376: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x08
        // 0x58814379: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5881437C: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x5881437F: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x58814381: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814385: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x58814387: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5881438B: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814392: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814398: mov ecx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881439E: movzx ecx, word ptr [ecx + ebp + 0x270]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0x29
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588143A6: lea ecx, [edi + ecx*8 + 0x1c4]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0xCF
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588143AD: mov edi, dword ptr [0x58a24714]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588143B3: cmp dword ptr [edi + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x8F
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588143B9: jle 0x588143d3
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588143BB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588143BD: jl 0x588143d3
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588143BF: cmp dword ptr [edi + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588143C6: je 0x588143d3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588143C8: mov edi, dword ptr [edi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588143CE: mov ecx, dword ptr [edi + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x8F
        // 0x588143D1: jmp 0x588143d5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588143D3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588143D5: mov edi, dword ptr [edx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x20
        // 0x588143D8: mov dword ptr [edi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x588143DB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588143DD: je 0x58814407
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588143DF: mov ebx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x588143E2: mov dword ptr [edi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x588143E5: mov ebx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x14
        // 0x588143E8: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x588143EB: mov dword ptr [edi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x588143EE: mov ebx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x19
        // 0x588143F0: add edi, 0x14
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x14
        // 0x588143F3: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588143F5: mov ebx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x588143F8: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x588143FB: mov ebx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x588143FE: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x08
        // 0x58814401: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x58814404: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58814407: mov ecx, dword ptr [edx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x20
        // 0x5881440A: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881440E: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58814412: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x58814414: add dword ptr [esp + 0x10], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58814418: add ebp, 0xd4
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881441E: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x58814421: cmp ebp, 0x6a0
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0xA0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814427: jl 0x588142f0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xC3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881442D: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5881442F: je 0x58814477
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x58814431: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814437: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881443B: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814441: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814445: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881444B: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881444F: mov ecx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814455: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814459: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881445F: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58814463: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814469: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5881446D: mov esi, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814473: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58814477: pop edi
        __asm _emit 0x5F
        // 0x58814478: pop esi
        __asm _emit 0x5E
        // 0x58814479: pop ebp
        __asm _emit 0x5D
        // 0x5881447A: pop ebx
        __asm _emit 0x5B
        // 0x5881447B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5881447E: ret
        __asm _emit 0xC3
    }
}
