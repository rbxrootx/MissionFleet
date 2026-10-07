// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1893 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_58809af0.

// Ghidra body range 0x58809AF0..0x58809B79; 137 mapped bytes.
extern "C" __declspec(naked) void FUN_58809af0_segment_00() {
    __asm {
        // 0x58809AF0: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x58809AF3: push ebx
        __asm _emit 0x53
        // 0x58809AF4: push ebp
        __asm _emit 0x55
        // 0x58809AF5: push esi
        __asm _emit 0x56
        // 0x58809AF6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58809AF8: push edi
        __asm _emit 0x57
        // 0x58809AF9: lea eax, [esi + 0x3c8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809AFF: mov edi, 4
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809B04: mov ecx, dword ptr [eax - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xF0
        // 0x58809B07: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809B0C: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58809B10: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58809B12: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58809B16: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58809B19: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58809B1D: mov ecx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x58809B20: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58809B24: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58809B27: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x58809B29: jne 0x58809b04
        __asm _emit 0x75
        __asm _emit 0xD9
        // 0x58809B2B: mov eax, dword ptr [esi + 0x3f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809B31: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x58809B33: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58809B37: mov eax, dword ptr [esi + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809B3D: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58809B41: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58809B44: mov ecx, dword ptr [esi + 0x42c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809B4A: add eax, 0xf3
        __asm _emit 0x05
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809B4F: push eax
        __asm _emit 0x50
        // 0x58809B50: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x98
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58809B55: mov eax, dword ptr [esi + 0x42c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809B5B: mov edi, 0xf
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809B60: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58809B64: mov eax, dword ptr [esi + 0x430]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809B6A: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58809B6E: lea ecx, [esi + 0x2f4]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809B74: lea edx, [ebx + 0x1f]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x1F
        // 0x58809B77: jmp 0x58809b80
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x58809B80..0x5880A25C; 1756 mapped bytes.
extern "C" __declspec(naked) void FUN_58809af0_segment_01() {
    __asm {
        // 0x58809B80: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58809B82: mov ebp, 0xfffe
        __asm _emit 0xBD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809B87: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58809B8B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58809B8E: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x58809B90: jne 0x58809b80
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x58809B92: mov eax, dword ptr [0x58a2469c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58809B97: cmp dword ptr [eax + 0x164], 5
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x58809B9E: jle 0x58809bb3
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58809BA0: cmp dword ptr [eax + 0x18c], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809BA6: je 0x58809bb3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58809BA8: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809BAE: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x58809BB1: jmp 0x58809bb5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58809BB3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58809BB5: mov ecx, dword ptr [esi + 0x408]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809BBB: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58809BBE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58809BC0: je 0x58809bea
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58809BC2: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58809BC5: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58809BC8: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58809BCB: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58809BCE: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58809BD1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58809BD3: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58809BD6: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58809BD8: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58809BDB: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58809BDE: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58809BE1: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58809BE4: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58809BE7: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58809BEA: mov eax, dword ptr [0x58a2469c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58809BEF: cmp dword ptr [eax + 0x164], 6
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x58809BF6: jle 0x58809c0c
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58809BF8: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809BFF: je 0x58809c0c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58809C01: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809C07: mov eax, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x58809C0A: jmp 0x58809c0e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58809C0C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58809C0E: mov ecx, dword ptr [esi + 0x40c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809C14: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58809C17: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58809C19: je 0x58809c44
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58809C1B: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58809C1E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58809C21: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58809C24: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58809C27: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58809C2A: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58809C2D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58809C30: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58809C32: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58809C35: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58809C38: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58809C3B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58809C3E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58809C41: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58809C44: mov eax, dword ptr [esi + 0x904]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809C4A: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58809C4C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58809C50: mov eax, dword ptr [esi + 0x908]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809C56: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58809C58: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58809C5C: mov ecx, dword ptr [0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58809C62: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58809C64: test byte ptr [ecx + 0x64], bl
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x64
        // 0x58809C67: je 0x58809c75
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58809C69: mov eax, dword ptr [esi + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809C6F: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58809C73: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x58809C75: mov edx, dword ptr [0x58a0b1c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58809C7B: test byte ptr [edx + 0x64], bl
        __asm _emit 0x84
        __asm _emit 0x5A
        __asm _emit 0x64
        // 0x58809C7E: je 0x58809c8d
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58809C80: mov ecx, dword ptr [esi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809C87: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x58809C8B: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58809C8D: mov ecx, dword ptr [0x58a0b1cc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xCC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58809C93: test byte ptr [ecx + 0x64], bl
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x64
        // 0x58809C96: je 0x58809ca5
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58809C98: mov ecx, dword ptr [esi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809C9F: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x58809CA3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58809CA5: mov edx, dword ptr [0x58a0b1d0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58809CAB: test byte ptr [edx + 0x64], bl
        __asm _emit 0x84
        __asm _emit 0x5A
        __asm _emit 0x64
        // 0x58809CAE: je 0x58809cbd
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58809CB0: mov ecx, dword ptr [esi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809CB7: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x58809CBB: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58809CBD: mov ecx, dword ptr [0x58a0b1d4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58809CC3: test byte ptr [ecx + 0x64], bl
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x64
        // 0x58809CC6: je 0x58809cd5
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58809CC8: mov ecx, dword ptr [esi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809CCF: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x58809CD3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58809CD5: mov edx, dword ptr [0x58a0b1d8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58809CDB: test byte ptr [edx + 0x64], bl
        __asm _emit 0x84
        __asm _emit 0x5A
        __asm _emit 0x64
        // 0x58809CDE: je 0x58809ced
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58809CE0: mov ecx, dword ptr [esi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809CE7: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x58809CEB: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58809CED: mov ecx, dword ptr [0x58a0b1dc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xDC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58809CF3: test byte ptr [ecx + 0x64], bl
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x64
        // 0x58809CF6: je 0x58809d05
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58809CF8: mov ecx, dword ptr [esi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809CFF: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x58809D03: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58809D05: mov edx, dword ptr [0x58a0b1e0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xE0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58809D0B: test byte ptr [edx + 0x64], bl
        __asm _emit 0x84
        __asm _emit 0x5A
        __asm _emit 0x64
        // 0x58809D0E: je 0x58809d1b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58809D10: mov eax, dword ptr [esi + eax*4 + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809D17: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58809D1B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58809D1F: mov eax, dword ptr [ebx*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x9D
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58809D26: mov ebp, dword ptr [eax + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x58
        // 0x58809D29: movzx eax, byte ptr [esi + 0x4fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809D30: lea ecx, [ebx + ebx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x5B
        // 0x58809D33: lea edi, [esi + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0xCE
        // 0x58809D36: mov ecx, dword ptr [esi + 0x3e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809D3C: mov dword ptr [esi + 0x6c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809D43: movzx edx, byte ptr [edi + 0x43c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x97
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809D4A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58809D4C: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x58809D4F: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58809D51: push eax
        __asm _emit 0x50
        // 0x58809D52: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x49
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58809D57: movzx ecx, byte ptr [edi + 0x43d]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8F
        __asm _emit 0x3D
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809D5E: movzx eax, byte ptr [esi + 0x4fd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0xFD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809D65: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58809D67: mov ecx, dword ptr [esi + 0x3ec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809D6D: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x58809D70: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58809D72: push edx
        __asm _emit 0x52
        // 0x58809D73: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x49
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58809D78: movzx ecx, byte ptr [edi + 0x43e]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8F
        __asm _emit 0x3E
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809D7F: movzx eax, byte ptr [esi + 0x4fe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809D86: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58809D88: mov ecx, dword ptr [esi + 0x3f0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809D8E: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x58809D91: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58809D93: push edx
        __asm _emit 0x52
        // 0x58809D94: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x49
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58809D99: movzx ecx, byte ptr [edi + 0x43f]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8F
        __asm _emit 0x3F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809DA0: movzx eax, byte ptr [esi + 0x4ff]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0xFF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809DA7: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58809DA9: mov ecx, dword ptr [esi + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809DAF: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x58809DB2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58809DB4: push edx
        __asm _emit 0x52
        // 0x58809DB5: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x49
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58809DBA: movzx ecx, byte ptr [edi + 0x43c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8F
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809DC1: movzx eax, byte ptr [esi + 0x4fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809DC8: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58809DCA: mov ecx, dword ptr [esi + 0x3c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809DD0: push eax
        __asm _emit 0x50
        // 0x58809DD1: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xD5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58809DD6: movzx edx, byte ptr [esi + 0x4fd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0xFD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809DDD: movzx eax, byte ptr [edi + 0x43d]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x3D
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809DE4: mov ecx, dword ptr [esi + 0x3cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809DEA: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58809DEC: push edx
        __asm _emit 0x52
        // 0x58809DED: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xD5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58809DF2: movzx ecx, byte ptr [esi + 0x4fe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0xFE
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809DF9: movzx edx, byte ptr [edi + 0x43e]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x97
        __asm _emit 0x3E
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E00: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58809E02: push ecx
        __asm _emit 0x51
        // 0x58809E03: mov ecx, dword ptr [esi + 0x3d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E09: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xD5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58809E0E: movzx ecx, byte ptr [edi + 0x43f]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8F
        __asm _emit 0x3F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E15: movzx eax, byte ptr [esi + 0x4ff]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0xFF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E1C: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58809E1E: mov ecx, dword ptr [esi + 0x3d4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E24: push eax
        __asm _emit 0x50
        // 0x58809E25: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xD5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58809E2A: mov ecx, dword ptr [esi + 0x3d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E30: lea ebp, [ebp + ebp*4]
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0xAD
        __asm _emit 0x00
        // 0x58809E34: add ebp, ebp
        __asm _emit 0x03
        __asm _emit 0xED
        // 0x58809E36: push ebp
        __asm _emit 0x55
        // 0x58809E37: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58809E39: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x49
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58809E3E: mov ecx, dword ptr [esi + 0x3dc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E44: push ebp
        __asm _emit 0x55
        // 0x58809E45: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58809E47: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x49
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58809E4C: mov ecx, dword ptr [esi + 0x3e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E52: push ebp
        __asm _emit 0x55
        // 0x58809E53: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58809E55: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x49
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58809E5A: mov ecx, dword ptr [esi + 0x3e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E60: push ebp
        __asm _emit 0x55
        // 0x58809E61: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58809E63: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x49
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58809E68: movzx eax, byte ptr [edi + 0x43c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E6F: mov ecx, dword ptr [esi + 0x3d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E75: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x58809E78: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58809E7A: push edx
        __asm _emit 0x52
        // 0x58809E7B: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x48
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58809E80: movzx eax, byte ptr [edi + 0x43d]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x3D
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E87: mov ecx, dword ptr [esi + 0x3dc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E8D: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x58809E90: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58809E92: push eax
        __asm _emit 0x50
        // 0x58809E93: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x48
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58809E98: movzx eax, byte ptr [edi + 0x43e]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x3E
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809E9F: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x58809EA2: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x58809EA4: push ecx
        __asm _emit 0x51
        // 0x58809EA5: mov ecx, dword ptr [esi + 0x3e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809EAB: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x48
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58809EB0: movzx eax, byte ptr [edi + 0x43f]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x3F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809EB7: mov ecx, dword ptr [esi + 0x3e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809EBD: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x58809EC0: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58809EC2: push edx
        __asm _emit 0x52
        // 0x58809EC3: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x48
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58809EC8: movzx eax, byte ptr [edi + 0x43c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809ECF: mov ecx, dword ptr [esi + 0x3b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809ED5: push eax
        __asm _emit 0x50
        // 0x58809ED6: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xD4
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58809EDB: movzx ecx, byte ptr [edi + 0x43d]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8F
        __asm _emit 0x3D
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809EE2: push ecx
        __asm _emit 0x51
        // 0x58809EE3: mov ecx, dword ptr [esi + 0x3bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809EE9: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xD4
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58809EEE: movzx edx, byte ptr [edi + 0x43e]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x97
        __asm _emit 0x3E
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809EF5: mov ecx, dword ptr [esi + 0x3c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809EFB: push edx
        __asm _emit 0x52
        // 0x58809EFC: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xD4
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58809F01: movzx eax, byte ptr [edi + 0x43f]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x3F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809F08: mov ecx, dword ptr [esi + 0x3c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809F0E: push eax
        __asm _emit 0x50
        // 0x58809F0F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xD4
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58809F14: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58809F17: mov edx, dword ptr [edi + 0x440]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809F1D: add ecx, 0x181
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809F23: cmp edx, dword ptr [edi + 0x444]
        __asm _emit 0x3B
        __asm _emit 0x97
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809F29: je 0x58809f5c
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x58809F2B: mov edx, dword ptr [edi + 0x444]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809F31: mov edi, dword ptr [edi + 0x440]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809F37: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58809F39: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58809F3B: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58809F3E: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58809F40: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58809F42: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x58809F44: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58809F46: imul edx, edx, 0x68
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x68
        // 0x58809F49: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58809F4E: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58809F50: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58809F53: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58809F55: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58809F58: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58809F5A: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x58809F5C: push ecx
        __asm _emit 0x51
        // 0x58809F5D: mov ecx, dword ptr [esi + 0x3f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809F63: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x93
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58809F68: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58809F6E: mov edi, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x58809F71: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58809F77: mov ebp, dword ptr [ecx + 0x10a14]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58809F7D: mov dword ptr [esp + 0x18], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809F85: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58809F87: je 0x58809fb7
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x58809F89: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809F90: movzx eax, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809F97: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58809F99: je 0x58809fa6
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58809F9B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58809F9D: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xC7
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58809FA2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58809FA4: jne 0x58809faf
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58809FA6: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x58809FA9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58809FAB: jne 0x58809f90
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x58809FAD: jmp 0x58809fb7
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58809FAF: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809FB7: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58809FB9: cmp dword ptr [esi + 0xd0], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809FBF: jle 0x58809fdb
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x58809FC1: lea ebp, [esi + 0xd4]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809FC7: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58809FCA: call 0x588c6510
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xC5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58809FCF: inc edi
        __asm _emit 0x47
        // 0x58809FD0: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58809FD3: cmp edi, dword ptr [esi + 0xd0]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809FD9: jl 0x58809fc7
        __asm _emit 0x7C
        __asm _emit 0xEC
        // 0x58809FDB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58809FDD: cmp dword ptr [esi + 0x74], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58809FE0: jle 0x58809ff9
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58809FE2: lea ebp, [esi + 0x2d4]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809FE8: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58809FEB: call 0x588c6510
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xC5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58809FF0: inc edi
        __asm _emit 0x47
        // 0x58809FF1: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58809FF4: cmp edi, dword ptr [esi + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58809FF7: jl 0x58809fe8
        __asm _emit 0x7C
        __asm _emit 0xEF
        // 0x58809FF9: mov ecx, dword ptr [esi + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809FFF: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x5880A002: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x5880A005: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880A00B: mov edi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x5880A00E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880A010: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880A014: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5880A016: je 0x5880a252
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A01C: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880A022: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880A026: lea ebp, [esi + 0xd4]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A02C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5880A030: cmp dword ptr [edi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A037: jne 0x5880a247
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A03D: movzx eax, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A044: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5880A046: jne 0x5880a247
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A04C: cmp dword ptr [ecx + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A053: je 0x5880a064
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5880A055: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880A05B: cmp edi, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x5880A05E: je 0x5880a247
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A064: mov edx, dword ptr [edi + 0x1270]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A06A: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880A070: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880A075: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5880A077: movzx eax, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A07E: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5880A080: mov edx, dword ptr [ecx + 0x10a14]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880A086: shr ebx, 5
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5880A089: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880A08D: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5880A08F: jne 0x5880a0b7
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x5880A091: cmp dword ptr [ecx + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xB0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A098: je 0x5880a0ac
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5880A09A: mov eax, dword ptr [ecx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880A0A0: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x5880A0A3: cmp dword ptr [eax + 0x134], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A0AA: jne 0x5880a0ee
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x5880A0AC: lea eax, [ebx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1B
        // 0x5880A0AF: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880A0B3: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5880A0B5: jmp 0x5880a0ee
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x5880A0B7: movzx eax, word ptr [ecx + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880A0BE: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5880A0C2: je 0x5880a0ee
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5880A0C4: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5880A0C8: je 0x5880a0ee
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5880A0CA: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5880A0CE: je 0x5880a0ee
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5880A0D0: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5880A0D4: je 0x5880a0ee
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5880A0D6: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x5880A0DA: je 0x5880a0ee
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5880A0DC: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x5880A0E0: je 0x5880a0ee
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880A0E2: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x5880A0E6: je 0x5880a0ee
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880A0E8: shr ebx, 1
        __asm _emit 0xD1
        __asm _emit 0xEB
        // 0x5880A0EA: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880A0EE: movzx eax, word ptr [ecx + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880A0F5: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5880A0F9: je 0x5880a11f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5880A0FB: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5880A0FF: je 0x5880a11f
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5880A101: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5880A105: je 0x5880a11f
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5880A107: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5880A10B: je 0x5880a11f
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5880A10D: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x5880A111: je 0x5880a11f
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880A113: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x5880A117: je 0x5880a11f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880A119: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x5880A11D: jne 0x5880a171
        __asm _emit 0x75
        __asm _emit 0x52
        // 0x5880A11F: movzx eax, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A126: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5880A128: jne 0x5880a171
        __asm _emit 0x75
        __asm _emit 0x47
        // 0x5880A12A: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5880A12F: je 0x5880a171
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x5880A131: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5880A135: fild dword ptr [esp + 0x20]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5880A139: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5880A13B: jge 0x5880a143
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880A13D: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880A143: fmul qword ptr [0x5898d780]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880A149: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880A14D: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880A152: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A157: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5880A15B: fldcw word ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5880A15F: fistp qword ptr [esp + 0x20]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5880A163: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5880A167: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5880A169: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880A16D: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880A171: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x5880A173: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880A175: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5880A177: call 0x588d6c40
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xCA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5880A17C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880A17E: je 0x5880a1a8
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5880A180: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x5880A182: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5880A184: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5880A186: call 0x588d6c40
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xCA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5880A18B: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x5880A18D: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5880A18F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880A191: imul ebx, ebx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xDB
        __asm _emit 0x64
        // 0x5880A194: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5880A196: call 0x588d6c40
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xCA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5880A19B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5880A19D: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5880A19F: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880A1A3: cdq
        __asm _emit 0x99
        // 0x5880A1A4: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5880A1A6: jmp 0x5880a1aa
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880A1A8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880A1AA: mov edx, dword ptr [edi + 0x6650]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x50
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A1B0: mov ecx, dword ptr [edi + 0x126c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x6C
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A1B6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880A1B8: push edx
        __asm _emit 0x52
        // 0x5880A1B9: push eax
        __asm _emit 0x50
        // 0x5880A1BA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880A1C0: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880A1C5: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5880A1C7: mov eax, dword ptr [edi + 0x1268]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A1CD: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5880A1D1: push ebx
        __asm _emit 0x53
        // 0x5880A1D2: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5880A1D6: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5880A1D9: push edx
        __asm _emit 0x52
        // 0x5880A1DA: mov edx, dword ptr [edi + 0x1264]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A1E0: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880A1E6: push edx
        __asm _emit 0x52
        // 0x5880A1E7: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880A1EC: push eax
        __asm _emit 0x50
        // 0x5880A1ED: mov eax, dword ptr [edi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A1F3: push ebx
        __asm _emit 0x53
        // 0x5880A1F4: push ecx
        __asm _emit 0x51
        // 0x5880A1F5: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x5880A1F8: lea edx, [edi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A1FE: push edx
        __asm _emit 0x52
        // 0x5880A1FF: push ecx
        __asm _emit 0x51
        // 0x5880A200: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5880A203: call 0x588c66c0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880A208: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5880A20C: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5880A20F: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x5880A211: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880A213: push edx
        __asm _emit 0x52
        // 0x5880A214: call 0x588c6830
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xC6
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880A219: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5880A21C: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880A220: lea edx, [ecx + eax + 0x123]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A227: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5880A22A: push edx
        __asm _emit 0x52
        // 0x5880A22B: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x91
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880A230: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880A236: inc ebx
        __asm _emit 0x43
        // 0x5880A237: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880A23B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5880A23F: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5880A242: add dword ptr [esp + 0x14], 0xe
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x0E
        // 0x5880A247: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x5880A24A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5880A24C: jne 0x5880a030
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDE
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880A252: pop edi
        __asm _emit 0x5F
        // 0x5880A253: pop esi
        __asm _emit 0x5E
        // 0x5880A254: pop ebp
        __asm _emit 0x5D
        // 0x5880A255: pop ebx
        __asm _emit 0x5B
        // 0x5880A256: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5880A259: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
