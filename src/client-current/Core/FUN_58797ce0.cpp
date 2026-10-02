// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Splits on caller-provided delimiter bytes, skips empty lines, strips a trailing CR, and stores strings.
// Indexed function extent: 0x58797CE0 .. +0x1F7 bytes.
extern "C" __declspec(naked) void FUN_58797ce0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889152dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 6ch
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
        mov dword ptr [ebp - 58h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6C 94 0B 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 5E FE FF FF: call 0x58797b80
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 54h]
        add ecx, 1
        push ecx
        ; Exact mapped bytes E8 06 93 09 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 54h]
        add eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 B6 50 0B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 54h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 0F C4 01 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [edx + 4], 0
        lea eax, [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 E1 FD 0B 00: call 0x58857b70
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x58797e7d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 D8 93 0B 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x93
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 1
        push ecx
        ; Exact mapped bytes E8 88 92 09 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 4ch]
        add eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 38 50 0B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 91 C3 01 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 44h]
        add edx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 0F BE 42 FF: movsx eax, byte ptr [edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0xff
        cmp eax, 0dh
        ; Exact mapped bytes 75 0A: jne 0x58797e0b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 44h]
        add ecx, dword ptr [ebp - 4ch]
        mov byte ptr [ecx - 1], 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 B9 1C D1 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x1c
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 68h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 FA D4 D2 FF: call 0x584c5320
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd4
        __asm _emit 0xd2
        __asm _emit 0xff
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 02 1F D1 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1f
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 8
        mov dword ptr [ebp - 6ch], ecx
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 2C 03 00 00: call 0x58798170
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        ; Exact mapped bytes E8 1D FD 0B 00: call 0x58857b70
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 19: je 0x58797e78
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        ; Exact mapped bytes E8 DD 91 09 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x91
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes E9 18 FF FF FF: jmp 0x58797d95
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 19: je 0x58797e9c
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        ; Exact mapped bytes E8 B9 91 09 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x91
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 8
        ; Exact mapped bytes E8 89 6C D3 FF: call 0x584ceb30
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 B7 1E D1 FF: call 0x584a9d70
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x1e
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 78h]
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
        ; Exact mapped bytes E8 7F 91 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x91
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
