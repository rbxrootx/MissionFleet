// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E4800 .. +0x27C bytes.
extern "C" __declspec(naked) void FUN_584e4800_584E4800() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f62fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 138h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], ecx
        push 80h
        push 0
        lea eax, [ebp - 90h]
        push eax
        ; Exact mapped bytes E8 CC 85 36 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        push 0
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 B6 85 36 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        xor edx, edx
        mov ecx, 0ah
        div ecx
        push edx
        mov eax, dword ptr [ebp + 0ch]
        xor edx, edx
        mov ecx, 0ah
        div ecx
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes A1 D0 4E 8F 58: mov eax, dword ptr [0x588f4ed0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x4e
        __asm _emit 0x8f
        __asm _emit 0x58
        push eax
        lea ecx, [ebp - 90h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov eax, dword ptr [ebp + 0ch]
        xor edx, edx
        mov ecx, 0ah
        div ecx
        push edx
        mov eax, dword ptr [ebp + 0ch]
        xor edx, edx
        mov ecx, 0ah
        div ecx
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes A1 D4 4E 8F 58: mov eax, dword ptr [0x588f4ed4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x4e
        __asm _emit 0x8f
        __asm _emit 0x58
        push eax
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 64h], 0
        ; Exact mapped bytes 74 55: je 0x584e4926
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 118h], ecx
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 26: je 0x584e490f
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 118h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 130h], ecx
        push 1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes FF 95 D0 FE FF FF: call dword ptr [ebp - 0x130]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584e4919
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 55: je 0x584e4987
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 11ch], edx
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 26: je 0x584e4970
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 11ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 138h], edx
        push 1
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes FF 95 C8 FE FF FF: call dword ptr [ebp - 0x138]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x584e497a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 68h], 0
        push 198h
        ; Exact mapped bytes E8 73 C6 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc6
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 1E: je 0x584e49c8
        __asm _emit 0x74
        __asm _emit 0x1e
        push 1
        push 0
        lea ecx, [ebp - 90h]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 F0 B9 29 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb9
        __asm _emit 0x29
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584e49d2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 140h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ebp - 140h]
        mov dword ptr [eax + 64h], ecx
        push 198h
        ; Exact mapped bytes E8 06 C6 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xc6
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 1E: je 0x584e4a35
        __asm _emit 0x74
        __asm _emit 0x1e
        push 1
        push 0
        lea edx, [ebp - 110h]
        push edx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 83 B9 29 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x29
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x584e4a3f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 144h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [ecx + 68h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 DA C5 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc5
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
