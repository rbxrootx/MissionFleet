// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 210 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887BD30 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_5887bd30_segment_00() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 8E 44 02 00 00: mov ecx, dword ptr [esi + 0x244]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 88 00 00 00: mov edx, dword ptr [ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D AE 44 02 00 00: lea ebp, [esi + 0x244]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EA 0A: sub edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 8D A8 00 00 00: jge 0x5887bdff
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 86 80 00 00 00: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FD: mov edi, ebp
        __asm _emit 0x8b
        __asm _emit 0xfd
        ; Exact mapped bytes BB 05 00 00 00: mov ebx, 5
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes E8 82 C9 08 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc9
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 F1: jne 0x5887bd67
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 39 86 80 00 00 00: cmp dword ptr [esi + 0x80], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x5887bd8b
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 8E 58 02 00 00: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes EB 0D: jmp 0x5887bd98
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 96 58 02 00 00: mov edx, dword ptr [esi + 0x258]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 42 50 01 00 00 00: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 80 00 00 00: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 83 C1 0A: add ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x0a
        ; Exact mapped bytes 3B 8A 88 00 00 00: cmp ecx, dword ptr [edx + 0x88]
        __asm _emit 0x3b
        __asm _emit 0x8a
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 0F: jge 0x5887bdbb
        __asm _emit 0x7d
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 86 5C 02 00 00: mov eax, dword ptr [esi + 0x25c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 01 00 00 00: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x5887bdc4
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 8E 5C 02 00 00: mov ecx, dword ptr [esi + 0x25c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 8B B9 88 00 00 00: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9E C3 08 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc3
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 69 C0 BC 00 00 00: imul eax, eax, 0xbc
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 C7 F6: add edi, -0xa
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0xf6
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8E 60 02 00 00: mov ecx, dword ptr [esi + 0x260]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 10 F0 00 00 00: lea eax, [eax + edx + 0xf0]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6C 75 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 41 F4 FF FF: jmp 0x5887b240
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
