// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EA280 .. +0x19F bytes.
extern "C" __declspec(naked) void FUN_585ea280_585EA280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20e74h]
        ; Exact mapped bytes E8 99 68 F6 FF: call 0x58550b30
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 77 01 00 00: je 0x585ea41b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 54 A7 E9 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 8E 5A 01 00 00: jle 0x585ea41b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 3200h
        ; Exact mapped bytes 0F 8D 4D 01 00 00: jge 0x585ea41b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 8E 43 01 00 00: jle 0x585ea41b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 1900h
        ; Exact mapped bytes 0F 8D 36 01 00 00: jge 0x585ea41b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 C6 E9 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1C B7 EA FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb7
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0fa000h
        cdq
        idiv ecx
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 10h]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10704h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 C6 E9 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F0 B6 EA FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb6
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0bb800h
        cdq
        idiv ecx
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 0ch]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10708h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10704h], 0
        ; Exact mapped bytes 7D 0F: jge 0x585ea358
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10704h], 0
        ; Exact mapped bytes EB 54: jmp 0x585ea3ac
        __asm _emit 0xeb
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 C6 E9 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 B6 EA FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb6
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0fa000h
        cdq
        idiv ecx
        mov edx, 3200h
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10704h], edx
        ; Exact mapped bytes 7E 29: jle 0x585ea3ac
        __asm _emit 0x7e
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 55 C6 E9 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7E B6 EA FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb6
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0fa000h
        cdq
        idiv ecx
        mov edx, 3200h
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10704h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10708h], 0
        ; Exact mapped bytes 7D 0F: jge 0x585ea3c7
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10708h], 0
        ; Exact mapped bytes EB 54: jmp 0x585ea41b
        __asm _emit 0xeb
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 C6 E9 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xc6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3A B6 EA FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb6
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0bb800h
        cdq
        idiv ecx
        mov edx, 1900h
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10708h], edx
        ; Exact mapped bytes 7E 29: jle 0x585ea41b
        __asm _emit 0x7e
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 C5 E9 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0F B6 EA FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0bb800h
        cdq
        idiv ecx
        mov edx, 1900h
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10708h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
