// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882CF60 .. +0x20A bytes.
extern "C" __declspec(naked) void FUN_5882cf60_5882CF60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1b4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1a4h], ecx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 6]
        cmp ecx, 8000h
        ; Exact mapped bytes 75 46: jne 0x5882cfce
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ach], eax
        cmp dword ptr [ebp - 1ach], 80000002h
        ; Exact mapped bytes 74 02: je 0x5882cfa2
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 27: jmp 0x5882cfc9
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 1b0h], edx
        cmp dword ptr [ebp - 1b0h], 80020010h
        ; Exact mapped bytes 74 02: je 0x5882cfbc
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0D: jmp 0x5882cfc9
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 1a4h]
        mov dword ptr [eax + 30h], 2
        ; Exact mapped bytes E9 87 01 00 00: jmp 0x5882d155
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 6]
        cmp edx, 8001h
        ; Exact mapped bytes 0F 85 59 01 00 00: jne 0x5882d13a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1a8h], ecx
        cmp dword ptr [ebp - 1a8h], 80010109h
        ; Exact mapped bytes 77 2D: ja 0x5882d026
        __asm _emit 0x77
        __asm _emit 0x2d
        cmp dword ptr [ebp - 1a8h], 80010109h
        ; Exact mapped bytes 74 59: je 0x5882d05e
        __asm _emit 0x74
        __asm _emit 0x59
        cmp dword ptr [ebp - 1a8h], 80010001h
        ; Exact mapped bytes 74 2A: je 0x5882d03b
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp dword ptr [ebp - 1a8h], 8001000fh
        ; Exact mapped bytes 0F 84 FC 00 00 00: je 0x5882d11d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x5882d138
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1a8h], 8001010bh
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x5882d0f5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x5882d138
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 8002h
        push 0
        push 80000002h
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 38 F9 FF FF: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x5882d138
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], 0
        mov edx, dword ptr [ebp - 1a4h]
        mov eax, dword ptr [edx + 128h]
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 1a4h]
        mov edx, dword ptr [ecx + 12ch]
        mov dword ptr [ebp - 0d4h], edx
        mov eax, dword ptr [ebp - 1a4h]
        mov ecx, dword ptr [eax + 120h]
        mov dword ptr [ebp - 0d0h], ecx
        mov edx, dword ptr [ebp - 1a4h]
        mov eax, dword ptr [edx + 124h]
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 0d8h]
        add ecx, dword ptr [ebp - 0d0h]
        add ecx, dword ptr [ebp - 0cch]
        add ecx, dword ptr [ebp - 0d4h]
        not ecx
        mov dword ptr [ebp - 8], ecx
        push 0
        push 0d8h
        lea edx, [ebp - 0dch]
        push edx
        push 80010109h
        push 0
        push 80020010h
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 9E F8 FF FF: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 43: jmp 0x5882d138
        __asm _emit 0xeb
        __asm _emit 0x43
        push 0
        push 0c4h
        lea eax, [ebp - 1a0h]
        push eax
        push 8001010bh
        push 0
        push 80020011h
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 76 F8 FF FF: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5882d138
        __asm _emit 0xeb
        __asm _emit 0x1b
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 59 F8 FF FF: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5882d155
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 6]
        cmp edx, 8002h
        ; Exact mapped bytes 75 0C: jne 0x5882d155
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1b4h], ecx
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 EC 3E 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
