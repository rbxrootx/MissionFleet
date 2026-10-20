// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58560D60 .. +0x1B9 bytes.
extern "C" __declspec(naked) void FUN_58560d60_58560D60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 10h], ecx
        push 0f4241h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3A 03 00 00: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x58560d84
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8F 01 00 00: jmp 0x58560f13
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 134h
        ; Exact mapped bytes E8 76 02 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], eax
        push 134h
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 66 C0 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xc0
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 B1 F2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb1
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x58560dcf
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 64 B3 F2 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb3
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 24: je 0x58560df9
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 8]
        add edx, 6
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1C 93 F4 FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x93
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x58560df7
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 02: jmp 0x58560df9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CB: jmp 0x58560dc4
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 11ch], 5
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B2 5B F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x5b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 95 B2 F2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb2
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        push 114h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        ; Exact mapped bytes E8 5A BA 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xba
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 100h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 130h], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 44h]
        shr edx, 1
        and edx, 1fh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 12ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 130h]
        mov edx, 20h
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 C4 01 2D 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 128h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 130h]
        shl edx, 5
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 128h]
        push edx
        ; Exact mapped bytes E8 E0 B9 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb9
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 12ch]
        mov ecx, 18h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 71 01 2D 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax + 120h], ecx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 12ch], 18h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        push eax
        ; Exact mapped bytes E8 8F B9 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb9
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EE E7 FF FF: call 0x5855f700
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe7
        __asm _emit 0xff
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
