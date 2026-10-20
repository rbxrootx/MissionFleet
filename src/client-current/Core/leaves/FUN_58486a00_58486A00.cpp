// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58486A00 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_58486a00_58486A00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 17 01 00 00: je 0x58486b3a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x58486b04
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 28h], 100h
        ; Exact mapped bytes 74 7F: je 0x58486abb
        __asm _emit 0x74
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 28h], 0
        ; Exact mapped bytes 74 2A: je 0x58486a6f
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        sub ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D4 EA 32 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xea
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4A: jmp 0x58486ab9
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x58486ab9
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 FF FF FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x58486aad
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x58486ab4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x58486b3a
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 47: jmp 0x58486b02
        __asm _emit 0xeb
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 50h], 7
        ; Exact mapped bytes 75 2F: jne 0x58486b02
        __asm _emit 0x75
        __asm _emit 0x2f
        ; Exact mapped bytes E8 94 A1 3C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x00
        cdq
        mov ecx, 6
        idiv ecx
        add edx, 7
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], 50h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        sub eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 28h], eax
        ; Exact mapped bytes EB 0F: jmp 0x58486b13
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        cdq
        mov ecx, 14h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 77 EB 32 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xeb
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
