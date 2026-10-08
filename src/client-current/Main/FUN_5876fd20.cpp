// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 956 bytes in 3 exact ranges.
// Source symbol alias: FUN_5876fd20.

// Ghidra body range 0x5876FD20..0x5876FF1D; 509 mapped bytes.
extern "C" __declspec(naked) void FUN_5876fd20_segment_00() {
    __asm {
        // 0x5876FD20: push ebx
        __asm _emit 0x53
        // 0x5876FD21: push ebp
        __asm _emit 0x55
        // 0x5876FD22: push esi
        __asm _emit 0x56
        // 0x5876FD23: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876FD25: movzx ecx, byte ptr [esi + 0x7a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x7A
        // 0x5876FD29: mov al, byte ptr [esi + 0x78]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5876FD2C: inc al
        __asm _emit 0xFE
        __asm _emit 0xC0
        // 0x5876FD2E: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5876FD31: push edi
        __asm _emit 0x57
        // 0x5876FD32: je 0x5876ff5e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FD38: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5876FD3B: je 0x5876fdd1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FD41: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5876FD44: jne 0x5876fd5b
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x5876FD46: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x5876FD49: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5876FD4C: je 0x5876fd87
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5876FD4E: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5876FD51: je 0x5876fd65
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5876FD53: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5876FD56: jne 0x5876fd5b
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x5876FD58: mov byte ptr [esi + 0x78], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5876FD5B: pop edi
        __asm _emit 0x5F
        // 0x5876FD5C: pop esi
        __asm _emit 0x5E
        // 0x5876FD5D: pop ebp
        __asm _emit 0x5D
        // 0x5876FD5E: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FD63: pop ebx
        __asm _emit 0x5B
        // 0x5876FD64: ret
        __asm _emit 0xC3
        // 0x5876FD65: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876FD6B: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876FD6E: mov edx, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FD74: pop edi
        __asm _emit 0x5F
        // 0x5876FD75: mov dword ptr [eax + 0x82c], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FD7B: inc byte ptr [esi + 0x78]
        __asm _emit 0xFE
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5876FD7E: pop esi
        __asm _emit 0x5E
        // 0x5876FD7F: pop ebp
        __asm _emit 0x5D
        // 0x5876FD80: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FD85: pop ebx
        __asm _emit 0x5B
        // 0x5876FD86: ret
        __asm _emit 0xC3
        // 0x5876FD87: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876FD8C: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x5876FD8F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876FD91: je 0x5876fdc4
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5876FD93: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5876FD96: mov edx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FD9C: and edx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0xFE
        // 0x5876FD9F: cmp edx, 2
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5876FDA2: je 0x5876fdb8
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5876FDA4: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5876FDA7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876FDA9: jne 0x5876fd93
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5876FDAB: inc byte ptr [esi + 0x78]
        __asm _emit 0xFE
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5876FDAE: pop edi
        __asm _emit 0x5F
        // 0x5876FDAF: pop esi
        __asm _emit 0x5E
        // 0x5876FDB0: pop ebp
        __asm _emit 0x5D
        // 0x5876FDB1: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FDB6: pop ebx
        __asm _emit 0x5B
        // 0x5876FDB7: ret
        __asm _emit 0xC3
        // 0x5876FDB8: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FDBB: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5876FDBE: mov dword ptr [ecx + 0x414], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FDC4: inc byte ptr [esi + 0x78]
        __asm _emit 0xFE
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5876FDC7: pop edi
        __asm _emit 0x5F
        // 0x5876FDC8: pop esi
        __asm _emit 0x5E
        // 0x5876FDC9: pop ebp
        __asm _emit 0x5D
        // 0x5876FDCA: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FDCF: pop ebx
        __asm _emit 0x5B
        // 0x5876FDD0: ret
        __asm _emit 0xC3
        // 0x5876FDD1: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x5876FDD4: dec ecx
        __asm _emit 0x49
        // 0x5876FDD5: cmp ecx, 6
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x5876FDD8: ja 0x5876fd5b
        __asm _emit 0x77
        __asm _emit 0x81
        // 0x5876FDDA: jmp dword ptr [ecx*4 + 0x587700e8]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x77
        __asm _emit 0x58
        // 0x5876FDE1: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876FDE6: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x5876FDE9: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5876FDEB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876FDED: je 0x5877004b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FDF3: mov bl, 0xf
        __asm _emit 0xB3
        __asm _emit 0x0F
        // 0x5876FDF5: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x5876FDF8: movzx ecx, word ptr [edi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4F
        __asm _emit 0x5E
        // 0x5876FDFC: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5876FDFE: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x5876FE01: xor dl, 0xaa
        __asm _emit 0x80
        __asm _emit 0xF2
        __asm _emit 0xAA
        // 0x5876FE04: cmp dl, 0xc
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x5876FE07: jb 0x5876fe3c
        __asm _emit 0x72
        __asm _emit 0x33
        // 0x5876FE09: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xCB
        // 0x5876FE0B: jne 0x5876fe3c
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x5876FE0D: test dword ptr [edi + 0xa4], 0xfffffffe
        __asm _emit 0xF7
        __asm _emit 0x87
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876FE17: jne 0x5876fe3c
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x5876FE19: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5876FE1B: jne 0x5876fe21
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5876FE1D: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x5876FE1F: jmp 0x5876fe3c
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x5876FE21: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5876FE23: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FE28: xor dx, word ptr [ecx + 0x66]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x66
        // 0x5876FE2C: mov edi, 0xaa
        __asm _emit 0xBF
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FE31: xor di, word ptr [ebp + 0x66]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x7D
        __asm _emit 0x66
        // 0x5876FE35: cmp di, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x5876FE38: jae 0x5876fe3c
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x5876FE3A: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5876FE3C: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5876FE3F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876FE41: jne 0x5876fdf5
        __asm _emit 0x75
        __asm _emit 0xB2
        // 0x5876FE43: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5876FE45: je 0x5877004b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FE4B: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876FE4E: mov dword ptr [eax + 0x82c], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FE54: cmp dword ptr [ebp + 0xb8], -1
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x5876FE5B: jne 0x587700bd
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FE61: add byte ptr [esi + 0x78], 2
        __asm _emit 0x80
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x02
        // 0x5876FE65: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876FE68: mov ecx, dword ptr [eax + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FE6E: mov edx, dword ptr [ecx + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FE74: mov dword ptr [eax + 0xc44], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x44
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FE7A: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876FE7D: mov ecx, dword ptr [eax + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FE83: test byte ptr [ecx + 0x24], bl
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x5876FE86: jne 0x5876fd5b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876FE8C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5876FE90: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876FE96: mov ecx, dword ptr [edx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FE9C: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5876FE9E: call 0x58873030
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x31
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5876FEA3: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876FEA6: mov ecx, dword ptr [eax + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FEAC: test byte ptr [ecx + 0x24], bl
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x5876FEAF: je 0x5876fe90
        __asm _emit 0x74
        __asm _emit 0xDF
        // 0x5876FEB1: pop edi
        __asm _emit 0x5F
        // 0x5876FEB2: pop esi
        __asm _emit 0x5E
        // 0x5876FEB3: pop ebp
        __asm _emit 0x5D
        // 0x5876FEB4: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FEB9: pop ebx
        __asm _emit 0x5B
        // 0x5876FEBA: ret
        __asm _emit 0xC3
        // 0x5876FEBB: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876FEBE: mov edx, dword ptr [eax + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FEC4: mov ecx, dword ptr [edx + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FECA: mov dword ptr [eax + 0xc44], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FED0: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876FED3: mov eax, dword ptr [edx + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FED9: mov bl, 0xf
        __asm _emit 0xB3
        __asm _emit 0x0F
        // 0x5876FEDB: test byte ptr [eax + 0x24], bl
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5876FEDE: jne 0x5876ff01
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5876FEE0: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876FEE6: mov ecx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FEEC: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5876FEEE: call 0x58873030
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x31
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5876FEF3: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876FEF6: mov eax, dword ptr [edx + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FEFC: test byte ptr [eax + 0x24], bl
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5876FEFF: je 0x5876fee0
        __asm _emit 0x74
        __asm _emit 0xDF
        // 0x5876FF01: inc byte ptr [esi + 0x78]
        __asm _emit 0xFE
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5876FF04: pop edi
        __asm _emit 0x5F
        // 0x5876FF05: pop esi
        __asm _emit 0x5E
        // 0x5876FF06: pop ebp
        __asm _emit 0x5D
        // 0x5876FF07: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FF0C: pop ebx
        __asm _emit 0x5B
        // 0x5876FF0D: ret
        __asm _emit 0xC3
        // 0x5876FF0E: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876FF14: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x5876FF17: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876FF19: je 0x5876ff51
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5876FF1B: jmp 0x5876ff20
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5876FF20..0x58770079; 345 mapped bytes.
extern "C" __declspec(naked) void FUN_5876fd20_segment_01() {
    __asm {
        // 0x5876FF20: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5876FF23: mov ecx, dword ptr [edx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FF29: and ecx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0xFE
        // 0x5876FF2C: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5876FF2F: je 0x5876ff45
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5876FF31: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5876FF34: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876FF36: jne 0x5876ff20
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5876FF38: inc byte ptr [esi + 0x78]
        __asm _emit 0xFE
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5876FF3B: pop edi
        __asm _emit 0x5F
        // 0x5876FF3C: pop esi
        __asm _emit 0x5E
        // 0x5876FF3D: pop ebp
        __asm _emit 0x5D
        // 0x5876FF3E: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FF43: pop ebx
        __asm _emit 0x5B
        // 0x5876FF44: ret
        __asm _emit 0xC3
        // 0x5876FF45: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876FF48: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5876FF4B: mov dword ptr [edx + 0x105c], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x5C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FF51: inc byte ptr [esi + 0x78]
        __asm _emit 0xFE
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5876FF54: pop edi
        __asm _emit 0x5F
        // 0x5876FF55: pop esi
        __asm _emit 0x5E
        // 0x5876FF56: pop ebp
        __asm _emit 0x5D
        // 0x5876FF57: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FF5C: pop ebx
        __asm _emit 0x5B
        // 0x5876FF5D: ret
        __asm _emit 0xC3
        // 0x5876FF5E: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x5876FF61: dec ecx
        __asm _emit 0x49
        // 0x5876FF62: cmp ecx, 8
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x5876FF65: ja 0x5876fd5b
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xF0
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876FF6B: jmp dword ptr [ecx*4 + 0x58770104]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x77
        __asm _emit 0x58
        // 0x5876FF72: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876FF78: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x5876FF7B: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5876FF7D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876FF7F: je 0x5877004b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FF85: mov bl, 0xf
        __asm _emit 0xB3
        __asm _emit 0x0F
        // 0x5876FF87: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x5876FF8A: movzx ecx, word ptr [edi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4F
        __asm _emit 0x5E
        // 0x5876FF8E: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5876FF90: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x5876FF93: xor dl, 0xaa
        __asm _emit 0x80
        __asm _emit 0xF2
        __asm _emit 0xAA
        // 0x5876FF96: cmp dl, 0xc
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x5876FF99: jb 0x5876ffce
        __asm _emit 0x72
        __asm _emit 0x33
        // 0x5876FF9B: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xCB
        // 0x5876FF9D: jne 0x5876ffce
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x5876FF9F: test dword ptr [edi + 0xa4], 0xfffffffe
        __asm _emit 0xF7
        __asm _emit 0x87
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876FFA9: jne 0x5876ffce
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x5876FFAB: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5876FFAD: jne 0x5876ffb3
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5876FFAF: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x5876FFB1: jmp 0x5876ffce
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x5876FFB3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5876FFB5: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FFBA: xor dx, word ptr [ecx + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x5876FFBE: mov edi, 0xaa
        __asm _emit 0xBF
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FFC3: xor di, word ptr [ebp + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x7D
        __asm _emit 0x64
        // 0x5876FFC7: cmp di, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x5876FFCA: jae 0x5876ffce
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x5876FFCC: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5876FFCE: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5876FFD1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876FFD3: jne 0x5876ff87
        __asm _emit 0x75
        __asm _emit 0xB2
        // 0x5876FFD5: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5876FFD7: je 0x5877004b
        __asm _emit 0x74
        __asm _emit 0x72
        // 0x5876FFD9: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876FFDC: mov dword ptr [eax + 0x82c], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FFE2: cmp dword ptr [ebp + 0xb8], -1
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x5876FFE9: jne 0x587700bd
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FFEF: add byte ptr [esi + 0x78], 2
        __asm _emit 0x80
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x02
        // 0x5876FFF3: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876FFF6: mov ecx, dword ptr [eax + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FFFC: mov edx, dword ptr [ecx + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770002: mov dword ptr [eax + 0xc44], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x44
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770008: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5877000B: mov ecx, dword ptr [eax + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770011: test byte ptr [ecx + 0x24], bl
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x58770014: jne 0x5876fd5b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877001A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770020: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58770026: mov ecx, dword ptr [edx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877002C: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5877002E: call 0x58873030
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x2F
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58770033: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58770036: mov ecx, dword ptr [eax + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877003C: test byte ptr [ecx + 0x24], bl
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x5877003F: je 0x58770020
        __asm _emit 0x74
        __asm _emit 0xDF
        // 0x58770041: pop edi
        __asm _emit 0x5F
        // 0x58770042: pop esi
        __asm _emit 0x5E
        // 0x58770043: pop ebp
        __asm _emit 0x5D
        // 0x58770044: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770049: pop ebx
        __asm _emit 0x5B
        // 0x5877004A: ret
        __asm _emit 0xC3
        // 0x5877004B: pop edi
        __asm _emit 0x5F
        // 0x5877004C: pop esi
        __asm _emit 0x5E
        // 0x5877004D: pop ebp
        __asm _emit 0x5D
        // 0x5877004E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58770050: pop ebx
        __asm _emit 0x5B
        // 0x58770051: ret
        __asm _emit 0xC3
        // 0x58770052: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58770055: mov edx, dword ptr [eax + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877005B: mov ecx, dword ptr [edx + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770061: mov dword ptr [eax + 0xc44], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770067: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5877006A: mov eax, dword ptr [edx + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770070: mov bl, 0xf
        __asm _emit 0xB3
        __asm _emit 0x0F
        // 0x58770072: test byte ptr [eax + 0x24], bl
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58770075: jne 0x587700a1
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x58770077: jmp 0x58770080
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x58770080..0x587700E6; 102 mapped bytes.
extern "C" __declspec(naked) void FUN_5876fd20_segment_02() {
    __asm {
        // 0x58770080: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58770086: mov ecx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877008C: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5877008E: call 0x58873030
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x2F
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58770093: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x58770096: mov eax, dword ptr [edx + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877009C: test byte ptr [eax + 0x24], bl
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5877009F: je 0x58770080
        __asm _emit 0x74
        __asm _emit 0xDF
        // 0x587700A1: inc byte ptr [esi + 0x78]
        __asm _emit 0xFE
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x587700A4: pop edi
        __asm _emit 0x5F
        // 0x587700A5: pop esi
        __asm _emit 0x5E
        // 0x587700A6: pop ebp
        __asm _emit 0x5D
        // 0x587700A7: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587700AC: pop ebx
        __asm _emit 0x5B
        // 0x587700AD: ret
        __asm _emit 0xC3
        // 0x587700AE: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587700B1: mov ecx, dword ptr [eax + 0xc44]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587700B7: mov dword ptr [eax + 0x1474], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587700BD: inc byte ptr [esi + 0x78]
        __asm _emit 0xFE
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x587700C0: pop edi
        __asm _emit 0x5F
        // 0x587700C1: pop esi
        __asm _emit 0x5E
        // 0x587700C2: pop ebp
        __asm _emit 0x5D
        // 0x587700C3: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587700C8: pop ebx
        __asm _emit 0x5B
        // 0x587700C9: ret
        __asm _emit 0xC3
        // 0x587700CA: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587700CD: mov edx, dword ptr [eax + 0x1474]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587700D3: pop edi
        __asm _emit 0x5F
        // 0x587700D4: mov dword ptr [eax + 0x1ca4], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xA4
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587700DA: inc byte ptr [esi + 0x78]
        __asm _emit 0xFE
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x587700DD: pop esi
        __asm _emit 0x5E
        // 0x587700DE: pop ebp
        __asm _emit 0x5D
        // 0x587700DF: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587700E4: pop ebx
        __asm _emit 0x5B
        // 0x587700E5: ret
        __asm _emit 0xC3
    }
}
