// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862B630 .. +0x2B7 bytes.
extern "C" __declspec(naked) void FUN_5862b630_5862B630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 7D 01 00 00: jne 0x5862b7c0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes 75 39: jne 0x5862b68a
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 0F BF 15 38 05 96 58: movsx edx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edx, 6
        ; Exact mapped bytes 75 28: jne 0x5862b685
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 278h], ecx
        ; Exact mapped bytes E8 82 BB EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xbb
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 136h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3C 61 EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x61
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 31 01 00 00: jmp 0x5862b7bb
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0b4h]
        ; Exact mapped bytes 75 39: jne 0x5862b6d1
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 0F BF 0D 38 05 96 58: movsx ecx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp ecx, 6
        ; Exact mapped bytes 75 28: jne 0x5862b6cc
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 278h], eax
        ; Exact mapped bytes E8 3B BB EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xbb
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 137h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F5 60 EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x60
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x5862b7bb
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0b8h]
        ; Exact mapped bytes 75 39: jne 0x5862b718
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 0F BF 05 38 05 96 58: movsx eax, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 6
        ; Exact mapped bytes 75 28: jne 0x5862b713
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 278h], edx
        ; Exact mapped bytes E8 F4 BA EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xba
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 138h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AE 60 EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x60
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x5862b7bb
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0bch]
        ; Exact mapped bytes 75 0E: jne 0x5862b734
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 32 06 00 00: call 0x5862bd60
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x5862b7bb
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0c0h]
        ; Exact mapped bytes 75 0B: jne 0x5862b74d
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C6 05 00 00: call 0x5862bd10
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 6E: jmp 0x5862b7bb
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes 75 0B: jne 0x5862b766
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CD 06 00 00: call 0x5862be30
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 55: jmp 0x5862b7bb
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes 75 0B: jne 0x5862b77f
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 64 06 00 00: call 0x5862bde0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3C: jmp 0x5862b7bb
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes E8 6C BA EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xba
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 32: jne 0x5862b7bb
        __asm _emit 0x75
        __asm _emit 0x32
        cmp dword ptr [ebp + 0ch], 0f230h
        ; Exact mapped bytes 75 29: jne 0x5862b7bb
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        push 0f231h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        nop
        ; Exact mapped bytes E9 21 01 00 00: jmp 0x5862b8e1
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f230h
        ; Exact mapped bytes 0F 85 14 01 00 00: jne 0x5862b8e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 B7 EA FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb7
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 85 00 01 00 00: jne 0x5862b8e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 8E EE 00 00 00: jle 0x5862b8e1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 278h]
        cmp eax, dword ptr [edx + 0b0h]
        ; Exact mapped bytes 75 42: jne 0x5862b849
        __asm _emit 0x75
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 45 FE: mov word ptr [ebp - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfe
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 F6 FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 12: mov dx, word ptr [eax + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x12
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        mov eax, dword ptr [ebp + 10h]
        push eax
        movzx ecx, word ptr [ebp - 2]
        push ecx
        movzx edx, word ptr [ebp - 4]
        push edx
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 27 F5 FF: call 0x5857dff0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x27
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x5862b8e1
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 278h]
        cmp edx, dword ptr [ecx + 0b4h]
        ; Exact mapped bytes 75 2C: jne 0x5862b889
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 F6 FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 0
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 26 F5 FF: call 0x5857df80
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x26
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 58: jmp 0x5862b8e1
        __asm _emit 0xeb
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 278h]
        cmp edx, dword ptr [ecx + 0b8h]
        ; Exact mapped bytes 75 44: jne 0x5862b8e1
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 F5 FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 0f8h
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 9dh]
        shl ecx, 2
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 26 F5 FF: call 0x5857df80
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x26
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
