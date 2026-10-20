// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585847D0 .. +0x257 bytes.
extern "C" __declspec(naked) void FUN_585847d0_585847D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 84h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 10: je 0x58584801
        __asm _emit 0x74
        __asm _emit 0x10
        push 4
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes FF 15 3C 41 89 58: call dword ptr [0x5889413c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58584806
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 0F 02 00 00: jmp 0x58584a15
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DA A2 23 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa2
        __asm _emit 0x23
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 84h]
        add edi, 1d38h
        mov ecx, 1fh
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [eax + 1d30h], 12h
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ecx + 1d34h], 12h
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [ebp - 84h]
        mov ecx, dword ptr [edx + 1d70h]
        imul ecx, dword ptr [eax + 1d74h]
        mov eax, ecx
        mov edx, 14h
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 C7 C7 2A 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc7
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [edx + 1db4h], eax
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [ecx + 1d70h]
        imul eax, dword ptr [edx + 1d74h]
        imul ecx, eax, 14h
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC A1 23 00: call 0x587beac0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa1
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 84h]
        mov ecx, dword ptr [eax + 1db4h]
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        ; Exact mapped bytes E8 9A 7F 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x7f
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 88h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58584914
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 88h]
        add edx, 1
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp - 84h]
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [eax + 1d70h]
        imul edx, dword ptr [ecx + 1d74h]
        cmp dword ptr [ebp - 88h], edx
        ; Exact mapped bytes 0F 8D DC 00 00 00: jge 0x58584a15
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 84h]
        cmp dword ptr [eax + 1db4h], 0
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x585849db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 88h], 14h
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx + 1db4h]
        cmp dword ptr [eax + ecx], -1
        ; Exact mapped bytes 74 76: je 0x585849db
        __asm _emit 0x74
        __asm _emit 0x76
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 70: je 0x585849db
        __asm _emit 0x74
        __asm _emit 0x70
        imul ecx, dword ptr [ebp - 88h], 14h
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx + 1db4h]
        imul edx, dword ptr [ebp - 88h], 14h
        mov esi, dword ptr [ebp - 84h]
        mov esi, dword ptr [esi + 1db4h]
        mov eax, dword ptr [eax + ecx]
        mov dword ptr [esi + edx + 10h], eax
        imul ecx, dword ptr [ebp - 88h], 14h
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx + 1db4h]
        mov ecx, dword ptr [eax + ecx]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 19 01 F0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        imul edx, dword ptr [ebp - 88h], 14h
        mov eax, dword ptr [ebp - 84h]
        mov ecx, dword ptr [eax + 1db4h]
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ecx + edx], eax
        ; Exact mapped bytes EB 35: jmp 0x58584a10
        __asm _emit 0xeb
        __asm _emit 0x35
        imul ecx, dword ptr [ebp - 88h], 14h
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx + 1db4h]
        mov dword ptr [eax + ecx + 10h], 0ffffffffh
        imul ecx, dword ptr [ebp - 88h], 14h
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx + 1db4h]
        mov dword ptr [eax + ecx], 0
        ; Exact mapped bytes E9 F0 FE FF FF: jmp 0x58584905
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2F C6 2A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc6
        __asm _emit 0x2a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
