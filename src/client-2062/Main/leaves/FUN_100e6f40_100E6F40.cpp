// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E6F40 .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_100e6f40_100E6F40() {
    __asm {
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        sub esp, 8
        push ebp
        mov ebp, dword ptr [eax + 0ch]
        push esi
        mov esi, ecx
        test ebp, ebp
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x100e7063
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 70 76 00 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x100e7056
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1dch]
        test eax, eax
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x100e7056
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push eax
        push ecx
        push edx
        push ebp
        ; Exact mapped bytes E8 B8 AE F3 FF: call 0x10021e40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xae
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 10h
        cmp eax, -1
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x100e7056
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        push eax
        push ecx
        ; Exact mapped bytes E8 FD 57 08 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E8 F2 57 08 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esi + 1dch]
        push eax
        mov eax, dword ptr [esi + 1c0h]
        push edx
        xor eax, 0aah
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        ; Exact mapped bytes E8 4A AE F3 FF: call 0x10021e20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xae
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 14h
        xor edi, edi
        mov ebx, dword ptr [eax + 1047ch]
        mov ecx, dword ptr [eax + 10474h]
        ; Exact mapped bytes 66 8B BD 2C 03 00 00: mov di, word ptr [ebp + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 1ch]
        add ebx, ecx
        mov ecx, dword ptr [esi + 23ch]
        push 64h
        push eax
        ; Exact mapped bytes E8 F5 72 00 00: call 0x100ee300
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1c8h]
        mov edx, dword ptr [esi + 1c4h]
        push eax
        mov eax, dword ptr [esp + 18h]
        push 0
        push 0
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
        push edx
        mov edx, dword ptr [esi + 23ch]
        push -1
        push 2
        push eax
        mov eax, dword ptr [esp + 44h]
        push 0
        push 0bh
        push edi
        push ecx
        mov ecx, dword ptr [esp + 50h]
        push ebp
        push edx
        mov edx, dword ptr [esi + 7ch]
        push eax
        add edx, ebx
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 3A FA F7 FF: call 0x10066a90
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ebp, dword ptr [ebp + 78h]
        test ebp, ebp
        ; Exact mapped bytes 0F 85 F8 FE FF FF: jne 0x100e6f59
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebx
        pop esi
        pop ebp
        add esp, 8
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
