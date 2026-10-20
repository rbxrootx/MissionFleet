// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CA530 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004ca530_004CA530() {
    __asm {
        sub esp, 4
        push ebx
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        push esi
        ; Exact mapped bytes E8 70 F4 FF FF: call 0x4c99b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x4ca563
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 18h]
        push eax
        push 0
        push ecx
        push esi
        ; Exact mapped bytes E8 67 11 00 00: call 0x4cb6c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
        xor eax, eax
        ; Exact mapped bytes 66 A1 F4 04 5E 00: mov ax, word ptr [0x5e04f4]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 E0 25 5E 00: call dword ptr [0x5e25e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 62: jne 0x4ca5d9
        __asm _emit 0x75
        __asm _emit 0x62
        lea ebx, [esp + 0ch]
        ; Exact mapped bytes 8B 3D BC 27 5E 00: mov edi, dword ptr [0x5e27bc]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
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
        ; Exact mapped bytes 75 3B: jne 0x4ca5d9
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
        ; Exact mapped bytes 75 26: jne 0x4ca5d9
        __asm _emit 0x75
        __asm _emit 0x26
        xor eax, eax
        ; Exact mapped bytes 66 A1 EE 04 5E 00: mov ax, word ptr [0x5e04ee]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 E8 25 5E 00: call dword ptr [0x5e25e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x5e
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
        ; Exact mapped bytes E8 EA 10 00 00: call 0x4cb6c0
        __asm _emit 0xe8
        __asm _emit 0xea
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
