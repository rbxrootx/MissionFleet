// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878D0E0 .. +0x1CE bytes.
extern "C" __declspec(naked) void FUN_5878d0e0() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 12140h]
        push edi
        mov dword ptr [esi + 12138h], 15h
        ; Exact mapped bytes E8 F4 B6 17 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb6
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 12140h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1210ch]
        xor ebx, ebx
        mov dword ptr [eax + 7ch], ebx
        mov edi, 40000000h
        mov dword ptr [eax + 74h], edi
        mov ecx, dword ptr [esi + 1210ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 12110h]
        mov dword ptr [eax + 7ch], ebx
        mov dword ptr [eax + 74h], edi
        mov ecx, dword ptr [esi + 12110h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 12114h]
        mov dword ptr [ecx + 80h], ebx
        mov ecx, dword ptr [esi + 12114h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 12118h]
        mov dword ptr [eax + 7ch], ebx
        mov dword ptr [eax + 74h], edi
        mov ecx, dword ptr [esi + 12118h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 1211ch]
        mov dword ptr [eax + 28h], 100h
        mov dword ptr [eax + 84h], ebx
        mov dword ptr [eax + 8ch], edi
        mov ecx, dword ptr [esi + 1211ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 13ch]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 138h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        cmp dword ptr [esi + 24ch], ebx
        ; Exact mapped bytes 7E 24: jle 0x5878d1e3
        __asm _emit 0x7e
        __asm _emit 0x24
        lea ecx, [esi + 11b5ch]
        lea edx, [ebx + 2]
        ; Exact mapped bytes EB 06: jmp 0x5878d1d0
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x5878d1d0
        __asm _emit 0x75
        __asm _emit 0xed
        lea eax, [esi + 12020h]
        mov edx, 8
        mov edi, edi
        mov ecx, dword ptr [eax - 4]
        mov edi, 0fff0h
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        add eax, 10h
        sub edx, 1
        ; Exact mapped bytes 75 D8: jne 0x5878d1f0
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [esi + 134h]
        cmp eax, ebx
        ; Exact mapped bytes 74 1F: je 0x5878d241
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 80h]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 134h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 8]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 134h], ebx
        xor ebp, ebp
        cmp dword ptr [esi + 24ch], ebx
        ; Exact mapped bytes 7E 45: jle 0x5878d290
        __asm _emit 0x7e
        __asm _emit 0x45
        lea eax, [esi + 8352h]
        lea edi, [esi + 11b64h]
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes EB 03: jmp 0x5878d260
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        mov dword ptr [ecx + 80h], ebx
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 39 19: cmp word ptr [ecx], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x19
        ; Exact mapped bytes 75 05: jne 0x5878d27f
        __asm _emit 0x75
        __asm _emit 0x05
        mov edx, dword ptr [edi]
        mov dword ptr [edx + 50h], ebx
        add dword ptr [esp + 10h], 2
        inc ebp
        add edi, 4
        cmp ebp, dword ptr [esi + 24ch]
        ; Exact mapped bytes 7C D0: jl 0x5878d260
        __asm _emit 0x7c
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 12124h]
        mov dword ptr [esi + 12104h], ebx
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 12128h]
        pop edi
        mov edx, ecx
    }
}
