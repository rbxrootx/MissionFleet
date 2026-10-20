// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FB940 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_100fb940_100FB940() {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        lea edi, [ebx + 70h]
        mov ecx, 2dh
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 8B 8B 0A 01 00 00: mov cx, word ptr [ebx + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 418h], eax
        and ecx, 0e00h
        ; Exact mapped bytes 8B 35 20 51 17 10: mov esi, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        sub ecx, 200h
        mov dword ptr [ebx + 404h], 44h
        neg ecx
        sbb ecx, ecx
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 10 01 00 00: mov ax, word ptr [ebx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and ecx, 36h
        imul eax, eax
        add ecx, 10h
        mov dword ptr [ebx + 408h], 3ch
        mov dword ptr [ebx + 3ech], ecx
        lea ecx, [eax + eax*8]
        shl ecx, 4
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ebx + 180h], edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100fb9d1
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 42h
        mov dword ptr [ebx + 40ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100fb9e8
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 26h
        pop edi
        mov dword ptr [ebx + 410h], eax
        mov eax, 0aah
        ; Exact mapped bytes 66 31 83 1A 01 00 00: xor word ptr [ebx + 0x11a], ax
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 31 83 1C 01 00 00: xor word ptr [ebx + 0x11c], ax
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x83
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
