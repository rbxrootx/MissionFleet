// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00404C68 .. +0x264 bytes.
extern "C" __declspec(naked) void FUN_00404c68_00404C68() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 70h]
        mov ecx, 1ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 70h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 3C 02 00 00: call 0x404ecc
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 74 08: je 0x404c9d
        __asm _emit 0x74
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 1D 02 00 00: jmp 0x404eba
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 2C 3B 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 70h]
        xor edx, edx
        div dword ptr [ecx + 138h]
        mov dword ptr [ebp - 4], edx
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 64h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 07 3B 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0ffffffffh
        mov dword ptr [ebp - 14h], 0ffffffffh
        mov dword ptr [ebp - 10h], 0ffffffffh
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx + 140h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], 0
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 40000000h
        mov eax, dword ptr [ebp - 70h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A4 3A 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        cmp dword ptr [ebp - 68h], -1
        ; Exact mapped bytes 0F 84 6E 01 00 00: je 0x404eb7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx + 130h]
        add edx, 1
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [eax + 130h], edx
        mov esi, esp
        push 0
        lea ecx, [ebp - 8]
        push ecx
        push 3ch
        mov edx, dword ptr [ebp - 70h]
        add edx, 104h
        push edx
        mov eax, dword ptr [ebp - 68h]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5D 3A 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 44 3A 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        mov esi, esp
        push 0
        lea edx, [ebp - 8]
        push edx
        push 5ch
        lea eax, [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 22 3A 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 21: je 0x404de5
        __asm _emit 0x74
        __asm _emit 0x21
        mov esi, esp
        push 0
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FB 39 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 140h]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + edx*4], -1
        ; Exact mapped bytes 74 49: je 0x404e40
        __asm _emit 0x74
        __asm _emit 0x49
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 140h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        add eax, 54h
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BF 39 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 8]
        push edx
        push 4
        lea eax, [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A0 39 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx + 140h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [eax + ecx*4], edx
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 3ch]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6C 39 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 8]
        push eax
        push 4
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx + 140h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [edx + eax*4]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 41 39 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 68h]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2E 39 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes EB 03: jmp 0x404eba
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        add esp, 70h
        cmp ebp, esp
        ; Exact mapped bytes E8 1A 39 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
