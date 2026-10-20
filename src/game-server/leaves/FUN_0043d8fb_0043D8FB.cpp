// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043D8FB .. +0x430 bytes.
extern "C" __declspec(naked) void FUN_0043d8fb_0043D8FB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a840h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 12ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 138h]
        mov ecx, 4bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 134h], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 4000h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 60 CA 04 00: call 0x48a3ad
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 11ch]
        push edx
        lea eax, [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        add ecx, 40cf0h
        ; Exact mapped bytes E8 2D 27 00 00: call 0x4400a0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 124h]
        push ecx
        lea edx, [ebp - 128h]
        push edx
        mov ecx, dword ptr [ebp - 134h]
        add ecx, 40d00h
        ; Exact mapped bytes E8 0A 27 00 00: call 0x4400a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [eax], 581300h
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ecx + 40c78h], 0
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [edx + 40c98h], 0
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 18 24 5E 00: call dword ptr [0x5e2418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 06 AE 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xae
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 134h]
        mov byte ptr [eax + 40ca4h], 1
        mov ecx, dword ptr [ebp - 134h]
        mov byte ptr [ecx + 40ca5h], 0
        mov edx, dword ptr [ebp - 134h]
        add edx, 40ca0h
        push edx
        push 0
        mov eax, dword ptr [ebp - 134h]
        add eax, 40c9ch
        push eax
        push 43d7c8h
        push 0
        push 0
        ; Exact mapped bytes E8 13 C6 06 00: call 0x4aa030
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc6
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 18h
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ecx + 40c9ch], eax
        push 4ch
        push 5b6084h
        push 34h
        ; Exact mapped bytes E8 F9 F5 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf5
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 13: je 0x43da63
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 95 3D FD FF: call 0x4117f0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x3d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43da6d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov edx, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 12ch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 12ch]
        ; Exact mapped bytes A3 00 78 5D 00: mov dword ptr [0x5d7800], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        push 5b60e0h
        ; Exact mapped bytes 8B 0D 00 78 5D 00: mov ecx, dword ptr [0x5d7800]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 31 3E FD FF: call 0x4118c9
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x3e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ecx + 40ca8h], 0
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [edx + 40cach], 0
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [eax + 40cb0h], 0
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ecx + 40cc8h], 0
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [edx + 40ccch], 0
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [eax + 40cd0h], 0
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ecx + 40cd4h], 0
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [edx + 40cb8h], 0
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [eax + 40cbch], 0
        mov ecx, dword ptr [ebp - 134h]
        mov byte ptr [ecx + 40cdch], 0
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [edx + 40cc4h], 0
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [eax + 40ce0h], 0
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ecx + 40cech], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x43db77
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 7D 16: jge 0x43db93
        __asm _emit 0x7d
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ecx + eax*4 + 40c7ch], 0
        ; Exact mapped bytes EB DB: jmp 0x43db6e
        __asm _emit 0xeb
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 71 CC 04 00: call 0x48a80f
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 EA 09 00 00: call 0x43e593
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 134h]
        ; Exact mapped bytes 89 15 7C CB 5D 00: mov dword ptr [0x5dcb7c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [eax + 40ce8h], 0
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ecx + 40ce4h], 1ch
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 2A 33 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov esi, esp
        push 0ffh
        lea edx, [ebp - 118h]
        push edx
        ; Exact mapped bytes FF 15 40 29 5E 00: call dword ptr [0x5e2940]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E4 AB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xab
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 E1 00 00 00: jne 0x43dce5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp - 118h]
        push eax
        ; Exact mapped bytes FF 15 44 29 5E 00: call dword ptr [0x5e2944]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C6 AB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xab
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x43dcd5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 4C 29 5E 00: call dword ptr [0x5e294c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9F AB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xab
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 B3 FE 0A 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b6104h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 8C 33 0F 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x43dc64
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes C6 05 79 CB 5D 00 01: mov byte ptr [0x5dcb79], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x79
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes EB 6F: jmp 0x43dcd3
        __asm _emit 0xeb
        __asm _emit 0x6f
        push 5b6114h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 72 33 0F 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x43dc7e
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes C6 05 79 CB 5D 00 02: mov byte ptr [0x5dcb79], 2
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x79
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes EB 55: jmp 0x43dcd3
        __asm _emit 0xeb
        __asm _emit 0x55
        push 5b6124h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 58 33 0F 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x43dc98
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes C6 05 79 CB 5D 00 03: mov byte ptr [0x5dcb79], 3
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x79
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes EB 3B: jmp 0x43dcd3
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 5b6134h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 3E 33 0F 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x43dcb2
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes C6 05 79 CB 5D 00 04: mov byte ptr [0x5dcb79], 4
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x79
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes EB 21: jmp 0x43dcd3
        __asm _emit 0xeb
        __asm _emit 0x21
        push 5b6144h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 24 33 0F 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x43dccc
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes C6 05 79 CB 5D 00 0A: mov byte ptr [0x5dcb79], 0xa
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x79
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes EB 07: jmp 0x43dcd3
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C6 05 79 CB 5D 00 63: mov byte ptr [0x5dcb79], 0x63
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x79
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x63
        ; Exact mapped bytes EB 0E: jmp 0x43dce3
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b6154h
        ; Exact mapped bytes E8 9E FB 0C 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfb
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x43dcf3
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b6164h
        ; Exact mapped bytes E8 8E FB 0C 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0x0c
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 4D FB 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 134h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 138h
        cmp ebp, esp
        ; Exact mapped bytes E8 BB AA 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xaa
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
