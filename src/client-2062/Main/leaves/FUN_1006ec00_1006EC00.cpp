// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006EC00 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_1006ec00_1006EC00() {
    __asm {
        push ebx
        mov ebx, dword ptr [ecx + 10504h]
        push esi
        push edi
        test ebx, ebx
        ; Exact mapped bytes 74 58: je 0x1006ec65
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [esp + 10h]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov edi, dword ptr [ecx + 10508h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov esi, edx
        cmp esi, edi
        ; Exact mapped bytes 7D 37: jge 0x1006ec65
        __asm _emit 0x7d
        __asm _emit 0x37
        test esi, esi
        ; Exact mapped bytes 7E 33: jle 0x1006ec65
        __asm _emit 0x7e
        __asm _emit 0x33
        mov edx, dword ptr [esp + 14h]
        mov eax, 2fa0be83h
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [ecx + 1050ch]
        cmp edx, eax
        ; Exact mapped bytes 7D 14: jge 0x1006ec65
        __asm _emit 0x7d
        __asm _emit 0x14
        test edx, edx
        ; Exact mapped bytes 7E 10: jle 0x1006ec65
        __asm _emit 0x7e
        __asm _emit 0x10
        imul edx, edi
        add edx, esi
        xor eax, eax
        pop edi
        pop esi
        mov al, byte ptr [edx + ebx]
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
