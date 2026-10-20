// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D190 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_5887d190_5887D190() {
    __asm {
        push ebx
        push edi
        xor edi, edi
        mov eax, dword ptr [esp + 10h]
        or eax, eax
        ; Exact mapped bytes 7D 14: jge 0x5887d1b0
        __asm _emit 0x7d
        __asm _emit 0x14
        inc edi
        mov edx, dword ptr [esp + 0ch]
        neg eax
        neg edx
        sbb eax, 0
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 0ch], edx
        mov eax, dword ptr [esp + 18h]
        or eax, eax
        ; Exact mapped bytes 7D 13: jge 0x5887d1cb
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [esp + 14h]
        neg eax
        neg edx
        sbb eax, 0
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], edx
        or eax, eax
        ; Exact mapped bytes 75 1B: jne 0x5887d1ea
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        xor edx, edx
        div ecx
        mov eax, dword ptr [esp + 0ch]
        div ecx
        mov eax, edx
        xor edx, edx
        dec edi
        ; Exact mapped bytes 79 4E: jns 0x5887d236
        __asm _emit 0x79
        __asm _emit 0x4e
        ; Exact mapped bytes EB 53: jmp 0x5887d23d
        __asm _emit 0xeb
        __asm _emit 0x53
        mov ebx, eax
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 0ch]
        shr ebx, 1
        rcr ecx, 1
        shr edx, 1
        rcr eax, 1
        or ebx, ebx
        ; Exact mapped bytes 75 F4: jne 0x5887d1f8
        __asm _emit 0x75
        __asm _emit 0xf4
        div ecx
        mov ecx, eax
        mul dword ptr [esp + 18h]
        xchg ecx, eax
        mul dword ptr [esp + 14h]
        add edx, ecx
        ; Exact mapped bytes 72 0E: jb 0x5887d223
        __asm _emit 0x72
        __asm _emit 0x0e
        cmp edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 77 08: ja 0x5887d223
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 72 0E: jb 0x5887d22b
        __asm _emit 0x72
        __asm _emit 0x0e
        cmp eax, dword ptr [esp + 0ch]
        ; Exact mapped bytes 76 08: jbe 0x5887d22b
        __asm _emit 0x76
        __asm _emit 0x08
        sub eax, dword ptr [esp + 14h]
        sbb edx, dword ptr [esp + 18h]
        sub eax, dword ptr [esp + 0ch]
        sbb edx, dword ptr [esp + 10h]
        dec edi
        ; Exact mapped bytes 79 07: jns 0x5887d23d
        __asm _emit 0x79
        __asm _emit 0x07
        neg edx
        neg eax
        sbb edx, 0
        pop edi
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
