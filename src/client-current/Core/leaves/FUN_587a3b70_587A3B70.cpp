// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3B70 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_587a3b70_587A3B70() {
    __asm {
        sub esp, 10h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 0ch], eax
        mov ecx, dword ptr [esp + 18h]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 4], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 5], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 6], al
        mov byte ptr [esp + 7], cl
        mov ecx, dword ptr [esp + 1ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 8], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 9], al
        mov eax, ecx
        push esi
        mov esi, dword ptr [esp + 18h]
        shr eax, 8
        mov byte ptr [esp + 0eh], al
        mov byte ptr [esp + 0fh], cl
        test esi, esi
        ; Exact mapped bytes 74 66: je 0x587a3c33
        __asm _emit 0x74
        __asm _emit 0x66
        push 8
        push 634c4c49h
        push esi
        ; Exact mapped bytes E8 86 01 00 00: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        lea eax, [esp + 18h]
        push eax
        push esi
        ; Exact mapped bytes E8 D9 2C 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        lea eax, [esp + 24h]
        push eax
        push esi
        ; Exact mapped bytes E8 BC B9 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 28h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 29h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 2ah], al
        lea eax, [esp + 28h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 37h], cl
        ; Exact mapped bytes E8 90 2C 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        mov ecx, dword ptr [esp + 10h]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 11 D4 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xd4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
