// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58872452 .. +0x153 bytes.
extern "C" __declspec(naked) void FUN_58872452_58872452() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        test esi, esi
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x5887258f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 86 20 01 00 00: jbe 0x5887258f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 1ah
        mov byte ptr [esi], 0
        ; Exact mapped bytes 0F 82 13 01 00 00: jb 0x5887258f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 10h]
        test edi, edi
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x5887258f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 14h], 0
        ; Exact mapped bytes 0F 8C FE 00 00 00: jl 0x5887258f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 10h], 0bh
        ; Exact mapped bytes 0F 87 F4 00 00 00: ja 0x5887258f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 17h
        ; Exact mapped bytes 0F 87 EA 00 00 00: ja 0x5887258f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 3bh
        ; Exact mapped bytes 0F 87 E0 00 00 00: ja 0x5887258f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi], 3ch
        ; Exact mapped bytes 0F 87 D7 00 00 00: ja 0x5887258f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [edi + 18h]
        cmp ebx, 6
        ; Exact mapped bytes 0F 87 CB 00 00 00: ja 0x5887258f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [edi + 0ch]
        push dword ptr [edi + 10h]
        push dword ptr [edi + 14h]
        ; Exact mapped bytes E8 50 D9 FF FF: call 0x5886fe22
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test al, al
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x5887258f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, ebx, 3
        add ecx, 588c6078h
        lea edx, [ecx + 3]
        ; Exact mapped bytes EB 06: jmp 0x588724f1
        __asm _emit 0xeb
        __asm _emit 0x06
        mov al, byte ptr [ecx]
        mov byte ptr [esi], al
        inc esi
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 75 F6: jne 0x588724eb
        __asm _emit 0x75
        __asm _emit 0xf6
        mov byte ptr [esi], 20h
        inc esi
        imul ecx, dword ptr [edi + 10h], 3
        add ecx, 588c6090h
        lea edx, [ecx + 3]
        ; Exact mapped bytes EB 06: jmp 0x5887250e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov al, byte ptr [ecx]
        mov byte ptr [esi], al
        inc esi
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 75 F6: jne 0x58872508
        __asm _emit 0x75
        __asm _emit 0xf6
        push 0
        mov byte ptr [esi], 20h
        lea eax, [esi + 1]
        push dword ptr [edi + 0ch]
        push eax
        ; Exact mapped bytes E8 82 00 00 00: call 0x588725a5
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov byte ptr [eax], 20h
        inc eax
        push dword ptr [edi + 8]
        push eax
        ; Exact mapped bytes E8 73 00 00 00: call 0x588725a5
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov byte ptr [eax], 3ah
        inc eax
        push dword ptr [edi + 4]
        push eax
        ; Exact mapped bytes E8 64 00 00 00: call 0x588725a5
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov byte ptr [eax], 3ah
        inc eax
        push dword ptr [edi]
        push eax
        ; Exact mapped bytes E8 56 00 00 00: call 0x588725a5
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov esi, 76ch
        push 64h
        pop ebx
        push 1
        mov byte ptr [ecx], 20h
        mov eax, dword ptr [edi + 14h]
        add eax, esi
        cdq
        idiv ebx
        push eax
        lea eax, [ecx + 1]
        push eax
        ; Exact mapped bytes E8 35 00 00 00: call 0x588725a5
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [edi + 14h]
        add eax, esi
        cdq
        idiv ebx
        push 1
        push edx
        push ecx
        ; Exact mapped bytes E8 22 00 00 00: call 0x588725a5
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 48h
        ; Exact mapped bytes 66 C7 00 0A 00: mov word ptr [eax], 0xa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 11: jmp 0x588725a0
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes E8 DB FE FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 0D EA FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
