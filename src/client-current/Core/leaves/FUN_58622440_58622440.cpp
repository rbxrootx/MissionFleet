// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58622440 .. +0x1D2 bytes.
extern "C" __declspec(naked) void FUN_58622440_58622440() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 420h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 40ch], ecx
        mov dword ptr [ebp - 410h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58622474
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 410h]
        add eax, 1
        mov dword ptr [ebp - 410h], eax
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 0F BF 91 9A 0C 00 00: movsx edx, word ptr [ecx + 0xc9a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 410h], edx
        ; Exact mapped bytes 0F 8D 73 01 00 00: jge 0x58622600
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        imul ecx, dword ptr [ebp - 410h], 18h
        mov edx, dword ptr [ebp - 40ch]
        lea eax, [edx + ecx + 64h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 4A 01 00 00: jne 0x586225fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588ae81ch
        ; Exact mapped bytes E8 31 FB EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfb
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 408h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 418h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 5F 6A E9 FF: call 0x584b8f50
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 414h], eax
        cmp dword ptr [ebp - 414h], 0
        ; Exact mapped bytes 74 0C: je 0x5862250c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 45 01 00 00: call 0x58622650
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        imul eax, dword ptr [ebp - 410h], 18h
        mov ecx, dword ptr [ebp - 40ch]
        lea edx, [ecx + eax + 64h]
        mov eax, 1
        imul ecx, eax, 0
        mov byte ptr [edx + ecx], 0
        mov edx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 66 8B 82 98 0C 00 00: mov ax, word ptr [edx + 0xc98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 66 89 81 98 0C 00 00: mov word ptr [ecx + 0xc98], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40ch]
        mov eax, dword ptr [edx + 0c7ch]
        mov dword ptr [ebp - 41ch], eax
        push 0ffd997h
        push -1
        push 588ae7f7h
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 B0 DF 19 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xdf
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40ch]
        mov edx, dword ptr [ecx + 0c80h]
        mov dword ptr [ebp - 420h], edx
        push 0ffffffh
        push -1
        lea eax, [ebp - 408h]
        push eax
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 85 DF 19 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [ecx + 0c7ch]
        ; Exact mapped bytes E8 04 F2 19 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf2
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [edx + 0c80h]
        ; Exact mapped bytes E8 F3 F1 19 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 0F BF 88 9A 0C 00 00: movsx ecx, word ptr [eax + 0xc9a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 1
        cmp dword ptr [ebp - 410h], ecx
        ; Exact mapped bytes 75 1E: jne 0x586225f4
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 66 8B 82 9A 0C 00 00: mov ax, word ptr [edx + 0xc9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 66 89 81 9A 0C 00 00: mov word ptr [ecx + 0xc9a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 07: jmp 0x58622602
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 65 FE FF FF: jmp 0x58622465
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 44 EA 20 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0x20
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
