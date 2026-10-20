// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041418D .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_0041418d_0041418D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        push dword ptr [ebp + 0ch]
        mov esi, ecx
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes E8 36 B8 00 00: call 0x41f9da
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        pop ecx
        movzx eax, bx
        dec eax
        dec eax
        ; Exact mapped bytes 74 24: je 0x4141d3
        __asm _emit 0x74
        __asm _emit 0x24
        dec eax
        ; Exact mapped bytes 74 18: je 0x4141ca
        __asm _emit 0x74
        __asm _emit 0x18
        sub eax, 3
        ; Exact mapped bytes 75 23: jne 0x4141da
        __asm _emit 0x75
        __asm _emit 0x23
        xor eax, eax
        cmp dword ptr [ebp + 0ch], eax
        setle al
        dec eax
        and al, 0fdh
        add eax, 4
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB 10: jmp 0x4141da
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp + 8], 4
        ; Exact mapped bytes EB 07: jmp 0x4141da
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 1
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 83 FB 06: cmp bx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x06
        push 1
        ; Exact mapped bytes 74 18: je 0x4141fd
        __asm _emit 0x74
        __asm _emit 0x18
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 23 FF FF FF: call 0x414110
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        cmp dword ptr [esi + 0e4h], ecx
        ; Exact mapped bytes EB 1D: jmp 0x41421a
        __asm _emit 0xeb
        __asm _emit 0x1d
        push dword ptr [ebp + 8]
        mov ecx, esi
        ; Exact mapped bytes E8 09 FF FF FF: call 0x414110
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        cmp dword ptr [esi + 0e4h], ecx
        ; Exact mapped bytes 75 06: jne 0x41421d
        __asm _emit 0x75
        __asm _emit 0x06
        dec dword ptr [ebp - 4]
        sete cl
        ; Exact mapped bytes 66 83 3F 64: cmp word ptr [edi], 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3f
        __asm _emit 0x64
        ; Exact mapped bytes 74 3C: je 0x41425f
        __asm _emit 0x74
        __asm _emit 0x3c
        test ecx, ecx
        ; Exact mapped bytes 75 38: jne 0x41425f
        __asm _emit 0x75
        __asm _emit 0x38
        push dword ptr [ebp + 10h]
        mov ecx, esi
        push 1
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DA FE FF FF: call 0x414110
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 FB 06: cmp bx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x06
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes 75 0F: jne 0x41424e
        __asm _emit 0x75
        __asm _emit 0x0f
        xor ecx, ecx
        cmp dword ptr [esi + 0e4h], ecx
        ; Exact mapped bytes 75 10: jne 0x414259
        __asm _emit 0x75
        __asm _emit 0x10
        dec dword ptr [ebp - 4]
        ; Exact mapped bytes EB 08: jmp 0x414256
        __asm _emit 0xeb
        __asm _emit 0x08
        xor ecx, ecx
        cmp dword ptr [esi + 0e4h], ecx
        sete cl
        ; Exact mapped bytes 66 3D 64 00: cmp ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 75 C4: jne 0x414223
        __asm _emit 0x75
        __asm _emit 0xc4
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
