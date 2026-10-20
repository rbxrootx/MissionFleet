// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004E920 .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_1004e920_1004E920() {
    __asm {
        sub esp, 80h
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 90h]
        push esi
        push edi
        mov ebx, ecx
        mov ecx, dword ptr [esp + 94h]
        lea eax, [esp + 14h]
        push ebp
        push eax
        ; Exact mapped bytes E8 FB A5 0B 00: call 0x10108f40
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xa5
        __asm _emit 0x0b
        __asm _emit 0x00
        lea edi, [ebx + 130h]
        mov ecx, 1fh
        mov esi, eax
        mov eax, 12h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebx + 128h], eax
        mov dword ptr [ebx + 12ch], eax
        mov eax, dword ptr [ebx + 168h]
        imul eax, dword ptr [ebx + 16ch]
        lea ecx, [eax + eax*4]
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 22 DE 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebx + 1ach], eax
        mov eax, dword ptr [ebx + 168h]
        imul eax, dword ptr [ebx + 16ch]
        mov ecx, dword ptr [esp + 98h]
        add esp, 4
        lea edi, [eax + eax*4]
        push ebp
        shl edi, 2
        ; Exact mapped bytes E8 E9 A5 0B 00: call 0x10108f90
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, edi
        mov edi, dword ptr [ebx + 1ach]
        mov esi, eax
        mov ecx, edx
        xor ebp, ebp
        mov eax, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov ecx, dword ptr [ebx + 168h]
        imul ecx, dword ptr [ebx + 16ch]
        test ecx, ecx
        ; Exact mapped bytes 7E 75: jle 0x1004ea49
        __asm _emit 0x7e
        __asm _emit 0x75
        mov edi, dword ptr [esp + 9ch]
        xor edx, edx
        mov eax, dword ptr [ebx + 1ach]
        add eax, edx
        mov ecx, dword ptr [eax]
        cmp ecx, -1
        ; Exact mapped bytes 74 34: je 0x1004ea20
        __asm _emit 0x74
        __asm _emit 0x34
        mov dword ptr [eax + 10h], ecx
        mov ecx, dword ptr [ebx + 1ach]
        mov esi, dword ptr [edi + 160h]
        add ecx, edx
        mov eax, dword ptr [ecx]
        cmp esi, eax
        ; Exact mapped bytes 7E 17: jle 0x1004ea1a
        __asm _emit 0x7e
        __asm _emit 0x17
        test eax, eax
        ; Exact mapped bytes 7C 13: jl 0x1004ea1a
        __asm _emit 0x7c
        __asm _emit 0x13
        mov esi, dword ptr [edi + 190h]
        test esi, esi
        ; Exact mapped bytes 74 09: je 0x1004ea1a
        __asm _emit 0x74
        __asm _emit 0x09
        shl eax, 6
        add eax, esi
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 1A: jmp 0x1004ea34
        __asm _emit 0xeb
        __asm _emit 0x1a
        xor eax, eax
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 14: jmp 0x1004ea34
        __asm _emit 0xeb
        __asm _emit 0x14
        mov dword ptr [eax + 10h], 0ffffffffh
        mov eax, dword ptr [ebx + 1ach]
        mov dword ptr [edx + eax], 0
        mov ecx, dword ptr [ebx + 168h]
        inc ebp
        imul ecx, dword ptr [ebx + 16ch]
        add edx, 14h
        cmp ebp, ecx
        ; Exact mapped bytes 7C 94: jl 0x1004e9dd
        __asm _emit 0x7c
        __asm _emit 0x94
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 80h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
