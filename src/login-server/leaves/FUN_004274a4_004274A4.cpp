// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004274A4 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_004274a4_004274A4() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        ; Exact mapped bytes BF FF 07 00 00: mov edi, 0x7ff
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 25 00 80 00 00: and eax, 0x8000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E9 04: shr ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 23 CF: and ecx, edi
        __asm _emit 0x23
        __asm _emit 0xcf
        ; Exact mapped bytes 89 45 0C: mov dword ptr [ebp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 8B 12: mov edx, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x12
        ; Exact mapped bytes 0F B7 D9: movzx ebx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd9
        ; Exact mapped bytes BE 00 00 00 80: mov esi, 0x80000000
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 25 FF FF 0F 00: and eax, 0xfffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 89 75 FC: mov dword ptr [ebp - 4], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xfc
        ; Exact mapped bytes 74 13: je 0x4274f2
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 3B DF: cmp ebx, edi
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 74 08: je 0x4274eb
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8D B9 00 3C 00 00: lea edi, [ecx + 0x3c00]
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 28: jmp 0x427513
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes BF FF 7F 00 00: mov edi, 0x7fff
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x427513
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 12: jne 0x42750a
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 75 0E: jne 0x42750a
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 89 58 04: mov dword ptr [eax + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes 89 18: mov dword ptr [eax], ebx
        __asm _emit 0x89
        __asm _emit 0x18
        ; Exact mapped bytes 66 89 58 08: mov word ptr [eax + 8], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes EB 4B: jmp 0x427555
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes 8D B9 01 3C 00 00: lea edi, [ecx + 0x3c01]
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5D FC: mov dword ptr [ebp - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 15: shr ecx, 0x15
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x15
        ; Exact mapped bytes C1 E0 0B: shl eax, 0xb
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x0b
        ; Exact mapped bytes 0B C8: or ecx, eax
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 0B 4D FC: or ecx, dword ptr [ebp - 4]
        __asm _emit 0x0b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes C1 E2 0B: shl edx, 0xb
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x0b
        ; Exact mapped bytes 89 48 04: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 89 10: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes 85 CE: test esi, ecx
        __asm _emit 0x85
        __asm _emit 0xce
        ; Exact mapped bytes 75 1D: jne 0x42754c
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes C1 EB 1F: shr ebx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 0B D9: or ebx, ecx
        __asm _emit 0x0b
        __asm _emit 0xd9
        ; Exact mapped bytes 8D 0C 12: lea ecx, [edx + edx]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x12
        ; Exact mapped bytes 89 08: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 89 58 04: mov dword ptr [eax + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes 81 C7 FF FF 00 00: add edi, 0xffff
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes EB DF: jmp 0x42752b
        __asm _emit 0xeb
        __asm _emit 0xdf
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 0B CF: or ecx, edi
        __asm _emit 0x0b
        __asm _emit 0xcf
        ; Exact mapped bytes 66 89 48 08: mov word ptr [eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
