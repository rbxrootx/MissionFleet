// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58862501 .. +0x14B bytes.
extern "C" __declspec(naked) void FUN_58862501_58862501() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 16: jne 0x58862527
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes E8 59 FF FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 8B EA FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes E9 22 01 00 00: jmp 0x58862649
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 9
        or eax, 0ffffffffh
        mov edi, esi
        pop ecx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edi, dword ptr [ebp + 0ch]
        test edi, edi
        ; Exact mapped bytes 75 11: jne 0x5886254a
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes E8 31 FF FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 63 EA FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 33: jmp 0x5886257d
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [edi + 4]
        mov eax, dword ptr [edi]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], ecx
        cmp ecx, -1
        ; Exact mapped bytes 7F 09: jg 0x58862563
        __asm _emit 0x7f
        __asm _emit 0x09
        ; Exact mapped bytes 7C 17: jl 0x58862573
        __asm _emit 0x7c
        __asm _emit 0x17
        cmp eax, 0ffff5740h
        ; Exact mapped bytes 72 10: jb 0x58862573
        __asm _emit 0x72
        __asm _emit 0x10
        push 7
        pop edx
        cmp ecx, edx
        ; Exact mapped bytes 7C 1A: jl 0x58862584
        __asm _emit 0x7c
        __asm _emit 0x1a
        ; Exact mapped bytes 7F 07: jg 0x58862573
        __asm _emit 0x7f
        __asm _emit 0x07
        cmp eax, 9358efdfh
        ; Exact mapped bytes 76 11: jbe 0x58862584
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes E8 F7 FE FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 16h
        pop esi
        mov dword ptr [eax], esi
        mov eax, esi
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x58862648
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        lea eax, [ebp - 1]
        mov byte ptr [ebp - 1], 0
        push eax
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 B6 00 00 00: call 0x5886264c
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 0ch]
        pop ecx
        pop ecx
        push 0
        mov dword ptr [esi + 14h], eax
        mov eax, 15180h
        push eax
        push dword ptr [ebp - 8]
        push ebx
        ; Exact mapped bytes E8 31 AB 01 00: call 0x5887d0e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        mov edx, 15180h
        imul edx
        mov dword ptr [esi + 1ch], ecx
        sub ebx, eax
        mov eax, dword ptr [ebp - 8]
        sbb eax, edx
        cmp byte ptr [ebp - 1], 0
        mov dword ptr [ebp - 8], eax
        mov edx, 588c60ech
        mov eax, 588c60b8h
        cmove edx, eax
        xor eax, eax
        inc eax
        cmp dword ptr [edx + 4], ecx
        ; Exact mapped bytes 7D 06: jge 0x588625e4
        __asm _emit 0x7d
        __asm _emit 0x06
        inc eax
        cmp dword ptr [edx + eax*4], ecx
        ; Exact mapped bytes 7C FA: jl 0x588625de
        __asm _emit 0x7c
        __asm _emit 0xfa
        dec eax
        mov dword ptr [esi + 10h], eax
        push 0
        sub ecx, dword ptr [edx + eax*4]
        mov eax, 15180h
        push eax
        mov dword ptr [esi + 0ch], ecx
        push dword ptr [edi + 4]
        push dword ptr [edi]
        ; Exact mapped bytes E8 E0 AA 01 00: call 0x5887d0e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        push 7
        add eax, 4
        mov edi, dword ptr [ebp - 8]
        pop ecx
        cdq
        idiv ecx
        push 0
        mov eax, 0e10h
        mov dword ptr [esi + 18h], edx
        push eax
        push edi
        push ebx
        ; Exact mapped bytes E8 C2 AA 01 00: call 0x5887d0e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, 0e10h
        mov dword ptr [esi + 8], eax
        imul ecx
        push 0
        sub ebx, eax
        push 3ch
        sbb edi, edx
        push edi
        push ebx
        ; Exact mapped bytes E8 A9 AA 01 00: call 0x5887d0e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        and dword ptr [esi + 20h], 0
        mov dword ptr [esi + 4], eax
        imul eax, eax, 3ch
        sub ebx, eax
        xor eax, eax
        mov dword ptr [esi], ebx
        pop ebx
        pop edi
        pop esi
        leave
        ret
    }
}
