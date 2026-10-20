// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58878260 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_58878260_58878260() {
    __asm {
        cmp byte ptr [edx + 0eh], 5
        ; Exact mapped bytes 75 11: jne 0x58878277
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 66 8B 9D 5C FF FF FF: mov bx, word ptr [ebp - 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x9d
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        or bh, 2
        and bh, 0feh
        mov bl, 3fh
        ; Exact mapped bytes EB 04: jmp 0x5887827b
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 BB 3F 13: mov bx, 0x133f
        __asm _emit 0x66
        __asm _emit 0xbb
        __asm _emit 0x3f
        __asm _emit 0x13
        ; Exact mapped bytes 66 89 9D 5E FF FF FF: mov word ptr [ebp - 0xa2], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 AD 5E FF FF FF: fldcw word ptr [ebp - 0xa2]
        __asm _emit 0xd9
        __asm _emit 0xad
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, 588cac0eh
        ; Exact mapped bytes D9 E5: fxam
        __asm _emit 0xd9
        __asm _emit 0xe5
        mov dword ptr [ebp - 94h], edx
        wait
        ; Exact mapped bytes DD BD 60 FF FF FF: fnstsw word ptr [ebp - 0xa0]
        __asm _emit 0xdd
        __asm _emit 0xbd
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 90h], 0
        wait
        mov cl, byte ptr [ebp - 9fh]
        shl cl, 1
        sar cl, 1
        rol cl, 1
        mov al, cl
        and al, 0fh
        xlatb
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        and ecx, 404h
        mov ebx, edx
        add ebx, eax
        add ebx, 10h
        push eax
        push edx
        push ecx
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        pop ecx
        pop edx
        pop eax
        ; Exact mapped bytes FF 23: jmp dword ptr [ebx]
        __asm _emit 0xff
        __asm _emit 0x23
    }
}
