// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D0E0 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_5887d0e0_5887D0E0() {
    __asm {
        push edi
        push esi
        push ebx
        xor edi, edi
        mov eax, dword ptr [esp + 14h]
        or eax, eax
        ; Exact mapped bytes 7D 14: jge 0x5887d101
        __asm _emit 0x7d
        __asm _emit 0x14
        inc edi
        mov edx, dword ptr [esp + 10h]
        neg eax
        neg edx
        sbb eax, 0
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 10h], edx
        mov eax, dword ptr [esp + 1ch]
        or eax, eax
        ; Exact mapped bytes 7D 14: jge 0x5887d11d
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
        ; Exact mapped bytes 75 18: jne 0x5887d139
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 14h]
        xor edx, edx
        div ecx
        mov ebx, eax
        mov eax, dword ptr [esp + 10h]
        div ecx
        mov edx, ebx
        ; Exact mapped bytes EB 41: jmp 0x5887d17a
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ebx, eax
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        shr ebx, 1
        rcr ecx, 1
        shr edx, 1
        rcr eax, 1
        or ebx, ebx
        ; Exact mapped bytes 75 F4: jne 0x5887d147
        __asm _emit 0x75
        __asm _emit 0xf4
        div ecx
        mov esi, eax
        mul dword ptr [esp + 1ch]
        mov ecx, eax
        mov eax, dword ptr [esp + 18h]
        mul esi
        add edx, ecx
        ; Exact mapped bytes 72 0E: jb 0x5887d175
        __asm _emit 0x72
        __asm _emit 0x0e
        cmp edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 77 08: ja 0x5887d175
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 72 07: jb 0x5887d176
        __asm _emit 0x72
        __asm _emit 0x07
        cmp eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 76 01: jbe 0x5887d176
        __asm _emit 0x76
        __asm _emit 0x01
        dec esi
        xor edx, edx
        mov eax, esi
        dec edi
        ; Exact mapped bytes 75 07: jne 0x5887d184
        __asm _emit 0x75
        __asm _emit 0x07
        neg edx
        neg eax
        sbb edx, 0
        pop ebx
        pop esi
        pop edi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
