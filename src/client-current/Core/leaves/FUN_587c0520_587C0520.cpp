// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C0520 .. +0x1FC bytes.
extern "C" __declspec(naked) void FUN_587c0520_587C0520() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588923f3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x587c05e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        lea eax, [ebp - 18h]
        push eax
        push 7fffffffh
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 BE 12 00 00: call 0x587c1830
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 66: jne 0x587c05e1
        __asm _emit 0x75
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        push edx
        ; Exact mapped bytes E8 BB 0A 07 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 6B C8 08 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 C4 3B FF FF: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x587c05df
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 74 0A 07 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 2C 01 00 00: jmp 0x587c070b
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x587c05e6
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x587c070b
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x587c05ed
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 1E 01 00 00: jmp 0x587c070b
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 75 6D: jne 0x587c0666
        __asm _emit 0x75
        __asm _emit 0x6d
        push 18h
        ; Exact mapped bytes E8 04 0A 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 19: je 0x587c062c
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 59 FC FF FF: call 0x587c0280
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x587c0633
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 7ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax + 84h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 80h], eax
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x587c06f6
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        ; Exact mapped bytes E8 97 09 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x09
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 19: je 0x587c0699
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 EC FB FF FF: call 0x587c0280
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x587c06a0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes E8 F1 0D 00 00: call 0x587c14b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes E8 38 75 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x75
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 31 6A E2 FF: call 0x585e7110
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x6a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 80h]
        ; Exact mapped bytes E8 23 75 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x75
        __asm _emit 0xcc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 80h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], ecx
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
