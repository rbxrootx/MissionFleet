// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588590CA .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_588590ca_588590CA() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, dword ptr [ebp + 8]
        mov al, byte ptr [esi]
        cmp al, 5ch
        ; Exact mapped bytes 74 04: je 0x588590de
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 2fh
        ; Exact mapped bytes 75 05: jne 0x588590e3
        __asm _emit 0x75
        __asm _emit 0x05
        cmp al, byte ptr [esi + 1]
        ; Exact mapped bytes 74 39: je 0x5885911c
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        push eax
        ; Exact mapped bytes E8 A0 8D 00 00: call 0x58861e8c
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 3], al
        lea eax, [ebp - 4]
        push esi
        push eax
        mov byte ptr [ebp - 4], 3dh
        ; Exact mapped bytes 66 C7 45 FE 3A 00: mov word ptr [ebp - 2], 0x3a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0x3a
        __asm _emit 0x00
        ; Exact mapped bytes E8 42 6E 01 00: call 0x5886ff45
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x5885911c
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 FD 92 00 00: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x5885911e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        leave
        ret
    }
}
