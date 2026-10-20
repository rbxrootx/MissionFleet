// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851C62 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_58851c62_58851C62() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, ecx
        cmp esi, 3fffffffh
        ; Exact mapped bytes 76 12: jbe 0x58851c89
        __asm _emit 0x76
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 0ch
        xor al, al
        ; Exact mapped bytes EB 54: jmp 0x58851cdd
        __asm _emit 0xeb
        __asm _emit 0x54
        push ebx
        xor ebx, ebx
        shl esi, 2
        cmp dword ptr [edi + 404h], ebx
        ; Exact mapped bytes 75 08: jne 0x58851c9f
        __asm _emit 0x75
        __asm _emit 0x08
        cmp esi, 400h
        ; Exact mapped bytes 76 08: jbe 0x58851ca7
        __asm _emit 0x76
        __asm _emit 0x08
        cmp esi, dword ptr [edi + 400h]
        ; Exact mapped bytes 77 04: ja 0x58851cab
        __asm _emit 0x77
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 31: jmp 0x58851cdc
        __asm _emit 0xeb
        __asm _emit 0x31
        push esi
        ; Exact mapped bytes E8 1F B2 01 00: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x58851cd3
        __asm _emit 0x74
        __asm _emit 0x1a
        lea eax, [ebp - 4]
        push eax
        lea ecx, [edi + 404h]
        ; Exact mapped bytes E8 79 19 00 00: call 0x58853641
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov bl, 1
        mov dword ptr [edi + 400h], esi
        push eax
        ; Exact mapped bytes E8 37 AF 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov al, bl
        pop ebx
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
