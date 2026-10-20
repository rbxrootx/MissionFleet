// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00423AED .. +0xFB bytes.
extern "C" __declspec(naked) void FUN_00423aed_00423AED() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        mov esi, dword ptr [ecx + 10h]
        mov eax, dword ptr [ecx + 8]
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 7C 05: jl 0x423b08
        __asm _emit 0x7c
        __asm _emit 0x05
        shl eax, 1
        inc ebx
        ; Exact mapped bytes EB F7: jmp 0x423aff
        __asm _emit 0xeb
        __asm _emit 0xf7
        mov eax, ebx
        push 3fh
        imul eax, eax, 204h
        pop edx
        lea eax, [eax + esi + 144h]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [eax + 8], eax
        mov dword ptr [eax + 4], eax
        add eax, 8
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x423b1d
        __asm _emit 0x75
        __asm _emit 0xf4
        mov edi, ebx
        push 4
        shl edi, 0fh
        add edi, dword ptr [ecx + 0ch]
        push 1000h
        push 8000h
        push edi
        ; Exact mapped bytes FF 15 80 C1 43 00: call dword ptr [0x43c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x423b50
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x423be3
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [edi + 7000h]
        cmp edi, edx
        ; Exact mapped bytes 77 3C: ja 0x423b96
        __asm _emit 0x77
        __asm _emit 0x3c
        lea eax, [edi + 10h]
        or dword ptr [eax - 8], 0ffffffffh
        or dword ptr [eax + 0fech], 0ffffffffh
        lea ecx, [eax + 0ffch]
        mov dword ptr [eax - 4], 0ff0h
        mov dword ptr [eax], ecx
        lea ecx, [eax - 1004h]
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 0fe8h], 0ff0h
        add eax, 1000h
        lea ecx, [eax - 10h]
        cmp ecx, edx
        ; Exact mapped bytes 76 C7: jbe 0x423b5d
        __asm _emit 0x76
        __asm _emit 0xc7
        mov eax, dword ptr [ebp - 4]
        lea ecx, [edi + 0ch]
        add eax, 1f8h
        push 1
        pop edi
        mov dword ptr [eax + 4], ecx
        mov dword ptr [ecx + 8], eax
        lea ecx, [edx + 0ch]
        mov dword ptr [eax + 8], ecx
        mov dword ptr [ecx + 4], eax
        and dword ptr [esi + ebx*4 + 44h], 0
        mov dword ptr [esi + ebx*4 + 0c4h], edi
        mov al, byte ptr [esi + 43h]
        mov cl, al
        inc cl
        test al, al
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [esi + 43h], cl
        ; Exact mapped bytes 75 03: jne 0x423bd3
        __asm _emit 0x75
        __asm _emit 0x03
        or dword ptr [eax + 4], edi
        mov edx, 80000000h
        mov ecx, ebx
        shr edx, cl
        not edx
        and dword ptr [eax + 8], edx
        mov eax, ebx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
