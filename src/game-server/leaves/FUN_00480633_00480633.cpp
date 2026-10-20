// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00480633 .. +0x348 bytes.
extern "C" __declspec(naked) void FUN_00480633_00480633() {
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
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8ech], 0
        ; Exact mapped bytes 0F 85 05 03 00 00: jne 0x480964
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 1fh
        mov dword ptr [ebp - 2ch], 1
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 30h], edx
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 39 31 F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x31
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x480790
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 35 8D 02 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 10h], eax
        ; Exact mapped bytes 0F 85 E3 00 00 00: jne 0x480790
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8ech], 1
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 61 6B 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x48077d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 07 9D F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x9d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 38 F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x38
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 65: jne 0x48075c
        __asm _emit 0x75
        __asm _emit 0x65
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 9C F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA 38 F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x38
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 4F: jne 0x48075c
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB 9C F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x9c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 CE 9C F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9c
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 36: jne 0x48075c
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 9C F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x9c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 EC 00 00 00: mov cx, word ptr [eax + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 75 1A: jne 0x48075c
        __asm _emit 0x75
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov edx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 D6 6A 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8ech], 1
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 2F DB FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 21 DB FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CA 01 00 00: jmp 0x48095a
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 5c4424h
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 31 80 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 34 D9 FF FF: call 0x47e0ef
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x480869
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x480869
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 9C F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x9c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED 37 F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x37
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 5F: jne 0x480849
        __asm _emit 0x75
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE 9B F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D7 37 F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x37
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 49: jne 0x480849
        __asm _emit 0x75
        __asm _emit 0x49
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 9B F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE 9B F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 33: jne 0x480849
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 9B F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 EC 00 00 00: mov cx, word ptr [eax + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 75 17: jne 0x480849
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 69 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8ech], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 48 DA FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x480928
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x480928
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 6F 9B F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x480928
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 5C 9B F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 35 37 F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x37
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 65: jne 0x480907
        __asm _emit 0x75
        __asm _emit 0x65
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 9B F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1F 37 F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x37
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 4F: jne 0x480907
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 9B F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 23 9B F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 36: jne 0x480907
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 9B F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0d78h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 EC 00 00 00: mov ax, word ptr [edx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1A: jne 0x480907
        __asm _emit 0x75
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 2B 69 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 84 D9 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 69 D9 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 68 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [edx + 8], 0
        mov eax, 1
        pop edi
        pop esi
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 6B 7E 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
