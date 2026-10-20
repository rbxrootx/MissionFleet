// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853305 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_58853305_58853305() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [edi + 3ch]
        mov esi, dword ptr [ecx + 404h]
        test esi, esi
        cmove esi, ecx
        ; Exact mapped bytes E8 8C E8 FF FF: call 0x58851bb1
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 0ch]
        dec esi
        add esi, eax
        mov dword ptr [ebp - 8], esi
        mov ecx, esi
        mov dword ptr [edi + 30h], esi
        mov dword ptr [ebp - 4], esi
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [edi + 24h]
        test edx, edx
        ; Exact mapped bytes 7F 06: jg 0x58853346
        __asm _emit 0x7f
        __asm _emit 0x06
        mov eax, esi
        or eax, ebx
        ; Exact mapped bytes 74 3C: je 0x58853382
        __asm _emit 0x74
        __asm _emit 0x3c
        push ebx
        push 0
        push 0ah
        push ebx
        lea eax, [edx - 1]
        push esi
        mov dword ptr [edi + 24h], eax
        ; Exact mapped bytes E8 C8 9C 02 00: call 0x5887d020
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        pop ebx
        nop
        add cl, 30h
        mov esi, eax
        mov ebx, edx
        cmp cl, 39h
        ; Exact mapped bytes 7E 0C: jle 0x58853372
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov al, byte ptr [ebp + 10h]
        xor al, 1
        shl al, 5
        add al, 7
        add cl, al
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], cl
        dec dword ptr [edi + 30h]
        mov ecx, dword ptr [edi + 30h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB B7: jmp 0x58853339
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov esi, dword ptr [ebp - 8]
        lea eax, [ecx + 1]
        sub esi, ecx
        mov dword ptr [edi + 34h], esi
        mov dword ptr [edi + 30h], eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
