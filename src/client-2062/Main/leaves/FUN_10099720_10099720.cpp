// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10099720 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_10099720_10099720() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        or eax, 0ffffffffh
        mov ebx, 0fh
        ; Exact mapped bytes 66 89 87 74 02 00 00: mov word ptr [edi + 0x274], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 87 76 02 00 00: mov word ptr [edi + 0x276], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        mov dword ptr [edi + 58h], 100h
        and eax, 0e1ffh
        lea esi, [edi + 118h]
        or eax, 107h
        ; Exact mapped bytes 66 89 47 24: mov word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x24
        mov eax, dword ptr [edi + 184h]
        or byte ptr [eax + 24h], 4
        mov eax, dword ptr [esi]
        push 0fffffeffh
        or byte ptr [eax + 24h], 1
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 EA 59 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 E8: jne 0x10099764
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [edi + 18ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 D4 59 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 190h]
        push 101h
        ; Exact mapped bytes E8 C4 59 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [edi + 19ch]
        mov ebx, 0fh
        mov esi, 0fffeh
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100997b1
        __asm _emit 0x75
        __asm _emit 0xf4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x100997ac
        __asm _emit 0x75
        __asm _emit 0xec
        lea eax, [edi + 244h]
        mov ebx, 6
        mov edx, 2
        mov ecx, dword ptr [eax - 30h]
        add eax, 4
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 EC: jne 0x100997d0
        __asm _emit 0x75
        __asm _emit 0xec
        dec ebx
        ; Exact mapped bytes 75 E4: jne 0x100997cb
        __asm _emit 0x75
        __asm _emit 0xe4
        mov dword ptr [edi + 278h], 1
        pop edi
        pop esi
        pop ebx
        ret
    }
}
