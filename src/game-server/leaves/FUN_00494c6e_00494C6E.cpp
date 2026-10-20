// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00494C6E .. +0x15E bytes.
extern "C" __declspec(naked) void FUN_00494c6e_00494C6E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        mov eax, dword ptr [ebp + 8]
        sub eax, 0c8h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 74 07: je 0x494c92
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 34 01 00 00: jmp 0x494dc6
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 75 2E: jne 0x494ccc
        __asm _emit 0x75
        __asm _emit 0x2e
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 2
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 1E 40 00 00: call 0x498cd0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 34 E5 FF FF: call 0x4931f2
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 08: je 0x494ccc
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x494dc6
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 85 E6 00 00 00: jne 0x494dc4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0a8h
        push ecx
        ; Exact mapped bytes FF 15 78 24 5E 00: call dword ptr [0x5e2478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], 0
        lea edx, [ebp - 50h]
        push edx
        push 58d5d0h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 64h], eax
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 7D 07: jge 0x494d1f
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x494dc6
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        push 0
        lea eax, [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 44 46 01 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        lea ecx, [ebp - 60h]
        push ecx
        ; Exact mapped bytes E8 34 46 01 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 2ch]
        push edx
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0a8h
        push ecx
        lea edx, [ebp - 60h]
        push edx
        push 2
        push 0
        push 58e530h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [ebp - 64h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 0A: je 0x494d81
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        ; Exact mapped bytes FF 15 00 25 5E 00: call dword ptr [0x5e2500]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 0A: je 0x494d91
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes FF 15 00 25 5E 00: call dword ptr [0x5e2500]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 0A: je 0x494da1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes FF 15 00 25 5E 00: call dword ptr [0x5e2500]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 7D 04: jge 0x494db7
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0F: jmp 0x494dc6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a4h], 1
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
