// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D9630 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_100d9630_100D9630() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0ch]
        inc eax
        lea esi, [edi + 1a0h]
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push 101ad0e8h
        push esi
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x100d9681
        __asm _emit 0x75
        __asm _emit 0x25
        mov byte ptr [esi], al
        ; Exact mapped bytes 66 8B 87 9C 01 00 00: mov ax, word ptr [edi + 0x19c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x100d9671
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x100d967a
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 C7 87 9C 01 00 00 00 00: mov word ptr [edi + 0x19c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x87
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ach]
        push esi
        ; Exact mapped bytes E8 B3 F1 F3 FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf1
        __asm _emit 0xf3
        __asm _emit 0xff
        pop edi
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
