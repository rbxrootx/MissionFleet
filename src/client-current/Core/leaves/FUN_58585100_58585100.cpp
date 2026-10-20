// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58585100 .. +0x1E9 bytes.
extern "C" __declspec(naked) void FUN_58585100_58585100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 46ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 45ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 45ch]
        cmp dword ptr [ecx + eax*4 + 0ch], 1
        ; Exact mapped bytes 75 0A: jne 0x58585133
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 2
        ; Exact mapped bytes E9 A6 01 00 00: jmp 0x585852d9
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 224h
        push 0
        lea edx, [ebp - 454h]
        push edx
        ; Exact mapped bytes E8 CA 7C 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7c
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 2
        ; Exact mapped bytes E8 38 30 21 00: call 0x5879818a
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x30
        __asm _emit 0x21
        __asm _emit 0x00
        mov dword ptr [ebp - 460h], eax
        cmp dword ptr [ebp - 460h], -1
        ; Exact mapped bytes 75 0A: jne 0x5858516b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 3
        ; Exact mapped bytes E9 6E 01 00 00: jmp 0x585852d9
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 230h], 128h
        mov dword ptr [ebp - 454h], 224h
        lea eax, [ebp - 230h]
        push eax
        mov ecx, dword ptr [ebp - 460h]
        push ecx
        ; Exact mapped bytes E8 FE 2F 21 00: call 0x58798190
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x2f
        __asm _emit 0x21
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x585852ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 104h
        push 0
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes E8 63 7C 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7c
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 458h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585851cb
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 458h]
        add eax, 1
        mov dword ptr [ebp - 458h], eax
        mov ecx, dword ptr [ebp - 45ch]
        mov edx, dword ptr [ebp - 458h]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F 8D CF 00 00 00: jge 0x585852af
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 20ch]
        push eax
        mov ecx, dword ptr [ebp - 45ch]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 458h]
        mov ecx, dword ptr [edx + eax*4]
        add ecx, 38h
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x585852aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 45ch]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 458h]
        mov edx, dword ptr [eax + ecx*4]
        add edx, 8
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        mov dword ptr [ebp - 464h], eax
        mov eax, dword ptr [ebp - 45ch]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 458h]
        mov eax, dword ptr [ecx + edx*4]
        add eax, 8
        mov dword ptr [ebp - 468h], eax
        mov ecx, dword ptr [ebp - 45ch]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 458h]
        mov ecx, dword ptr [edx + eax*4]
        movzx edx, word ptr [ecx + 4]
        mov dword ptr [ebp - 46ch], edx
        push 0
        mov eax, dword ptr [ebp - 464h]
        push eax
        mov ecx, dword ptr [ebp - 468h]
        push ecx
        mov edx, dword ptr [ebp - 46ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 80025004h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 76 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x76
        __asm _emit 0x2a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 45ch]
        mov dword ptr [edx + ecx*4 + 0ch], 1
        mov eax, 1
        ; Exact mapped bytes EB 2F: jmp 0x585852d9
        __asm _emit 0xeb
        __asm _emit 0x2f
        ; Exact mapped bytes E9 0D FF FF FF: jmp 0x585851bc
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 230h]
        push eax
        mov ecx, dword ptr [ebp - 460h]
        push ecx
        ; Exact mapped bytes E8 D4 2E 21 00: call 0x58798196
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x2e
        __asm _emit 0x21
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 D0 FE FF FF: jne 0x5858519a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 460h]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6D BD 2A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xbd
        __asm _emit 0x2a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
