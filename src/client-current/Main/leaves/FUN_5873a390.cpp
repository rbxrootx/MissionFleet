// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873A390 .. +0x17F bytes.
extern "C" __declspec(naked) void FUN_5873a390() {
    __asm {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov edx, dword ptr [edi + 4b0h]
        mov ecx, dword ptr [edi + 4]
        mov eax, 57619f1h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [edi + 4a4h]
        push edx
        mov edx, dword ptr [edi + 4a0h]
        push edx
        push eax
        push ecx
        ; Exact mapped bytes E8 9B 1F 03 00: call 0x5876c360
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [edi + 4b0h]
        lea esi, [eax + eax*4]
        mov ecx, dword ptr [edi + 4a0h]
        sub ecx, dword ptr [edi + 4]
        mov eax, 57619f1h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [edi + 4a4h]
        sub eax, edx
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 1ch], edx
        add esp, 10h
        add esi, esi
        ; Exact mapped bytes DB 44 24 0C: fild dword ptr [esp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        xor ebx, ebx
        ; Exact mapped bytes E8 80 28 24 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes E8 8B 28 24 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr [edi + 328h], eax
        mov edi, dword ptr [edi + 34ch]
        mov eax, 91a2b3c5h
        imul edi
        add edx, edi
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp eax, 3
        ; Exact mapped bytes 0F 87 83 00 00 00: ja 0x5873a4c0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 10 A5 73 58: jmp dword ptr [eax*4 + 0x5873a510]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0x73
        __asm _emit 0x58
        mov eax, 91a2b3c5h
        imul esi
        add edx, esi
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp eax, 3
        ; Exact mapped bytes 77 64: ja 0x5873a4c0
        __asm _emit 0x77
        __asm _emit 0x64
        ; Exact mapped bytes FF 24 85 20 A5 73 58: jmp dword ptr [eax*4 + 0x5873a520]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xa5
        __asm _emit 0x73
        __asm _emit 0x58
        lea eax, [edi + 708h]
        cmp eax, esi
        ; Exact mapped bytes 7F 4F: jg 0x5873a4bc
        __asm _emit 0x7f
        __asm _emit 0x4f
        ; Exact mapped bytes 7D 64: jge 0x5873a4d3
        __asm _emit 0x7d
        __asm _emit 0x64
        sub esi, edi
        sub esi, 0e10h
        mov ebx, esi
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret
        mov eax, 91a2b3c5h
        imul esi
        add edx, esi
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes 78 2B: js 0x5873a4c0
        __asm _emit 0x78
        __asm _emit 0x2b
        cmp eax, 2
        ; Exact mapped bytes 7E 22: jle 0x5873a4bc
        __asm _emit 0x7e
        __asm _emit 0x22
        cmp eax, 3
        ; Exact mapped bytes 75 21: jne 0x5873a4c0
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes EB C2: jmp 0x5873a463
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov eax, 91a2b3c5h
        imul esi
        add edx, esi
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes 74 11: je 0x5873a4c7
        __asm _emit 0x74
        __asm _emit 0x11
        dec eax
        cmp eax, 2
        ; Exact mapped bytes 77 04: ja 0x5873a4c0
        __asm _emit 0x77
        __asm _emit 0x04
        sub esi, edi
        mov ebx, esi
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret
        lea eax, [edi - 708h]
        cmp eax, esi
        ; Exact mapped bytes 7F 2D: jg 0x5873a4fe
        __asm _emit 0x7f
        __asm _emit 0x2d
        ; Exact mapped bytes 7C E9: jl 0x5873a4bc
        __asm _emit 0x7c
        __asm _emit 0xe9
        pop edi
        mov ebx, 708h
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret
        mov eax, 91a2b3c5h
        imul esi
        add edx, esi
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp eax, 3
        ; Exact mapped bytes 77 C9: ja 0x5873a4c0
        __asm _emit 0x77
        __asm _emit 0xc9
        ; Exact mapped bytes FF 24 85 30 A5 73 58: jmp dword ptr [eax*4 + 0x5873a530]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xa5
        __asm _emit 0x73
        __asm _emit 0x58
        sub esi, edi
        add esi, 0e10h
        mov ebx, esi
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret
    }
}
