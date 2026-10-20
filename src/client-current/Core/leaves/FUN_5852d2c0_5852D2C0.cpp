// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5852D2C0 .. +0x208 bytes.
extern "C" __declspec(naked) void FUN_5852d2c0_5852D2C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 17: je 0x5852d2ec
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 75 99 F5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 15 78 F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 16 8C F5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x8c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 10 82 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 24h], ecx
        push 2
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D1 77 F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x77
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D2 8B F5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x8b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 CC 81 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 0D 39 32 00: call 0x58850c8d
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x39
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E8 E4 38 32 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x38
        __asm _emit 0x32
        __asm _emit 0x00
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x5852d394
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        mov dword ptr [ebp - 0ch], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c4h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 19h
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 5C 77 F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x77
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 5D 8B F5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x8b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 0b4h
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 1E 77 F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x77
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 1F 8B F5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x8b
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5852d424
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x5852d447
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0c4h]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 FC 80 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x80
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D4: jmp 0x5852d41b
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 121c0h]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 7A 8A F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x8a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 121c0h]
        mov dword ptr [ebp - 54h], eax
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 5B 8A F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x8a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 121c0h]
        mov dword ptr [ebp - 58h], ecx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 9C 80 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x80
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 121c0h]
        mov dword ptr [ebp - 5ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 7D 80 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x80
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
