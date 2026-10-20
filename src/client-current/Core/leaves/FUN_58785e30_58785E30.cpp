// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785E30 .. +0x288 bytes.
extern "C" __declspec(naked) void FUN_58785e30_58785E30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp - 108h]
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10ch], edx
        cmp dword ptr [ebp - 10ch], 18h
        ; Exact mapped bytes 0F 87 2E 02 00 00: ja 0x5878609c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        ; Exact mapped bytes FF 24 85 B8 60 78 58: jmp dword ptr [eax*4 + 0x587860b8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x78
        __asm _emit 0x58
        push 588b5f24h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 95 02 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 17 02 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b5f38h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 7F 02 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 01 02 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b5f68h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 69 02 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EB 01 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b5fa0h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 53 02 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D5 01 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes E8 2A 6F 0C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        push 5
        push 588b5fc8h
        push 100h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 EF AE D2 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xae
        __asm _emit 0xd2
        __asm _emit 0xff
        add esp, 10h
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 0A 02 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8C 01 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b6024h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F4 01 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 76 01 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b604ch
        ; Exact mapped bytes E8 B4 C0 D9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xc0
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 D5 01 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 57 01 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b6084h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 BF 01 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 41 01 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b609ch
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 A9 01 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 2B 01 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b60c8h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 93 01 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 15 01 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b6118h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 7D 01 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b6140h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 67 01 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b615ch
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 51 01 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b6174h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 3B 01 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b618ch
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 25 01 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b619ch
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 0F 01 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x587860a8
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b61b0h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F9 00 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 7E: jmp 0x587860a8
        __asm _emit 0xeb
        __asm _emit 0x7e
        push 588b61c4h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 E6 00 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 6B: jmp 0x587860a8
        __asm _emit 0xeb
        __asm _emit 0x6b
        push 588b61dch
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 D3 00 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 58: jmp 0x587860a8
        __asm _emit 0xeb
        __asm _emit 0x58
        push 588b61fch
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 C0 00 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 45: jmp 0x587860a8
        __asm _emit 0xeb
        __asm _emit 0x45
        push 588b6214h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 AD 00 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 32: jmp 0x587860a8
        __asm _emit 0xeb
        __asm _emit 0x32
        push 588b6230h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 9A 00 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1F: jmp 0x587860a8
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 588b6278h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 87 00 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0C: jmp 0x587860a8
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 D9 00 00 00: call 0x58786180
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 9E AF 0A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xaf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
