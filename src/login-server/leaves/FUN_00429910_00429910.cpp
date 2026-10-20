// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429910 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_00429910_00429910() {
    __asm {
        sub esp, 4
        push ebx
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        push esi
        ; Exact mapped bytes E8 00 F5 FF FF: call 0x428e20
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x429943
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 18h]
        push eax
        push 0
        push ecx
        push esi
        ; Exact mapped bytes E8 E7 10 00 00: call 0x42aa20
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
        xor eax, eax
        ; Exact mapped bytes 66 A1 14 14 45 00: mov ax, word ptr [0x451414]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 5C C4 43 00: call dword ptr [0x43c45c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 62: jne 0x4299b9
        __asm _emit 0x75
        __asm _emit 0x62
        lea ebx, [esp + 0ch]
        ; Exact mapped bytes 8B 3D 4C C5 43 00: mov edi, dword ptr [0x43c54c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esp + 0ch], 29ah
        push ebx
        push 0
        push 1944h
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp dword ptr [esp + 0ch], 29ah
        ; Exact mapped bytes 75 3B: jne 0x4299b9
        __asm _emit 0x75
        __asm _emit 0x3b
        push ebx
        push 0
        push 1943h
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp dword ptr [esp + 0ch], 29ah
        ; Exact mapped bytes 75 26: jne 0x4299b9
        __asm _emit 0x75
        __asm _emit 0x26
        xor eax, eax
        ; Exact mapped bytes 66 A1 0E 14 45 00: mov ax, word ptr [0x45140e]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 64 C4 43 00: call dword ptr [0x43c464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 44 24 18: mov ax, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push 0
        push eax
        push esi
        ; Exact mapped bytes E8 6A 10 00 00: call 0x42aa20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
    }
}
