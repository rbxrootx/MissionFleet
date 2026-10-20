// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434980 .. +0x15E bytes.
extern "C" __declspec(naked) void FUN_00434980_00434980() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 8]
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 8B 3D A4 50 68 00: mov edi, dword ptr [0x6850a4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        lea esi, [eax + 7]
        ; Exact mapped bytes A1 A0 50 68 00: mov eax, dword ptr [0x6850a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        and esi, 0fffffff8h
        sub eax, edi
        mov ebx, 14h
        lea ecx, [esi + esi*4]
        mov dword ptr [esp + 0ch], ebx
        shl ecx, 2
        cmp eax, ecx
        ; Exact mapped bytes 72 0F: jb 0x4349bd
        __asm _emit 0x72
        __asm _emit 0x0f
        mov eax, edi
        add edi, ecx
        ; Exact mapped bytes 89 3D A4 50 68 00: mov dword ptr [0x6850a4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x434a8e
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, esi
        ; Exact mapped bytes 72 1E: jb 0x4349df
        __asm _emit 0x72
        __asm _emit 0x1e
        xor edx, edx
        div esi
        mov ebx, eax
        mov eax, edi
        mov ecx, ebx
        mov dword ptr [esp + 0ch], ebx
        imul ecx, esi
        add edi, ecx
        ; Exact mapped bytes 89 3D A4 50 68 00: mov dword ptr [0x6850a4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x434a89
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 50 68 00: mov edx, dword ptr [0x68509c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        shr edx, 4
        add edx, 7
        and edx, 0fffffff8h
        test eax, eax
        lea ebx, [edx + ecx*2]
        ; Exact mapped bytes 76 17: jbe 0x434a0c
        __asm _emit 0x76
        __asm _emit 0x17
        dec eax
        shr eax, 3
        lea eax, [eax*4 + 685054h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edi], ecx
        ; Exact mapped bytes 8B 15 A4 50 68 00: mov edx, dword ptr [0x6850a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [eax], edx
        push ebx
        ; Exact mapped bytes E8 4E 7A 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x7a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A3 A4 50 68 00: mov dword ptr [0x6850a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 44: jne 0x434a62
        __asm _emit 0x75
        __asm _emit 0x44
        cmp esi, 80h
        mov ecx, esi
        ; Exact mapped bytes 77 22: ja 0x434a4a
        __asm _emit 0x77
        __asm _emit 0x22
        lea eax, [ecx - 1]
        shr eax, 3
        lea edx, [eax*4 + 685054h]
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x434ac7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, 8
        cmp ecx, 80h
        ; Exact mapped bytes 76 DE: jbe 0x434a28
        __asm _emit 0x76
        __asm _emit 0xde
        push ebx
        ; Exact mapped bytes C7 05 A0 50 68 00 00 00 00 00: mov dword ptr [0x6850a0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 06 7A 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x7a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A3 A4 50 68 00: mov dword ptr [0x6850a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 50 68 00: mov ecx, dword ptr [0x68509c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [esp + 0ch]
        add ecx, ebx
        add eax, ebx
        ; Exact mapped bytes 89 0D 9C 50 68 00: mov dword ptr [0x68509c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 A0 50 68 00: mov dword ptr [0x6850a0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        push esi
        ; Exact mapped bytes E8 DE 0D 00 00: call 0x435860
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 14h]
        add esp, 8
        cmp ebx, 1
        ; Exact mapped bytes 74 34: je 0x434ac2
        __asm _emit 0x74
        __asm _emit 0x34
        lea edx, [esi - 1]
        lea ecx, [eax + esi]
        shr edx, 3
        mov dword ptr [edx*4 + 685054h], ecx
        mov edx, ecx
        add ecx, esi
        mov edi, 1
        dec ebx
        cmp ebx, edi
        ; Exact mapped bytes 74 10: je 0x434abc
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [edx], ecx
        mov ebx, dword ptr [esp + 0ch]
        mov edx, ecx
        inc edi
        add ecx, esi
        dec ebx
        cmp ebx, edi
        ; Exact mapped bytes 75 F0: jne 0x434aac
        __asm _emit 0x75
        __asm _emit 0xf0
        mov dword ptr [edx], 0
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
        mov edi, dword ptr [eax]
        mov dword ptr [edx], edi
        ; Exact mapped bytes A3 A4 50 68 00: mov dword ptr [0x6850a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, ecx
        lea ecx, [esp + 0ch]
        ; Exact mapped bytes A3 A0 50 68 00: mov dword ptr [0x6850a0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes EB 9E: jmp 0x434a7c
        __asm _emit 0xeb
        __asm _emit 0x9e
    }
}
