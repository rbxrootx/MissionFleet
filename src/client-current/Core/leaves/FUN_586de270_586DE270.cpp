// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DE270 .. +0x1E9 bytes.
extern "C" __declspec(naked) void FUN_586de270_586DE270() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 498h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 370h
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0D 74 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 498h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 3a2h
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E3 73 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x73
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4a0h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FD 7B DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7b
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 0C 06 96 58: cmp ecx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 0E: je 0x586de300
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 14 06 96 58: cmp edx, dword ptr [0x58960614]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 20: jne 0x586de320
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 498h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 71 CE 0D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xce
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ach], 8
        ; Exact mapped bytes 74 10: je 0x586de33c
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 9
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x586de3be
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4c8h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3E 7C DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x7c
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4cch]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 28 7C DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x7c
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586de37b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 1D: jge 0x586de39e
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 4d0h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F5 7B DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7b
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586de372
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 498h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 23 7B DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x7b
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], 0ffffffffh
        push 120000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 2B 00 00: call 0x586e0ef0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 150h]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F2 79 DA FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x79
        __asm _emit 0xda
        __asm _emit 0xff
        push 10h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 0f8h
        push edx
        ; Exact mapped bytes E8 0F EA 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xea
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b4h], 20000h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b8h], 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4ach], 0
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 10 06 96 58: cmp eax, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1D: je 0x586de455
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 2C 06 96 58: cmp ecx, dword ptr [0x5896062c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 0F: je 0x586de455
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 194h]
        ; Exact mapped bytes E8 8C A9 06 00: call 0x58748de0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa9
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
