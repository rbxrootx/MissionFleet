// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10095440 .. +0x180 bytes.
extern "C" __declspec(naked) void FUN_10095440_10095440() {
    __asm {
        push -1
        push 10170af6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebp, ebp
        mov eax, dword ptr [esi + 78h]
        lea edi, [esi + 74h]
        test eax, eax
        mov dword ptr [esp + 10h], ebp
        ; Exact mapped bytes 75 04: jne 0x10095472
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 08: jmp 0x1009547a
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [edi + 8]
        sub ecx, eax
        sar ecx, 2
        mov edx, dword ptr [esi + 88h]
        lea ebx, [esi + 84h]
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x1009548e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x10095496
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebx + 8]
        sub eax, edx
        sar eax, 2
        cmp ecx, eax
        ; Exact mapped bytes 75 56: jne 0x100954f0
        __asm _emit 0x75
        __asm _emit 0x56
        push 0c98h
        ; Exact mapped bytes E8 FC 72 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x72
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        test eax, eax
        mov dword ptr [esp + 20h], 0
        ; Exact mapped bytes 74 1E: je 0x100954d5
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 8]
        push 40h
        push 0
        push 0
        add edx, 0c3h
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BD BA FE FF: call 0x10080f90
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100954d7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 8]
        mov dword ptr [esp + 10h], eax
        lea eax, [esp + 10h]
        mov dword ptr [esp + 20h], 0ffffffffh
        push eax
        push 1
        push ecx
        ; Exact mapped bytes EB 7B: jmp 0x1009556b
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov eax, dword ptr [esi + 78h]
        mov edx, dword ptr [esi + 7ch]
        cmp eax, edx
        ; Exact mapped bytes 74 1D: je 0x10095517
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 66 83 B9 8C 0C 00 00 00: cmp word ptr [ecx + 0xc8c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x1009550c
        __asm _emit 0x75
        __asm _emit 0x06
        mov ebp, ecx
        mov dword ptr [esp + 10h], ebp
        add eax, 4
        cmp eax, edx
        ; Exact mapped bytes 75 E7: jne 0x100954fa
        __asm _emit 0x75
        __asm _emit 0xe7
        test ebp, ebp
        ; Exact mapped bytes 75 5B: jne 0x10095572
        __asm _emit 0x75
        __asm _emit 0x5b
        push 0c98h
        ; Exact mapped bytes E8 7F 72 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x72
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        test eax, eax
        mov dword ptr [esp + 20h], 1
        ; Exact mapped bytes 74 1E: je 0x10095552
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esi + 8]
        push 40h
        push 0
        push 0
        add ecx, 0c3h
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 40 BA FE FF: call 0x10080f90
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10095554
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea edx, [esp + 10h]
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [edi + 8]
        push edx
        push 1
        mov dword ptr [esp + 28h], 0ffffffffh
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 9E 06 00 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x100955a7
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [esi + 88h]
        lea ecx, [esp + 10h]
        push ecx
        push 1
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 81 06 00 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 25h]
        and cl, 1fh
        cmp cl, 5
        ; Exact mapped bytes 75 0B: jne 0x100955ab
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [eax]
        mov ecx, eax
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 18h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
