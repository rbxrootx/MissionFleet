// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D710 .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_5882d710() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 214h]
        add ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 214h], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 104h
        ; Exact mapped bytes 74 3F: je 0x5882d777
        __asm _emit 0x74
        __asm _emit 0x3f
        push 104h
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 104h
        push ecx
        ; Exact mapped bytes E8 C2 F6 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 214h]
        push eax
        push 588be7e4h
        push 104h
        mov ecx, dword ptr [ebp - 8]
        add ecx, 104h
        push ecx
        ; Exact mapped bytes E8 7C 36 C8 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x36
        __asm _emit 0xc8
        __asm _emit 0xff
        add esp, 10h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0A: jne 0x5882d787
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x5882d875
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 220h
        ; Exact mapped bytes E8 27 FF FF FF: call 0x5882d6c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x5882d875
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        movzx ecx, ax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 1fh
        ; Exact mapped bytes 0F 87 AE 00 00 00: ja 0x5882d875
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, byte ptr [eax + 5882d898h]
        ; Exact mapped bytes FF 24 8D 80 D8 82 58: jmp dword ptr [ecx*4 + 0x5882d880]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0x82
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 ED FF FF: call 0x5882c520
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x5882d875
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B2 35 C7 FF: call 0x584a0da0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x35
        __asm _emit 0xc7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x5882d875
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 27h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 F4 FF FF: call 0x5882cc40
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 75: jmp 0x5882d875
        __asm _emit 0xeb
        __asm _emit 0x75
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 24 C8 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0xc8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x5882d824
        __asm _emit 0x75
        __asm _emit 0x18
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A F4 FF FF: call 0x5882cc80
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 4F: jmp 0x5882d875
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 46: je 0x5882d875
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 74 3D: je 0x5882d875
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E F4 FF FF: call 0x5882cc80
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 10h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 12 FE FF FF: call 0x5882d670
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 58 45 89 58: call dword ptr [0x58894558]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0ffffffffh
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
