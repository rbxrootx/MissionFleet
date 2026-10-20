// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58636CD0 .. +0x1DB bytes.
extern "C" __declspec(naked) void FUN_58636cd0_58636CD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 18bh], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 170h], 0
        ; Exact mapped bytes 0F 84 A6 01 00 00: je 0x58636ea7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 21 6F ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x6f
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
        ; Exact mapped bytes E8 71 C6 E8 FF: call 0x584c3390
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc6
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        imul eax, dword ptr [ebp - 14h], 14h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 17ch]
        push edx
        ; Exact mapped bytes E8 D8 60 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58636d4d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 83 4E 01 00 00: jae 0x58636ea7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push 0
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 AA 60 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x60
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
        ; Exact mapped bytes E8 EC FF EB FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 11 01 00 00: je 0x58636ea2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 6]
        mov ecx, dword ptr [ebp - 18h]
        shr ecx, 8
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 FC 00 00 00: jne 0x58636ea2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 0F 86 EF 00 00 00: jbe 0x58636ea2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 68h]
        and ecx, 100000h
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x58636ea2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 68h]
        and eax, 10h
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x58636ea2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + edx + 20h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x58636ea2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 18bh]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 17ch]
        add ecx, edx
        push ecx
        ; Exact mapped bytes E8 80 5A 21 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5a
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 18bh]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 17ch]
        mov edx, dword ptr [ebp - 8]
        mov edx, dword ptr [edx + 70h]
        mov dword ptr [eax + ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 18bh]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 17ch]
        mov dword ptr [ecx + edx + 4], 1869fh
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 18bh]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 17ch]
        mov dword ptr [eax + ecx + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 18bh]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 17ch]
        mov dword ptr [edx + eax + 10h], 0
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 18bh]
        add cl, 1
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 18bh], cl
        ; Exact mapped bytes E9 9D FE FF FF: jmp 0x58636d44
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
