// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055EC8B .. +0x1C1 bytes.
extern "C" __declspec(naked) void FUN_0055ec8b_0055EC8B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f119h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 357h
        push 67b3b8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A1 B5 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb5
        __asm _emit 0xf7
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 52 2B FD FF: call 0x531819
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 76 01 00 00: call 0x55ee4c
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], 1
        push 640d20h
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 0b4h
        push ecx
        ; Exact mapped bytes E8 BC A0 EF FF: call 0x458db0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa0
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 7A: je 0x55ed75
        __asm _emit 0x74
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 1
        ; Exact mapped bytes 74 08: je 0x55ed0f
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 74 1B: je 0x55ed28
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes EB 46: jmp 0x55ed55
        __asm _emit 0xeb
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 24h]
        add eax, 0b4h
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 4D: jmp 0x55ed75
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 24h]
        add eax, 0b4h
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 84h
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 0d4h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 20: jmp 0x55ed75
        __asm _emit 0xeb
        __asm _emit 0x20
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 14: je 0x55ed6f
        __asm _emit 0x74
        __asm _emit 0x14
        push 36ah
        push 67b3b8h
        ; Exact mapped bytes E8 D6 9F FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55ed6f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x55ed55
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 2C: jne 0x55eda7
        __asm _emit 0x75
        __asm _emit 0x2c
        push -1
        push 0
        push 0f18bh
        ; Exact mapped bytes E8 A0 7D F9 FF: call 0x4f6b29
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x7d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 94 2A FD FF: call 0x531833
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x55ee39
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 7A FF FF: call 0x556862
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 0c4h], eax
        ; Exact mapped bytes 74 2C: je 0x55ede6
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 0c4h]
        push eax
        push 5
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 0c4h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 0d8h], 0
        ; Exact mapped bytes 74 2E: je 0x55ee20
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 0d0h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 40 5E FF FF: call 0x554c44
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 56 7A FF FF: call 0x556862
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 75 0F: jne 0x55ee20
        __asm _emit 0x75
        __asm _emit 0x0f
        push 4
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov dword ptr [ebp - 20h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FD 29 FD FF: call 0x531833
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
