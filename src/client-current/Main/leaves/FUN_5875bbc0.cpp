// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875BBC0 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_5875bbc0() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        lea edi, [ebx + 70h]
        mov ecx, 2dh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebx + 184h], eax
        xor ecx, ecx
        mov edx, 4
        mov eax, 64h
        ; Exact mapped bytes 66 89 8B 24 01 00 00: mov word ptr [ebx + 0x124], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8b
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 93 26 01 00 00: mov word ptr [ebx + 0x126], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 83 28 01 00 00: mov word ptr [ebx + 0x128], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 15ch], 0e1h
        mov dword ptr [ebx + 160h], 87h
        mov dword ptr [ebx + 174h], 44h
        mov dword ptr [ebx + 178h], 3ch
        ; Exact mapped bytes E8 0B 10 22 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x10
        __asm _emit 0x22
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5875bc37
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 42h
        mov dword ptr [ebx + 17ch], eax
        ; Exact mapped bytes E8 F1 0F 22 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x0f
        __asm _emit 0x22
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5875bc51
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov ecx, 0aah
        ; Exact mapped bytes 66 31 8B 1A 01 00 00: xor word ptr [ebx + 0x11a], cx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        add eax, 26h
        mov edx, ecx
        ; Exact mapped bytes 66 31 93 1C 01 00 00: xor word ptr [ebx + 0x11c], dx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        mov dword ptr [ebx + 180h], eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
