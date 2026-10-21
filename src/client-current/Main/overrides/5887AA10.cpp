// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887AA10 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_5887aa10_segment_00() {
    __asm {
        ; Exact mapped bytes 0F BF 44 24 04: movsx eax, word ptr [esp + 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 0F 84 F6 01 00 00: je 0x5887ac1b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x5887ab16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 81 44 02 00 00: lea eax, [ecx + 0x244]
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 7A 04: lea edi, [edx + 4]
        __asm _emit 0x8d
        __asm _emit 0x7a
        __asm _emit 0x04
        ; Exact mapped bytes EB 08: jmp 0x5887aa40
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887AA40 .. +0x1ED bytes.
extern "C" __declspec(naked) void FUN_5887aa10_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 30: mov esi, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x30
        ; Exact mapped bytes BB FD FF 00 00: mov ebx, 0xfffd
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 5E 24: and word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x24
        ; Exact mapped bytes 8B 30: mov esi, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x30
        ; Exact mapped bytes BB FE FF 00 00: mov ebx, 0xfffe
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 5E 24: and word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
        ; Exact mapped bytes 75 E3: jne 0x5887aa40
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes 8B 81 58 02 00 00: mov eax, dword ptr [ecx + 0x258]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 81 58 02 00 00: mov eax, dword ptr [ecx + 0x258]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BE FD FF 00 00: mov esi, 0xfffd
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 81 5C 02 00 00: mov eax, dword ptr [ecx + 0x25c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 81 5C 02 00 00: mov eax, dword ptr [ecx + 0x25c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BE FD FF 00 00: mov esi, 0xfffd
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 81 60 02 00 00: mov eax, dword ptr [ecx + 0x260]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 81 60 02 00 00: mov eax, dword ptr [ecx + 0x260]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BE FD FF 00 00: mov esi, 0xfffd
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 48 01 00 00: mov esi, dword ptr [ecx + 0x148]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 02 00 00 00: mov eax, 2
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 48 01 00 00: mov esi, dword ptr [ecx + 0x148]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 3C 01 00 00: mov esi, dword ptr [ecx + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 3C 01 00 00: mov esi, dword ptr [ecx + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 81 C1 40 01 00 00: add ecx, 0x140
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 71 0C: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0c
        ; Exact mapped bytes BF FD FF 00 00: mov edi, 0xfffd
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B 71 0C: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0c
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B 31: mov esi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x31
        ; Exact mapped bytes BF FD FF 00 00: mov edi, 0xfffd
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B 31: mov esi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x31
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 D1: jne 0x5887aae1
        __asm _emit 0x75
        __asm _emit 0xd1
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8D B1 44 02 00 00: lea esi, [ecx + 0x244]
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 05 00 00 00: mov ebx, 5
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 02 00 00 00: mov eax, 2
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3E: mov edi, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x3e
        ; Exact mapped bytes 66 09 47 24: or word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes 8B 3E: mov edi, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x3e
        ; Exact mapped bytes 66 09 57 24: or word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x57
        __asm _emit 0x24
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 2B DA: sub ebx, edx
        __asm _emit 0x2b
        __asm _emit 0xda
        ; Exact mapped bytes 75 ED: jne 0x5887ab26
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 8B B1 58 02 00 00: mov esi, dword ptr [ecx + 0x258]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 58 02 00 00: mov esi, dword ptr [ecx + 0x258]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 5C 02 00 00: mov esi, dword ptr [ecx + 0x25c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 5C 02 00 00: mov esi, dword ptr [ecx + 0x25c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 60 02 00 00: mov esi, dword ptr [ecx + 0x260]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 60 02 00 00: mov esi, dword ptr [ecx + 0x260]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 48 01 00 00: mov esi, dword ptr [ecx + 0x148]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FD FF 00 00: mov edi, 0xfffd
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 48 01 00 00: mov esi, dword ptr [ecx + 0x148]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 3C 01 00 00: mov esi, dword ptr [ecx + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FD FF 00 00: mov edi, 0xfffd
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 3C 01 00 00: mov esi, dword ptr [ecx + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 4C 01 00 00: mov esi, dword ptr [ecx + 0x14c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FD FF 00 00: mov edi, 0xfffd
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 4C 01 00 00: mov esi, dword ptr [ecx + 0x14c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 40 01 00 00: mov esi, dword ptr [ecx + 0x140]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FD FF 00 00: mov edi, 0xfffd
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 40 01 00 00: mov esi, dword ptr [ecx + 0x140]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 50 01 00 00: mov esi, dword ptr [ecx + 0x150]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 50 01 00 00: mov esi, dword ptr [ecx + 0x150]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 44 01 00 00: mov esi, dword ptr [ecx + 0x144]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 89 44 01 00 00: mov ecx, dword ptr [ecx + 0x144]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8D B1 44 02 00 00: lea esi, [ecx + 0x244]
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 05 00 00 00: mov ebx, 5
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 02 00 00 00: mov eax, 2
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x5887ac30
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887AC30 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_5887aa10_segment_02() {
    __asm {
        ; Exact mapped bytes 8B 3E: mov edi, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x3e
        ; Exact mapped bytes 66 09 47 24: or word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes 8B 3E: mov edi, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x3e
        ; Exact mapped bytes 66 09 57 24: or word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x57
        __asm _emit 0x24
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 2B DA: sub ebx, edx
        __asm _emit 0x2b
        __asm _emit 0xda
        ; Exact mapped bytes 75 ED: jne 0x5887ac30
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 8B B1 58 02 00 00: mov esi, dword ptr [ecx + 0x258]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 58 02 00 00: mov esi, dword ptr [ecx + 0x258]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 5C 02 00 00: mov esi, dword ptr [ecx + 0x25c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 5C 02 00 00: mov esi, dword ptr [ecx + 0x25c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 60 02 00 00: mov esi, dword ptr [ecx + 0x260]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 60 02 00 00: mov esi, dword ptr [ecx + 0x260]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 48 01 00 00: mov esi, dword ptr [ecx + 0x148]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FD FF 00 00: mov edi, 0xfffd
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 48 01 00 00: mov esi, dword ptr [ecx + 0x148]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 3C 01 00 00: mov esi, dword ptr [ecx + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FD FF 00 00: mov edi, 0xfffd
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 3C 01 00 00: mov esi, dword ptr [ecx + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 4C 01 00 00: mov esi, dword ptr [ecx + 0x14c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 4C 01 00 00: mov esi, dword ptr [ecx + 0x14c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B B1 40 01 00 00: mov esi, dword ptr [ecx + 0x140]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 81 40 01 00 00: mov eax, dword ptr [ecx + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 81 50 01 00 00: mov eax, dword ptr [ecx + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FD FF 00 00: mov edx, 0xfffd
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 81 50 01 00 00: mov eax, dword ptr [ecx + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 81 44 01 00 00: mov eax, dword ptr [ecx + 0x144]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FD FF 00 00: mov edx, 0xfffd
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 89 44 01 00 00: mov ecx, dword ptr [ecx + 0x144]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
