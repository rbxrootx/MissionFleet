// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10074370 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_10074370_10074370() {
    __asm {
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        mov bl, byte ptr [esp + 8]
        push esi
        mov esi, dword ptr [eax + 0ch]
        push edi
        test esi, esi
        mov edi, ecx
        ; Exact mapped bytes 74 18: je 0x1007439d
        __asm _emit 0x74
        __asm _emit 0x18
        cmp byte ptr [esi + 330h], bl
        ; Exact mapped bytes 75 09: jne 0x10074396
        __asm _emit 0x75
        __asm _emit 0x09
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 3A B1 07 00: call 0x100ef4d0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb1
        __asm _emit 0x07
        __asm _emit 0x00
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 E8: jne 0x10074385
        __asm _emit 0x75
        __asm _emit 0xe8
        mov esi, dword ptr [esp + 14h]
        mov ecx, esi
        and ecx, 0ffffh
        push ecx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 1B 7E FB FF: call 0x1002c1d0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        mov ecx, eax
        ; Exact mapped bytes E8 12 B1 07 00: call 0x100ef4d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb1
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes 66 39 B0 2C 03 00 00: cmp word ptr [eax + 0x32c], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 19: jne 0x100743e9
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [edi + 7ch]
        mov ecx, dword ptr [edi + 174h]
        or al, 4
        mov dword ptr [edi + 7ch], eax
        ; Exact mapped bytes E8 DD 18 05 00: call 0x100c5cc0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp bl, byte ptr [eax + 330h]
        ; Exact mapped bytes 75 0B: jne 0x100743fc
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [edi + 174h]
        ; Exact mapped bytes E8 44 19 05 00: call 0x100c5d40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
