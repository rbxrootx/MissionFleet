// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586FF750 .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_586ff750_586FF750() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 88h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8ch], eax
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 1B: je 0x586ff796
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp - 8ch], 1
        ; Exact mapped bytes 74 65: je 0x586ff7e9
        __asm _emit 0x74
        __asm _emit 0x65
        cmp dword ptr [ebp - 8ch], 2
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x586ff839
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x586ff887
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588b3a98h
        ; Exact mapped bytes E8 4C 28 E2 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x28
        __asm _emit 0xe2
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 20ch]
        mov dword ptr [ebp - 90h], ecx
        push 40ff40h
        push -1
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 3D 0D 0C 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x586ff887
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588b3abch
        ; Exact mapped bytes E8 F9 27 E2 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x27
        __asm _emit 0xe2
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 94h], eax
        push 0ff5454h
        push -1
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 EA 0C 0C 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4E: jmp 0x586ff887
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588b3adch
        ; Exact mapped bytes E8 A9 27 E2 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x27
        __asm _emit 0xe2
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 20ch]
        mov dword ptr [ebp - 98h], edx
        push 0ff5454h
        push -1
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 9A 0C 0C 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ecx + 20ch]
        ; Exact mapped bytes E8 18 1F 0C 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x1f
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 AD 17 13 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x17
        __asm _emit 0x13
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
