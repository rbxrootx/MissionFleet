// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585495D0 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_585495d0_585495D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x5854969b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 7
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 77 25: ja 0x58549636
        __asm _emit 0x77
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 A4 96 54 58: jmp dword ptr [edx*4 + 0x585496a4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x58
        mov dword ptr [ebp - 8], 4
        ; Exact mapped bytes EB 14: jmp 0x58549638
        __asm _emit 0xeb
        __asm _emit 0x14
        mov dword ptr [ebp - 8], 0fh
        ; Exact mapped bytes EB 0B: jmp 0x58549638
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 02: jmp 0x58549638
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 63: jmp 0x5854969b
        __asm _emit 0xeb
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C0 CE FF FF: call 0x58546500
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3A 7F 27 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x7f
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE CD FF FF: call 0x58546460
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 16 7F 27 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x7f
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        cmp eax, 0dh
        ; Exact mapped bytes 75 17: jne 0x5854969b
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1a0h]
        mov dword ptr [ebp - 18h], edx
        push 5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 96 B1 27 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb1
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
