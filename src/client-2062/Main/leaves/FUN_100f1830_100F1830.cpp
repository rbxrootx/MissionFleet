// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1830 .. +0x1AF bytes.
extern "C" __declspec(naked) void FUN_100f1830_100F1830() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        lea edi, [ebx + 4]
        mov ecx, 2bh
        mov esi, eax
        push 0
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 1ch]
        add eax, 44h
        push ecx
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 C8 FC FF FF: call 0x100f1520
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebx + 0b4h]
        mov ecx, 0e0h
        xor eax, eax
        mov edi, edx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, edx
        mov ecx, 20h
        mov edx, 0aah
        mov esi, dword ptr [eax]
        add eax, 1ch
        and esi, 0fffff55fh
        or esi, 540h
        mov dword ptr [eax - 1ch], esi
        mov byte ptr [eax - 4], dl
        mov esi, dword ptr [eax - 8]
        and esi, 0caa2a8aah
        or esi, 0aa2a8aah
        mov dword ptr [eax - 8], esi
        mov esi, dword ptr [eax - 18h]
        and esi, 0fc0000aah
        or esi, edx
        dec ecx
        mov dword ptr [eax - 18h], esi
        ; Exact mapped bytes 75 C6: jne 0x100f1875
        __asm _emit 0x75
        __asm _emit 0xc6
        mov al, byte ptr [ebx + 0a8h]
        xor ebp, ebp
        test al, al
        ; Exact mapped bytes 0F 86 03 01 00 00: jbe 0x100f19c2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [eax]
        and ecx, 1fh
        lea esi, [ecx*8]
        sub esi, ecx
        mov ecx, 7
        lea edi, [ebx + esi*4 + 0b4h]
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [eax]
        add eax, 1ch
        and ecx, 1fh
        lea esi, [ecx*8]
        sub esi, ecx
        mov edi, dword ptr [ebx + esi*4 + 0b4h]
        lea ecx, [ebx + esi*4 + 0b4h]
        xor edi, 540h
        mov dword ptr [ecx], edi
        mov ecx, dword ptr [eax - 1ch]
        and ecx, 1fh
        lea esi, [ecx*8]
        sub esi, ecx
        xor byte ptr [ebx + esi*4 + 0cch], dl
        lea ecx, [ebx + esi*4 + 0cch]
        mov ecx, dword ptr [eax - 1ch]
        and ecx, 1fh
        lea esi, [ecx*8]
        sub esi, ecx
        mov edi, dword ptr [ebx + esi*4 + 0c8h]
        lea ecx, [ebx + esi*4 + 0c8h]
        xor edi, edx
        mov dword ptr [ecx], edi
        mov ecx, dword ptr [eax - 1ch]
        and ecx, 1fh
        lea esi, [ecx*8]
        sub esi, ecx
        mov edi, dword ptr [ebx + esi*4 + 0c8h]
        lea ecx, [ebx + esi*4 + 0c8h]
        xor edi, 2a800h
        mov dword ptr [ecx], edi
        mov ecx, dword ptr [eax - 1ch]
        and ecx, 1fh
        lea esi, [ecx*8]
        sub esi, ecx
        mov edi, dword ptr [ebx + esi*4 + 0c8h]
        lea ecx, [ebx + esi*4 + 0c8h]
        xor edi, 0aa00000h
        mov dword ptr [ecx], edi
        mov ecx, dword ptr [eax - 1ch]
        and ecx, 1fh
        lea esi, [ecx*8]
        sub esi, ecx
        lea ecx, [ebx + esi*4 + 0b8h]
        mov esi, dword ptr [ebx + esi*4 + 0b8h]
        xor esi, edx
        inc ebp
        mov dword ptr [ecx], esi
        xor ecx, ecx
        mov cl, byte ptr [ebx + 0a8h]
        cmp ebp, ecx
        ; Exact mapped bytes 0F 8C 01 FF FF FF: jl 0x100f18c3
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea edi, [ebx + 8c0h]
        mov ecx, 8
        xor eax, eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, ebx
        ; Exact mapped bytes E8 C8 04 00 00: call 0x100f1ea0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
