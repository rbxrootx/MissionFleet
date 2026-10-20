// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58852FF6 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_58852ff6_58852FF6() {
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
        ; Exact mapped bytes E8 9D EB FF FF: call 0x58851bb1
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        dec esi
        add esi, eax
        mov dword ptr [ebp - 4], esi
        mov eax, esi
        mov dword ptr [edi + 30h], esi
        mov ebx, esi
        mov esi, dword ptr [ebp + 8]
        mov ecx, dword ptr [edi + 24h]
        test ecx, ecx
        ; Exact mapped bytes 7F 04: jg 0x5885302f
        __asm _emit 0x7f
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 74 33: je 0x58853062
        __asm _emit 0x74
        __asm _emit 0x33
        lea eax, [ecx - 1]
        xor edx, edx
        mov dword ptr [edi + 24h], eax
        mov eax, esi
        push 0ah
        pop ecx
        div ecx
        add dl, 30h
        mov esi, eax
        cmp dl, 39h
        ; Exact mapped bytes 7E 0E: jle 0x58853056
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov cl, byte ptr [ebp + 0ch]
        xor cl, 1
        shl cl, 5
        add cl, 7
        add dl, cl
        mov byte ptr [ebx], dl
        dec dword ptr [edi + 30h]
        mov eax, dword ptr [edi + 30h]
        mov ebx, eax
        ; Exact mapped bytes EB C2: jmp 0x58853024
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov esi, dword ptr [ebp - 4]
        sub esi, eax
        inc eax
        mov dword ptr [edi + 34h], esi
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
