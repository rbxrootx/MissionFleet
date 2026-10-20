// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427F90 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_00427f90_00427F90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0bch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0bch]
        mov ecx, 2fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 94 FD FF: call 0x4014a1
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 66 89 42 4E: mov word ptr [edx + 0x4e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 99 FD FF: call 0x401960
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x99
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 66 89 42 50: mov word ptr [edx + 0x50], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        cmp dword ptr [ecx + 18h], 64h
        ; Exact mapped bytes 7D 1D: jge 0x428000
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 4E: mov cx, word ptr [eax + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x4e
        test ecx, ecx
        ; Exact mapped bytes 75 0D: jne 0x428000
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [eax + 18h], 64h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 73 1D: jae 0x428029
        __asm _emit 0x73
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 50: mov dx, word ptr [ecx + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
        test edx, edx
        ; Exact mapped bytes 75 0D: jne 0x428029
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 1ch], 0
        push 78h
        push 0
        lea edx, [ebp - 7ch]
        push edx
        ; Exact mapped bytes E8 8A D8 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [eax + 0ch]
        mov ecx, 1eh
        lea edi, [ebp - 7ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea ecx, [ebp - 7ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes E8 7D 92 FD FF: call 0x4012d5
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F1 98 FD FF: call 0x401951
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 0bch
        cmp ebp, esp
        ; Exact mapped bytes E8 80 CD 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
