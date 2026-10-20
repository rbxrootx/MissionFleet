// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D270 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_5887d270_5887D270() {
    __asm {
        push edi
        push esi
        push ebp
        xor edi, edi
        xor ebp, ebp
        mov eax, dword ptr [esp + 14h]
        or eax, eax
        ; Exact mapped bytes 7D 15: jge 0x5887d294
        __asm _emit 0x7d
        __asm _emit 0x15
        inc edi
        inc ebp
        mov edx, dword ptr [esp + 10h]
        neg eax
        neg edx
        sbb eax, 0
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 10h], edx
        mov eax, dword ptr [esp + 1ch]
        or eax, eax
        ; Exact mapped bytes 7D 14: jge 0x5887d2b0
        __asm _emit 0x7d
        __asm _emit 0x14
        inc edi
        mov edx, dword ptr [esp + 18h]
        neg eax
        neg edx
        sbb eax, 0
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 18h], edx
        or eax, eax
        ; Exact mapped bytes 75 28: jne 0x5887d2dc
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 14h]
        xor edx, edx
        div ecx
        mov ebx, eax
        mov eax, dword ptr [esp + 10h]
        div ecx
        mov esi, eax
        mov eax, ebx
        mul dword ptr [esp + 18h]
        mov ecx, eax
        mov eax, esi
        mul dword ptr [esp + 18h]
        add edx, ecx
        ; Exact mapped bytes EB 47: jmp 0x5887d323
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ebx, eax
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        shr ebx, 1
        rcr ecx, 1
        shr edx, 1
        rcr eax, 1
        or ebx, ebx
        ; Exact mapped bytes 75 F4: jne 0x5887d2ea
        __asm _emit 0x75
        __asm _emit 0xf4
        div ecx
        mov esi, eax
        mul dword ptr [esp + 1ch]
        mov ecx, eax
        mov eax, dword ptr [esp + 18h]
        mul esi
        add edx, ecx
        ; Exact mapped bytes 72 0E: jb 0x5887d318
        __asm _emit 0x72
        __asm _emit 0x0e
        cmp edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 77 08: ja 0x5887d318
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 72 0F: jb 0x5887d321
        __asm _emit 0x72
        __asm _emit 0x0f
        cmp eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 76 09: jbe 0x5887d321
        __asm _emit 0x76
        __asm _emit 0x09
        dec esi
        sub eax, dword ptr [esp + 18h]
        sbb edx, dword ptr [esp + 1ch]
        xor ebx, ebx
        sub eax, dword ptr [esp + 10h]
        sbb edx, dword ptr [esp + 14h]
        dec ebp
        ; Exact mapped bytes 79 07: jns 0x5887d335
        __asm _emit 0x79
        __asm _emit 0x07
        neg edx
        neg eax
        sbb edx, 0
        mov ecx, edx
        mov edx, ebx
        mov ebx, ecx
        mov ecx, eax
        mov eax, esi
        dec edi
        ; Exact mapped bytes 75 07: jne 0x5887d349
        __asm _emit 0x75
        __asm _emit 0x07
        neg edx
        neg eax
        sbb edx, 0
        pop ebp
        pop esi
        pop edi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
