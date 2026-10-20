// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048030A .. +0x329 bytes.
extern "C" __declspec(naked) void FUN_0048030a_0048030A() {
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
        mov dword ptr [ebp - 28h], 1fh
        mov dword ptr [ebp - 2ch], 1
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 72 34 F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x34
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 33: jne 0x480388
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 72 90 02 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 10h], eax
        ; Exact mapped bytes 75 1C: jne 0x480388
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF 6E 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 94 02 00 00: jmp 0x48061c
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 5c4420h
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
        ; Exact mapped bytes E8 39 84 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 3C DD FF FF: call 0x47e0ef
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 8], 1
        ; Exact mapped bytes 0F 85 B9 01 00 00: jne 0x48057c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 78 01 00 00: je 0x480545
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x480545
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F A0 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xa0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E8 3B F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x4804db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F5 9F F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x9f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CE 3B F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x3b
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x4804db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB 9F F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x9f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 9F F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9f
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x4804db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 9F F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x9f
        __asm _emit 0xf8
        __asm _emit 0xff
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
        cmp edx, 1
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x4804db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 5D DE FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 4F DE FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8e8h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        ; Exact mapped bytes E8 4B 8F 02 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        push 0
        push 1
        push 80020d02h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8B 6D 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        ; Exact mapped bytes E8 18 8F 02 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        push 0
        push 1
        push 80020d02h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 6D 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 68: jmp 0x480543
        __asm _emit 0xeb
        __asm _emit 0x68
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8ech], 1
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 B6 DD FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 9B DD FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        ; Exact mapped bytes E8 AE 8E 02 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF 6C 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x480577
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8ech], 1
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 4C DD FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 6C 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x48061c
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 15 DD FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        ; Exact mapped bytes E8 28 8E 02 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        push 0
        push 0
        push 80020d02h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 6C 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 4D: je 0x48061c
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ech], 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 C2 DC FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        ; Exact mapped bytes E8 D6 8D 02 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        push 0
        push 0
        push 80020d02h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 6C 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 B3 81 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x81
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
