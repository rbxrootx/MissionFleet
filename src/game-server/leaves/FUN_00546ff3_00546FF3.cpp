// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00546FF3 .. +0x26C bytes.
extern "C" __declspec(naked) void FUN_00546ff3_00546FF3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        push 1e9h
        push 5c8c2ch
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 4E 41 FB FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7D 14: jge 0x54702c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 1eah
        push 5c8c2ch
        ; Exact mapped bytes E8 D9 D9 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54702c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x547012
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2A: je 0x547062
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        mov edx, dword ptr [ebp + 0ch]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 0C 8E F8 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x547062
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ech
        push 5c8c2ch
        ; Exact mapped bytes E8 A3 D9 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547062
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CA: jne 0x547032
        __asm _emit 0x75
        __asm _emit 0xca
        push 0
        push 0
        push 418h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        test ecx, ecx
        ; Exact mapped bytes 74 37: je 0x5470c9
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        push 0
        push 416h
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5470c1
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f1h
        push 5c8c2ch
        ; Exact mapped bytes E8 44 D9 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5470c1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CB: jne 0x547092
        __asm _emit 0x75
        __asm _emit 0xcb
        ; Exact mapped bytes EB B9: jmp 0x547082
        __asm _emit 0xeb
        __asm _emit 0xb9
        push 14h
        push 0
        lea ecx, [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 9A 22 F6 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x22
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 8], 0ffffffffh
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x5471bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x547103
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 8D AE 00 00 00: jge 0x5471bd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 10h], 4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        mov dword ptr [ebp + 8], ecx
        test eax, eax
        ; Exact mapped bytes 75 56: jne 0x547181
        __asm _emit 0x75
        __asm _emit 0x56
        mov byte ptr [ebp - 0fh], 1
        ; Exact mapped bytes 83 3D 38 8C 5C 00 FF: cmp dword ptr [0x5c8c38], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x54714c
        __asm _emit 0x75
        __asm _emit 0x14
        push 201h
        push 5c8c2ch
        ; Exact mapped bytes E8 B9 D8 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54714c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x54712f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A4 7C FA FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x7c
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x54716f
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 81 3D 38 8C 5C 00 47 00 04 00: cmp dword ptr [0x5c8c38], 0x40047
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x547178
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 6
        ; Exact mapped bytes EB 07: jmp 0x54717f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 8
        ; Exact mapped bytes EB 13: jmp 0x547194
        __asm _emit 0xeb
        __asm _emit 0x13
        mov byte ptr [ebp - 0fh], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 18h]
        push edx
        push 1
        push 414h
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5471b8
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x547256
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3D FF FF FF: jmp 0x5470fa
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 68: jmp 0x547227
        __asm _emit 0xeb
        __asm _emit 0x68
        mov byte ptr [ebp - 10h], 4
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x5471d5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 4A: jge 0x547227
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 0fh]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x5471fe
        __asm _emit 0x74
        __asm _emit 0x14
        push 217h
        push 5c8c2ch
        ; Exact mapped bytes E8 07 D8 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5471fe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x5471dd
        __asm _emit 0x75
        __asm _emit 0xd9
        lea ecx, [ebp - 18h]
        push ecx
        push 1
        push 414h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x547225
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 31: jmp 0x547256
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes EB A5: jmp 0x5471cc
        __asm _emit 0xeb
        __asm _emit 0xa5
        push 0
        push 0
        push 418h
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 58h], eax
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 84h], 1
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
