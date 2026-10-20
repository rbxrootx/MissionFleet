// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042009D .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_0042009d_0042009D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0cch
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 3C C1 43 00: call dword ptr [0x43c13c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 38 C1 43 00: call dword ptr [0x43c138]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 EA: mov ax, word ptr [ebp - 0x16]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xea
        ; Exact mapped bytes 66 3B 05 8A FC 44 00: cmp ax, word ptr [0x44fc8a]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 3B: jne 0x420102
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 66 8B 45 E8: mov ax, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 66 3B 05 88 FC 44 00: cmp ax, word ptr [0x44fc88]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 2E: jne 0x420102
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 66 8B 45 E6: mov ax, word ptr [ebp - 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe6
        ; Exact mapped bytes 66 3B 05 86 FC 44 00: cmp ax, word ptr [0x44fc86]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 21: jne 0x420102
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 66 8B 45 E2: mov ax, word ptr [ebp - 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe2
        ; Exact mapped bytes 66 3B 05 82 FC 44 00: cmp ax, word ptr [0x44fc82]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x420102
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 45 E0: mov ax, word ptr [ebp - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 66 3B 05 80 FC 44 00: cmp ax, word ptr [0x44fc80]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x420102
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes A1 78 FC 44 00: mov eax, dword ptr [0x44fc78]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes EB 45: jmp 0x420147
        __asm _emit 0xeb
        __asm _emit 0x45
        lea eax, [ebp - 0cch]
        push eax
        ; Exact mapped bytes FF 15 0C C2 43 00: call dword ptr [0x43c20c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 74 1B: je 0x42012f
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp eax, 2
        ; Exact mapped bytes 75 12: jne 0x42012b
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 7D CE 00: cmp word ptr [ebp - 0x32], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xce
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x42012b
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 05: je 0x42012b
        __asm _emit 0x74
        __asm _emit 0x05
        push 1
        pop eax
        ; Exact mapped bytes EB 07: jmp 0x420132
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x420132
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        push esi
        push edi
        lea esi, [ebp - 20h]
        mov edi, 44fc80h
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        pop edi
        ; Exact mapped bytes A3 78 FC 44 00: mov dword ptr [0x44fc78], eax
        __asm _emit 0xa3
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        pop esi
        push eax
        movzx eax, word ptr [ebp - 4]
        push eax
        movzx eax, word ptr [ebp - 6]
        push eax
        movzx eax, word ptr [ebp - 8]
        push eax
        movzx eax, word ptr [ebp - 0ah]
        push eax
        movzx eax, word ptr [ebp - 0eh]
        push eax
        movzx eax, word ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 47 5F 00 00: call 0x4260b2
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add esp, 1ch
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x420177
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [ecx], eax
        leave
        ret
    }
}
