// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10044B50 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_10044b50_10044B50() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        xor ebx, ebx
        mov esi, ecx
        cmp edi, ebx
        ; Exact mapped bytes 75 63: jne 0x10044bc2
        __asm _emit 0x75
        __asm _emit 0x63
        ; Exact mapped bytes 66 8B 86 FA 02 00 00: mov ax, word ptr [esi + 0x2fa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0f00h
        cmp eax, 100h
        ; Exact mapped bytes 75 0C: jne 0x10044b7e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 170h], 1
        ; Exact mapped bytes EB 06: jmp 0x10044b84
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 170h], ebx
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E 04 03 00 00: mov cx, word ptr [esi + 0x304]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 158h], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 16 E9 FF FF: call 0x100434b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 30ch]
        mov eax, dword ptr [esi + 0e0h]
        xor edx, 0aaaaaaaah
        cmp edx, eax
        ; Exact mapped bytes 7C 75: jl 0x10044c25
        __asm _emit 0x7c
        __asm _emit 0x75
        mov eax, edi
        mov dword ptr [esi + 0f8h], 40000000h
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 AE 03 00 00: mov ax, word ptr [esi + 0x3ae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0f00h
        cmp eax, 100h
        ; Exact mapped bytes 75 0C: jne 0x10044be1
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 170h], 1
        ; Exact mapped bytes EB 06: jmp 0x10044be7
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 170h], ebx
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E B8 03 00 00: mov cx, word ptr [esi + 0x3b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 158h], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 B3 E8 FF FF: call 0x100434b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 3c0h]
        mov eax, dword ptr [esi + 0e0h]
        xor edx, 0aaaaaaaah
        cmp edx, eax
        ; Exact mapped bytes 7C 12: jl 0x10044c25
        __asm _emit 0x7c
        __asm _emit 0x12
        mov eax, edi
        mov dword ptr [esi + 0f8h], 40000000h
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, edi
        mov dword ptr [esi + 0f8h], ebx
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
