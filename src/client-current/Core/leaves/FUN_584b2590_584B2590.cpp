// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B2590 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_584b2590_584B2590() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 20h], ecx
        push 66h
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 25 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x25
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 65 39 FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x39
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 28h], ecx
        push 1
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 24 FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 6D 46 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 30h], ecx
        push 65h
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 25 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x25
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 15 39 FD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x39
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 88 94 01 00 00: mov cx, word ptr [eax + 0x194]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 03: and cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x03
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x584b2636
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x584b26c4
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1e8h]
        mov dword ptr [ebp - 34h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 94 38 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 82 78 01 00 00: mov ax, word ptr [edx + 0x178]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1e8h]
        mov dword ptr [ebp - 38h], edx
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 1D 8B 30 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x8b
        __asm _emit 0x30
        __asm _emit 0x00
        push 0ah
        lea ecx, [ebp - 10h]
        push ecx
        movzx edx, word ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 7D FD FF FF: call 0x584b2400
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 75 35: jne 0x584b26c4
        __asm _emit 0x75
        __asm _emit 0x35
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        sub eax, 1
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1e8h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 2fh
        imul edx, dword ptr [ebp - 40h], 5
        sub ecx, edx
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 ED 2F 30 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x2f
        __asm _emit 0x30
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 82 E9 37 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
