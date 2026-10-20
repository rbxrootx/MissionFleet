// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004690B0 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_004690b0_004690B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 8C 8B 68 00 00: cmp dword ptr [0x688b8c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x4690d2
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A6 D6 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x469199
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 D7 77 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 09: jmp 0x4690e7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 0F B6 08: movzx cx, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 74 7C: je 0x46917b
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        xor ecx, ecx
        mov cl, byte ptr [eax + 688ca1h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 50: je 0x469166
        __asm _emit 0x74
        __asm _emit 0x50
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 75 0E: jne 0x469138
        __asm _emit 0x75
        __asm _emit 0x0e
        push 19h
        ; Exact mapped bytes E8 1F 78 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes EB 61: jmp 0x469199
        __asm _emit 0xeb
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        shl edx, 8
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        or edx, ecx
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 75 12: jne 0x469164
        __asm _emit 0x75
        __asm _emit 0x12
        push 19h
        ; Exact mapped bytes E8 F7 77 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        sub eax, 1
        ; Exact mapped bytes EB 35: jmp 0x469199
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes EB 10: jmp 0x469176
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 75 02: jne 0x469176
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x46917b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 63 FF FF FF: jmp 0x4690de
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 19h
        ; Exact mapped bytes E8 CE 77 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 05: jne 0x469197
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 02: jmp 0x469199
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
