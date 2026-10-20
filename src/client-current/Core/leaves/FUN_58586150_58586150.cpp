// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58586150 .. +0x133 bytes.
extern "C" __declspec(naked) void FUN_58586150_58586150() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 39 4E 23 00: call 0x587bafb0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4e
        __asm _emit 0x23
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 12ch
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 26h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, 23h
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0fch]
        ; Exact mapped bytes E8 24 9A F1 FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x9a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 85 E9 F3 FF: call 0x584c4b50
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 04 06 96 58: cmp edx, dword ptr [0x58960604]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1F: je 0x585861f9
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0fch]
        ; Exact mapped bytes E8 F8 99 F1 FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x99
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 589604e0h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A8 FE EF FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 0fch]
        ; Exact mapped bytes E8 D9 99 F1 FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x99
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        nop
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 100h], 0
        ; Exact mapped bytes 74 30: je 0x58586264
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 83 3D 2C 24 96 58 02: cmp dword ptr [0x5896242c], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes 7E 27: jle 0x58586264
        __asm _emit 0x7e
        __asm _emit 0x27
        ; Exact mapped bytes C7 05 2C 24 96 58 00 00 00 00: mov dword ptr [0x5896242c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0fch]
        ; Exact mapped bytes E8 2B 05 00 00: call 0x58586780
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 100h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58586273
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 15 2C 24 96 58: mov edx, dword ptr [0x5896242c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        add edx, 1
        ; Exact mapped bytes 89 15 2C 24 96 58: mov dword ptr [0x5896242c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 D3 AD 2A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xad
        __asm _emit 0x2a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
