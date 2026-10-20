// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561465 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_00561465_00561465() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 0dch
        push 67c6f0h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 DF 8D F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 0E: je 0x561498
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [eax + 5ch]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 07: je 0x56149f
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x561546
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 100h
        ; Exact mapped bytes 72 29: jb 0x5614d4
        __asm _emit 0x72
        __asm _emit 0x29
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 108h
        ; Exact mapped bytes 77 1D: ja 0x5614d4
        __asm _emit 0x77
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 20h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        neg eax
        sbb eax, eax
        inc eax
        ; Exact mapped bytes EB 72: jmp 0x561546
        __asm _emit 0xeb
        __asm _emit 0x72
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 111h
        ; Exact mapped bytes 75 64: jne 0x561544
        __asm _emit 0x75
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        push 63ccf8h
        ; Exact mapped bytes E8 12 8D F7 FF: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 47: je 0x561544
        __asm _emit 0x74
        __asm _emit 0x47
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 74 2F: je 0x56153f
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 16 00 00: call 0x562b89
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x56153f
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 111h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FD A0 FC FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 02: jmp 0x561546
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
