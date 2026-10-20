// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58636B10 .. +0x1BE bytes.
extern "C" __declspec(naked) void FUN_58636b10_58636B10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 18ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 170h], 0
        ; Exact mapped bytes 0F 84 89 01 00 00: je 0x58636cca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 E1 70 ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x70
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 5
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 C8 E8 FF: call 0x584c3390
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xc8
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        imul eax, dword ptr [ebp - 14h], 14h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 180h]
        push edx
        ; Exact mapped bytes E8 98 62 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x62
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58636b8d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 83 31 01 00 00: jae 0x58636cca
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push 0
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 6A 62 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x62
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 10h], 5
        ; Exact mapped bytes 66 8B 45 F4: mov ax, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 01 EC FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x58636cc5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 6]
        mov ecx, dword ptr [ebp - 18h]
        shr ecx, 8
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 DF 00 00 00: jne 0x58636cc5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 0F 86 D2 00 00 00: jbe 0x58636cc5
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 68h]
        and ecx, 100000h
        ; Exact mapped bytes 75 0F: jne 0x58636c10
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 68h]
        and eax, 10h
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x58636cc5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 18ch]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 180h]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 5C 5C 21 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5c
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 18ch]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 180h]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 70h]
        mov dword ptr [edx + eax + 8], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 18ch]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 180h]
        mov dword ptr [eax + ecx + 4], 1869fh
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 18ch]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 180h]
        mov dword ptr [edx + eax + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 18ch]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 180h]
        mov dword ptr [ecx + edx + 10h], 0
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 18ch]
        add al, 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 18ch], al
        ; Exact mapped bytes E9 BA FE FF FF: jmp 0x58636b84
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
