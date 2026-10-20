// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004705B6 .. +0x158 bytes.
extern "C" __declspec(naked) void FUN_004705b6_004705B6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        push edi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 BE EA FC FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xea
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4705fe
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x4706fc
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 73 01 00 00: call 0x47077d
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edi, dword ptr [ecx + 168h]
        mov ecx, 1eh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 4]
        add edx, 78h
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5F 01 00 00: call 0x470791
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 150h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 168h]
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8B 81 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x470660
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x4706fc
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DA 01 00 00: call 0x47084e
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B7 07 00 00: call 0x470e37
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 04: jne 0x470689
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 73: jmp 0x4706fc
        __asm _emit 0xeb
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5F 08 00 00: call 0x470ef4
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 04: jne 0x47069e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5E: jmp 0x4706fc
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 0ch]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 98 03 00 00: call 0x470a4a
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4706ba
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x4706fc
        __asm _emit 0xeb
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 0ch]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A7 06 00 00: call 0x470d75
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 30 08 00 00: call 0x470f0a
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 04: jne 0x4706e3
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x4706fc
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 87 08 00 00: call 0x470f7e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 D8 80 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
