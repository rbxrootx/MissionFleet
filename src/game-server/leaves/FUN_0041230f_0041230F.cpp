// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041230F .. +0x3F4 bytes.
extern "C" __declspec(naked) void FUN_0041230f_0041230F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 50h], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 90 64 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 0F 84 92 03 00 00: je 0x4126ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 23: jne 0x412386
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 75 1A: jne 0x412386
        __asm _emit 0x75
        __asm _emit 0x1a
        mov esi, esp
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 61 64 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 6B 03 00 00: jmp 0x4126f1
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0C: je 0x412398
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 31 F5 FF FF: call 0x4118c9
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 8], 0
        mov esi, esp
        lea ecx, [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 68 24 5E 00: call dword ptr [0x5e2468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1C 64 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0ch
        ; Exact mapped bytes 77 1A: ja 0x4123e7
        __asm _emit 0x77
        __asm _emit 0x1a
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 00 64 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 0A 03 00 00: jmp 0x4126f1
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, 0ch
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes E8 C7 AF 0D 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 24h], eax
        mov esi, esp
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        push 4
        lea edx, [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BC 63 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        push 4
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9D 63 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        push 4
        lea edx, [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7E 63 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5D 63 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4A 63 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        xor eax, 390a4f16h
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 38h]
        and ecx, 0fafah
        mov edx, dword ptr [ebp - 34h]
        and edx, 0adadh
        add ecx, edx
        mov eax, dword ptr [ebp - 28h]
        sub eax, ecx
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4124cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 73 20: jae 0x4124f7
        __asm _emit 0x73
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        add ecx, 7
        mov edx, dword ptr [ebp - 20h]
        add edx, 3
        imul ecx, edx
        mov eax, dword ptr [ebp - 8]
        add eax, ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB CF: jmp 0x4124c6
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 28h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 19: je 0x412518
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        ; Exact mapped bytes E8 FB AE 0D 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xae
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes E9 D9 01 00 00: jmp 0x4126f1
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        and ecx, 0ff000000h
        shr ecx, 18h
        mov byte ptr [ebp - 14h], cl
        mov edx, dword ptr [ebp - 38h]
        and edx, 0ff0000h
        shr edx, 10h
        mov byte ptr [ebp - 13h], dl
        mov eax, dword ptr [ebp - 38h]
        and eax, 0ffh
        mov byte ptr [ebp - 12h], al
        mov ecx, dword ptr [ebp - 38h]
        and ecx, 0ff00h
        shr ecx, 8
        mov byte ptr [ebp - 11h], cl
        mov edx, dword ptr [ebp - 34h]
        and edx, 0ff0000h
        shr edx, 10h
        mov byte ptr [ebp - 18h], dl
        mov eax, dword ptr [ebp - 34h]
        and eax, 0ff000000h
        shr eax, 18h
        mov byte ptr [ebp - 17h], al
        mov ecx, dword ptr [ebp - 34h]
        and ecx, 0ff00h
        shr ecx, 8
        mov byte ptr [ebp - 16h], cl
        mov edx, dword ptr [ebp - 34h]
        and edx, 0ffh
        mov byte ptr [ebp - 15h], dl
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4125a1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 73 39: jae 0x4125e2
        __asm _emit 0x73
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 72 02: jb 0x4125bc
        __asm _emit 0x72
        __asm _emit 0x02
        ; Exact mapped bytes EB 26: jmp 0x4125e2
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 20h]
        and ecx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x4125cc
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffch
        inc ecx
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ebp - 1ch]
        mov al, byte ptr [edx]
        xor al, byte ptr [ebp + ecx - 18h]
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [ebp - 1ch]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB B6: jmp 0x412598
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4125f4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 73 26: jae 0x412622
        __asm _emit 0x73
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 20h]
        and ecx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x41260c
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffch
        inc ecx
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ebp - 20h]
        mov al, byte ptr [edx]
        xor al, byte ptr [ebp + ecx - 14h]
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB C9: jmp 0x4125eb
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x412634
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 73 4B: jae 0x412687
        __asm _emit 0x73
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [ebp - 20h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        imul edx, eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, edx
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ebp - 20h]
        xor eax, eax
        mov al, byte ptr [edx]
        mov ecx, eax
        mov eax, dword ptr [ebp - 20h]
        add eax, 0dh
        mov edx, dword ptr [ebp - 20h]
        add edx, 0dh
        imul eax, edx
        cdq
        mov esi, 7bh
        idiv esi
        imul ecx, edx
        mov eax, dword ptr [ebp - 30h]
        add eax, ecx
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB A4: jmp 0x41262b
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ebp - 10h]
        xor edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 30h]
        xor ecx, dword ptr [eax + 28h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 75 08: jne 0x4126af
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 30h]
        cmp eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 74 16: je 0x4126c5
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 4B AD 0D 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xad
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes EB 2C: jmp 0x4126f1
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [eax], ecx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 17: jne 0x4126ea
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 E8 03 00 00: call 0x412acd
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 07: jmp 0x4126f1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 02: jmp 0x4126f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 E3 60 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x60
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
