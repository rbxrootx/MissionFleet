// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F47D .. +0x23A bytes.
extern "C" __declspec(naked) void FUN_0045f47d_0045F47D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 2ch]
        mov ecx, 0bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 02 02 00 00: je 0x45f6a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2E 93 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x93
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ecx + 28h]
        ; Exact mapped bytes 0F 82 E7 01 00 00: jb 0x45f6a5
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 80h], 1
        ; Exact mapped bytes 0F 85 D7 01 00 00: jne 0x45f6a5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 03 93 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x93
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        sub eax, dword ptr [ecx + 28h]
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 0ch]
        add edx, 20h
        mov eax, dword ptr [ebp - 4]
        add eax, 0ea60h
        xor ecx, ecx
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 82 8F 01 00 00: jb 0x45f69d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 0E: ja 0x45f51e
        __asm _emit 0x77
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F 82 7F 01 00 00: jb 0x45f69d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ea60h
        xor edx, edx
        mov esi, dword ptr [eax + 20h]
        sub esi, ecx
        mov eax, dword ptr [eax + 24h]
        sbb eax, edx
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 20h], esi
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 28h]
        mov dword ptr [edx + 2ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 20h
        mov eax, 0ea60h
        sub eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 72 2D: jb 0x45f59c
        __asm _emit 0x72
        __asm _emit 0x2d
        ; Exact mapped bytes 77 0A: ja 0x45f57b
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 72 21: jb 0x45f59c
        __asm _emit 0x72
        __asm _emit 0x21
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 56 92 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 0ea60h
        sub eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 29: jmp 0x45f5c5
        __asm _emit 0xeb
        __asm _emit 0x29
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 35 92 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x00
        xor edx, edx
        mov ecx, dword ptr [ebp - 0ch]
        add eax, dword ptr [ecx + 20h]
        adc edx, dword ptr [ecx + 24h]
        mov ecx, dword ptr [ebp - 4]
        xor esi, esi
        sub eax, ecx
        sbb edx, esi
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], edx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 28h], edx
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + 2ch]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 75 25: jne 0x45f601
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A 80 FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 E4 91 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x45f69b
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 14h]
        add edx, 1
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 14h], edx
        push 18h
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 5ch
        push edx
        ; Exact mapped bytes E8 F8 99 04 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 74h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [eax + 78h], edx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8A 0D 79 CB 5D 00: mov cl, byte ptr [0x5dcb79]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x79
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [eax + 7ch], cl
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40cd8h]
        ; Exact mapped bytes E8 20 74 FC FF: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1E: je 0x45f687
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 24h
        mov eax, dword ptr [ebp - 0ch]
        add eax, 5ch
        push eax
        push 0
        push 0
        push 80017005h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AD 7B 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x45f69b
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 5ba690h
        ; Exact mapped bytes E8 7D 05 07 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x05
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 08: jmp 0x45f6a5
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 AB FE FF: call 0x44a20d
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 2F 91 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
