// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588791C4 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_588791c4_588791C4() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        mov edx, esi
        mov eax, esi
        sar edx, 6
        and eax, 3fh
        imul ecx, eax, 38h
        push edi
        mov eax, dword ptr [edx*4 + 589699b0h]
        mov al, byte ptr [eax + ecx + 28h]
        test al, 48h
        ; Exact mapped bytes 75 7B: jne 0x58879267
        __asm _emit 0x75
        __asm _emit 0x7b
        test al, al
        ; Exact mapped bytes 79 77: jns 0x58879267
        __asm _emit 0x79
        __asm _emit 0x77
        push 2
        push -1
        push -1
        push esi
        ; Exact mapped bytes E8 12 81 FF FF: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        mov ebx, edx
        mov ecx, edi
        add esp, 10h
        and ecx, ebx
        cmp ecx, -1
        ; Exact mapped bytes 75 16: jne 0x58879222
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes E8 49 92 FE FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [eax], 83h
        ; Exact mapped bytes 74 4E: je 0x58879267
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes E8 51 92 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 47: jmp 0x58879269
        __asm _emit 0xeb
        __asm _emit 0x47
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        lea eax, [ebp - 4]
        push 1
        push eax
        push esi
        ; Exact mapped bytes E8 F3 58 FF FF: call 0x5886eb27
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x58879252
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 66 83 7D FC 1A: cmp word ptr [ebp - 4], 0x1a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0x1a
        ; Exact mapped bytes 75 10: jne 0x58879252
        __asm _emit 0x75
        __asm _emit 0x10
        push ebx
        push edi
        push esi
        ; Exact mapped bytes E8 1B 2C 00 00: call 0x5887be65
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp eax, -1
        ; Exact mapped bytes 74 C7: je 0x58879219
        __asm _emit 0x74
        __asm _emit 0xc7
        xor eax, eax
        push eax
        push eax
        push eax
        push esi
        ; Exact mapped bytes E8 B1 80 FF FF: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, edx
        add esp, 10h
        cmp eax, -1
        ; Exact mapped bytes 74 B2: je 0x58879219
        __asm _emit 0x74
        __asm _emit 0xb2
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
