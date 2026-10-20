// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542173 .. +0x26C bytes.
extern "C" __declspec(naked) void FUN_00542173_00542173() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        push 1e9h
        push 675764h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 CE 80 F9 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7D 14: jge 0x5421ac
        __asm _emit 0x7d
        __asm _emit 0x14
        push 1eah
        push 675764h
        ; Exact mapped bytes E8 99 6B FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5421ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x542192
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2A: je 0x5421e2
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        mov edx, dword ptr [ebp + 0ch]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 9C 12 F6 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x12
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5421e2
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ech
        push 675764h
        ; Exact mapped bytes E8 63 6B FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5421e2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CA: jne 0x5421b2
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
        ; Exact mapped bytes 74 37: je 0x542249
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
        ; Exact mapped bytes 75 14: jne 0x542241
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f1h
        push 675764h
        ; Exact mapped bytes E8 04 6B FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542241
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CB: jne 0x542212
        __asm _emit 0x75
        __asm _emit 0xcb
        ; Exact mapped bytes EB B9: jmp 0x542202
        __asm _emit 0xeb
        __asm _emit 0xb9
        push 14h
        push 0
        lea ecx, [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 6A 36 F2 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x36
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 8], 0ffffffffh
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x54233f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x542283
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 8D AE 00 00 00: jge 0x54233d
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
        ; Exact mapped bytes 75 56: jne 0x542301
        __asm _emit 0x75
        __asm _emit 0x56
        mov byte ptr [ebp - 0fh], 1
        ; Exact mapped bytes 83 3D 70 57 67 00 FF: cmp dword ptr [0x675770], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x5422cc
        __asm _emit 0x75
        __asm _emit 0x14
        push 201h
        push 675764h
        ; Exact mapped bytes E8 79 6A FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5422cc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5422af
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B4 3F F9 FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3f
        __asm _emit 0xf9
        __asm _emit 0xff
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5422ef
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 81 3D 70 57 67 00 47 00 04 00: cmp dword ptr [0x675770], 0x40047
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x5422f8
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 6
        ; Exact mapped bytes EB 07: jmp 0x5422ff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 8
        ; Exact mapped bytes EB 13: jmp 0x542314
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
        ; Exact mapped bytes 75 07: jne 0x542338
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x5423d6
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3D FF FF FF: jmp 0x54227a
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 68: jmp 0x5423a7
        __asm _emit 0xeb
        __asm _emit 0x68
        mov byte ptr [ebp - 10h], 4
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x542355
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 4A: jge 0x5423a7
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 0fh]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x54237e
        __asm _emit 0x74
        __asm _emit 0x14
        push 217h
        push 675764h
        ; Exact mapped bytes E8 C7 69 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54237e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x54235d
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
        ; Exact mapped bytes 75 04: jne 0x5423a5
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 31: jmp 0x5423d6
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes EB A5: jmp 0x54234c
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
