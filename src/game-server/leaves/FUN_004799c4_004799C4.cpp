// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004799C4 .. +0x55A bytes.
extern "C" __declspec(naked) void FUN_004799c4_004799C4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        cmp dword ptr [edx + 0fch], 4
        ; Exact mapped bytes 74 05: je 0x4799fa
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 14 05 00 00: jmp 0x479f0e
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        ; Exact mapped bytes 66 8B 42 68: mov ax, word ptr [edx + 0x68]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x68
        ; Exact mapped bytes 66 25 FC FF: and ax, 0xfffc
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        or al, 2
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 0d78h]
        ; Exact mapped bytes 66 89 41 68: mov word ptr [ecx + 0x68], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x68
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B1 ED 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [ecx + 0d84h], eax
        push 10h
        push 0
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 28 F9 02 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x479a5d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 0b2h]
        and cl, 0fh
        and ecx, 0ffh
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 0F 8D 82 00 00 00: jge 0x479b03
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 6
        cmp dword ptr [eax + ecx + 0cbch], 0
        ; Exact mapped bytes 74 24: je 0x479abb
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 6
        mov edx, dword ptr [eax + ecx + 0cbch]
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 8A 70 01 00 00: mov cx, word ptr [edx + 0x170]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4C 45 DC: mov word ptr [ebp + eax*2 - 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes EB 43: jmp 0x479afe
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 AD 19 00 00: call 0x47b480
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x479afe
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 91 19 00 00: call 0x47b480
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 80 70 01 00 00: mov ax, word ptr [eax + 0x170]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 44 55 DC: mov word ptr [ebp + edx*2 - 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes E9 51 FF FF FF: jmp 0x479a54
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 0b2h]
        shr cl, 5
        and cl, 1
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x479b2e
        __asm _emit 0x74
        __asm _emit 0x09
        mov byte ptr [ebp - 10h], 0f0h
        ; Exact mapped bytes E9 76 01 00 00: jmp 0x479ca4
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 104h], 0ch
        ; Exact mapped bytes 75 1C: jne 0x479b5f
        __asm _emit 0x75
        __asm _emit 0x1c
        mov byte ptr [ebp - 10h], 10h
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dword ptr [ecx + 114h], 0
        ; Exact mapped bytes EB 30: jmp 0x479b8f
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 06 9E F8 FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x9e
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 7F 1C: jg 0x479b8b
        __asm _emit 0x7f
        __asm _emit 0x1c
        mov byte ptr [ebp - 10h], 10h
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov dword ptr [edx + 114h], 0
        ; Exact mapped bytes EB 04: jmp 0x479b8f
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 10h], 0f0h
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 EC 00 00 00: mov ax, word ptr [edx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 73: jne 0x479c1c
        __asm _emit 0x75
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov ecx, dword ptr [eax + 0b8h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 2C: je 0x479bee
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 40 9B F8 FF: call 0x40370d
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 10h
        ; Exact mapped bytes 73 1A: jae 0x479bec
        __asm _emit 0x73
        __asm _emit 0x1a
        mov byte ptr [ebp - 10h], 10h
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov dword ptr [edx + 114h], 0
        ; Exact mapped bytes EB 29: jmp 0x479c17
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 8]
        cmp dword ptr [ecx + 0d90h], 10h
        ; Exact mapped bytes 73 1A: jae 0x479c17
        __asm _emit 0x73
        __asm _emit 0x1a
        mov byte ptr [ebp - 10h], 10h
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dword ptr [ecx + 114h], 0
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x479ca4
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 EC 00 00 00: mov dx, word ptr [ecx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 5
        ; Exact mapped bytes 75 6E: jne 0x479ca4
        __asm _emit 0x75
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 0b8h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x479c7b
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 B3 9A F8 FF: call 0x40370d
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 73 1A: jae 0x479c79
        __asm _emit 0x73
        __asm _emit 0x1a
        mov byte ptr [ebp - 10h], 10h
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dword ptr [ecx + 114h], 0
        ; Exact mapped bytes EB 29: jmp 0x479ca4
        __asm _emit 0xeb
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        cmp dword ptr [eax + 0d90h], 4
        ; Exact mapped bytes 73 1A: jae 0x479ca4
        __asm _emit 0x73
        __asm _emit 0x1a
        mov byte ptr [ebp - 10h], 10h
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov dword ptr [eax + 114h], 0
        push 0fh
        lea ecx, [ebp - 24h]
        push ecx
        lea edx, [ebp - 0fh]
        push edx
        ; Exact mapped bytes E8 DD 2B 03 00: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        lea eax, [ebp - 10h]
        push eax
        push 0
        push 0
        push 80000500h
        mov ecx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 26 FE 00 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dword ptr [ecx + 0fch], 8
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 C0 00 00 00: mov dx, word ptr [ecx + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 0F 84 AE 01 00 00: je 0x479eb1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x479d15
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 0b2h]
        and cl, 0fh
        and ecx, 0ffh
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 7D 6A: jge 0x479d9f
        __asm _emit 0x7d
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 33 17 00 00: call 0x47b480
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 14: jmp 0x479d6d
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7F C9 FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc9
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 2ch]
        add edx, 1
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 27: je 0x479d9a
        __asm _emit 0x74
        __asm _emit 0x27
        cmp dword ptr [ebp - 2ch], 80h
        ; Exact mapped bytes 7D 1E: jge 0x479d9a
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        ; Exact mapped bytes 66 8B 82 C0 00 00 00: mov ax, word ptr [edx + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AC EC FC FF: call 0x448a44
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB BF: jmp 0x479d59
        __asm _emit 0xeb
        __asm _emit 0xbf
        ; Exact mapped bytes E9 6D FF FF FF: jmp 0x479d0c
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x479db8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 0b2h]
        and dl, 0fh
        and edx, 0ffh
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 7D 22: jge 0x479dfa
        __asm _emit 0x7d
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 14h]
        shl edx, 6
        lea ecx, [ecx + edx + 0cb0h]
        ; Exact mapped bytes E8 B0 16 00 00: call 0x47b4a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        add ecx, eax
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB B5: jmp 0x479daf
        __asm _emit 0xeb
        __asm _emit 0xb5
        mov edx, dword ptr [ebp - 28h]
        imul edx, edx, 3b6h
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x479e18
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 0b2h]
        and cl, 0fh
        and ecx, 0ffh
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 7D 77: jge 0x479eaf
        __asm _emit 0x7d
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 50 16 00 00: call 0x47b4a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x479e90
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 34 16 00 00: call 0x47b4a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [ebp - 28h]
        xor edx, edx
        div ecx
        push eax
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 32 16 00 00: call 0x47b4c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x479eaa
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 16 16 00 00: call 0x47b4c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x479e0f
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 4C: jmp 0x479efd
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x479ec3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        and al, 0fh
        and eax, 0ffh
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 7D 1C: jge 0x479efd
        __asm _emit 0x7d
        __asm _emit 0x1c
        push 0
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 14h]
        shl eax, 6
        lea ecx, [edx + eax + 0cb0h]
        ; Exact mapped bytes E8 C5 15 00 00: call 0x47b4c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB BD: jmp 0x479eba
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 0d78h]
        ; Exact mapped bytes E8 B7 60 F9 FF: call 0x40ffc5
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 C6 E8 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
