// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897A930 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_5897a930() {
    __asm {
        mov ecx, dword ptr [esp + 0ch]
        push ebp
        mov ebp, dword ptr [esp + 14h]
        sub ebp, ecx
        test ebp, ebp
        ; Exact mapped bytes 7E 4B: jle 0x5897a98a
        __asm _emit 0x7e
        __asm _emit 0x4b
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 7E 43: jle 0x5897a98a
        __asm _emit 0x7e
        __asm _emit 0x43
        push ebx
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        mov dword ptr [esp + 20h], eax
        mov edi, dword ptr [esp + 1ch]
        mov eax, dword ptr [esi]
        add edi, eax
        mov ecx, ebp
        mov edx, ecx
        add esi, 4
        mov al, byte ptr [edi - 1]
        mov bl, al
        mov bh, bl
        mov eax, ebx
        shl eax, 10h
        ; Exact mapped bytes 66 8B C3: mov ax, bx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc3
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov eax, dword ptr [esp + 20h]
        dec eax
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 75 CB: jne 0x5897a952
        __asm _emit 0x75
        __asm _emit 0xcb
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
