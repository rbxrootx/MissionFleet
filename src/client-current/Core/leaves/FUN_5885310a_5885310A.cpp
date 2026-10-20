// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885310A .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_5885310a_5885310A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [edi + 3ch]
        mov esi, dword ptr [ecx + 404h]
        test esi, esi
        cmove esi, ecx
        ; Exact mapped bytes E8 89 EA FF FF: call 0x58851bb1
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov bh, byte ptr [ebp + 0ch]
        lea ecx, [esi - 1]
        mov edx, dword ptr [ebp + 8]
        add ecx, eax
        mov dword ptr [edi + 30h], ecx
        mov eax, ecx
        mov dword ptr [ebp - 4], ecx
        mov esi, dword ptr [edi + 24h]
        test esi, esi
        ; Exact mapped bytes 7F 04: jg 0x58853146
        __asm _emit 0x7f
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 74 30: je 0x58853176
        __asm _emit 0x74
        __asm _emit 0x30
        lea eax, [esi - 1]
        mov dword ptr [edi + 24h], eax
        mov al, dl
        and al, 0fh
        shr edx, 4
        add al, 30h
        mov bl, al
        cmp al, 39h
        ; Exact mapped bytes 76 0B: jbe 0x58853166
        __asm _emit 0x76
        __asm _emit 0x0b
        mov al, bh
        xor al, 1
        shl al, 5
        add al, 7
        add al, bl
        mov esi, dword ptr [ebp - 4]
        mov byte ptr [esi], al
        dec dword ptr [edi + 30h]
        mov eax, dword ptr [edi + 30h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB C5: jmp 0x5885313b
        __asm _emit 0xeb
        __asm _emit 0xc5
        sub ecx, eax
        inc eax
        mov dword ptr [edi + 34h], ecx
        mov dword ptr [edi + 30h], eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
