// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004132CC .. +0x211 bytes.
extern "C" __declspec(naked) void FUN_004132cc_004132CC() {
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
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov eax, ecx
        mov ecx, dword ptr [ebp - 70h]
        cdq
        idiv dword ptr [ecx + 138h]
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
        ; Exact mapped bytes E8 CA 54 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x54
        __asm _emit 0x09
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
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
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
        ; Exact mapped bytes E8 6E 54 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x54
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        cmp dword ptr [ebp - 68h], -1
        ; Exact mapped bytes 0F 84 49 01 00 00: je 0x4134c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx + 130h]
        add edx, 1
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [eax + 130h], edx
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
        ; Exact mapped bytes E8 33 54 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x54
        __asm _emit 0x09
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
        ; Exact mapped bytes E8 11 54 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x54
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 21: je 0x4133f6
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
        ; Exact mapped bytes E8 EA 53 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 140h]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + edx*4], -1
        ; Exact mapped bytes 74 49: je 0x413451
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
        ; Exact mapped bytes E8 AE 53 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x53
        __asm _emit 0x09
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
        ; Exact mapped bytes E8 8F 53 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x53
        __asm _emit 0x09
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
        ; Exact mapped bytes E8 5B 53 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x53
        __asm _emit 0x09
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
        ; Exact mapped bytes E8 30 53 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x53
        __asm _emit 0x09
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
        ; Exact mapped bytes E8 1D 53 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes EB 03: jmp 0x4134cb
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        add esp, 70h
        cmp ebp, esp
        ; Exact mapped bytes E8 09 53 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
