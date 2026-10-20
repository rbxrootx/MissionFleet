// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587149A0 .. +0x277 bytes.
extern "C" __declspec(naked) void FUN_587149a0_587149A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 CA 01 00 00: jne 0x58714b7d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x58714a98
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 8], eax
        push 6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 65 AE D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xae
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 0ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4F AE D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xae
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D9 13 D7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x13
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C3 13 D7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x13
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 1ch], edx
        push 7ch
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 00 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EB 14 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x14
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 24h], edx
        push 7dh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 00 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C3 14 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x14
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        nop
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x58714b78
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 9ch]
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x58714b78
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 80 AD D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xad
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 34h], ecx
        push 6
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 6A AD D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xad
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F4 12 D7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x12
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 3ch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 DE 12 D7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x12
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 44h], ecx
        push 7ah
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 00 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 06 14 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x14
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 4ch], ecx
        push 7bh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD FF D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 DE 13 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x13
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 54h], edx
        push 1
        push 2
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        nop
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x58714c0f
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 76: jne 0x58714bf9
        __asm _emit 0x75
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 98h]
        ; Exact mapped bytes 75 2D: jne 0x58714bbe
        __asm _emit 0x75
        __asm _emit 0x2d
        push 588b3f58h
        ; Exact mapped bytes E8 55 D4 E0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xd4
        __asm _emit 0xe0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        push eax
        push 32h
        push 0c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 04 DC FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x58714bf7
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 9ch]
        ; Exact mapped bytes 75 2B: jne 0x58714bf7
        __asm _emit 0x75
        __asm _emit 0x2b
        push 588b3f78h
        ; Exact mapped bytes E8 1A D4 E0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd4
        __asm _emit 0xe0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        push 32h
        push 0c8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 03 DC FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x58714c0f
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 10: jne 0x58714c0f
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 F3 DB FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf3
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
