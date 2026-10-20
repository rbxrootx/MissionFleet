// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58527F00 .. +0x1F6 bytes.
extern "C" __declspec(naked) void FUN_58527f00_58527F00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58881d28h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 80h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], ecx
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 97 F5 F5 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf5
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 84 1B F8 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        push 588a4af4h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 78 8B FF FF: call 0x58520ae0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], -1
        ; Exact mapped bytes 74 56: je 0x58527fc7
        __asm _emit 0x74
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 60h]
        sub edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        lea ecx, [ebp - 58h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 88 45 FE FF: call 0x5850c510
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea edx, [ebp - 58h]
        push edx
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 15 6C FF FF: call 0x5851ebb0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 60h]
        add eax, 2
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        push 588a4af8h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 2B 8B FF FF: call 0x58520ae0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 6C 1D F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A4: jmp 0x58527f6b
        __asm _emit 0xeb
        __asm _emit 0xa4
        push -1
        mov edx, dword ptr [ebp - 5ch]
        push edx
        lea eax, [ebp - 40h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 37 45 FE FF: call 0x5850c510
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 5B AE FD FF: call 0x58502e40
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 10: jne 0x58527ffc
        __asm _emit 0x75
        __asm _emit 0x10
        lea edx, [ebp - 40h]
        push edx
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 B5 6B FF FF: call 0x5851ebb0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea eax, [ebp - 88h]
        push eax
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 72 00 F6 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 68h], ecx
        ; Exact mapped bytes EB 09: jmp 0x5852801e
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 A3 69 FF FF: call 0x5851e9c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea edx, [ebp - 8ch]
        push edx
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 60 01 F6 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 97 F9 F5 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf9
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 70: je 0x585280b0
        __asm _emit 0x74
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + 12150h]
        mov dword ptr [ebp - 70h], edx
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 DC F9 F5 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 DC F9 FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 B0 84 29 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 64h]
        mov ecx, dword ptr [edx + 12150h]
        ; Exact mapped bytes E8 32 97 29 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x97
        __asm _emit 0x29
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + 12150h]
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 64h]
        mov ecx, dword ptr [edx + 12150h]
        ; Exact mapped bytes E8 58 16 00 00: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 E6 94 29 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x94
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x58528015
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 74 1C F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x1c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 68 1C F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 06 F0 FD FF: call 0x585070e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 60 8F 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x8f
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
