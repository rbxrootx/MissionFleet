// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100181D0 .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_100181d0_100181D0() {
    __asm {
        mov eax, dword ptr [esp + 30h]
        push ebx
        mov ebx, dword ptr [esp + 28h]
        push ebp
        mov ebp, dword ptr [esp + 28h]
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0
        mov ecx, dword ptr [esp + 30h]
        push 0
        push ebx
        push ebp
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 BB 67 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x67
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esp + 2ch]
        mov dword ptr [esi], 101751f8h
        test edi, edi
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 74 29: je 0x10018236
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [edi + 18h]
        lea ecx, [edi + 20h]
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [edi + 1ch]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ecx]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 81 66 24 FF 7F: and word ptr [esi + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov dword ptr [esi + 6ch], edx
        ; Exact mapped bytes 66 8B 54 24 40: mov dx, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        mov dword ptr [esi + 70h], eax
        mov eax, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 89 4C 24 34: mov word ptr [esp + 0x34], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        lea ecx, [esi + 84h]
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        mov dword ptr [esi], 10175518h
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 74h], ebp
        mov dword ptr [esi + 78h], ebx
        mov ebx, dword ptr [eax]
        mov edx, ecx
        mov dword ptr [edx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [esi + 54h], edi
        mov dword ptr [edx + 0ch], eax
        mov edx, dword ptr [ecx]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 66666667h
        mov dword ptr [ecx], edx
        mov ecx, dword ptr [esi + 88h]
        imul ecx
        sar edx, 2
        mov ecx, edx
        mov eax, 66666667h
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esi + 8ch]
        mov dword ptr [esi + 88h], edx
        imul ecx
        mov ecx, dword ptr [esi + 90h]
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 66666667h
        mov dword ptr [esi + 8ch], edx
        imul ecx
        sar edx, 2
        mov ecx, edx
        xor eax, eax
        shr ecx, 1fh
        add edx, ecx
        cmp edi, eax
        mov dword ptr [esi + 90h], edx
        mov dword ptr [esi + 80h], eax
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes 74 28: je 0x1001833d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [edi + 18h]
        mov dword ptr [esi + 0ch], edx
        mov ecx, dword ptr [edi + 1ch]
        lea edx, [edi + 20h]
        mov dword ptr [esi + 10h], ecx
        lea ecx, [esi + 14h]
        mov ebx, dword ptr [edx]
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [edx + 8]
        mov dword ptr [ecx + 8], ebx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 0ch], edx
        mov ecx, dword ptr [esp + 34h]
        mov dword ptr [esi + 58h], eax
        and ecx, 3fffh
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 20h]
        cmp ecx, eax
        ; Exact mapped bytes 75 05: jne 0x1001835b
        __asm _emit 0x75
        __asm _emit 0x05
        mov ecx, 1
        mov ebx, dword ptr [esp + 24h]
        cmp ebx, eax
        ; Exact mapped bytes 75 05: jne 0x10018368
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebx, 1
        mov dword ptr [esi + 64h], eax
        xor eax, eax
        ; Exact mapped bytes 66 8B 47 0C: mov ax, word ptr [edi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        pop edi
        cdq
        idiv ecx
        cdq
        idiv ebx
        mov dword ptr [esi + 68h], eax
        dec eax
        mov dword ptr [esi + 60h], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 30 00: ret 0x30
        __asm _emit 0xc2
        __asm _emit 0x30
        __asm _emit 0x00
    }
}
