// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799E00 .. +0x1B6 bytes.
extern "C" __declspec(naked) void FUN_58799e00_58799E00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588919c1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        and eax, 0ffh
        cmp eax, 5
        ; Exact mapped bytes 77 77: ja 0x58799eb2
        __asm _emit 0x77
        __asm _emit 0x77
        ; Exact mapped bytes FF 24 85 B8 9F 79 58: jmp dword ptr [eax*4 + 0x58799fb8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x9f
        __asm _emit 0x79
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 09 00 00: call 0x5879a7e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x58799ef3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
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
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 E9 71 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes E8 70 09 00 00: call 0x5879a7e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x58799f34
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB D5: jmp 0x58799e4f
        __asm _emit 0xeb
        __asm _emit 0xd5
        ; Exact mapped bytes F2 0F 10 06: movsd xmm0, qword ptr [esi]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        ; Exact mapped bytes 66 0F 2F 05 B0 51 89 58: comisd xmm0, xmmword ptr [0x588951b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 0F 82 E9 00 00 00: jb 0x58799f75
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 0D B0 70 8B 58: movsd xmm1, qword ptr [0x588b70b0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x70
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 82 D7 00 00 00: jb 0x58799f75
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FD 76 09 00: call 0x588315a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x76
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB AC: jmp 0x58799e51
        __asm _emit 0xeb
        __asm _emit 0xac
        xor eax, eax
        ; Exact mapped bytes EB A8: jmp 0x58799e51
        __asm _emit 0xeb
        __asm _emit 0xa8
        xor eax, eax
        cmp byte ptr [esi], al
        setne al
        ; Exact mapped bytes EB 9F: jmp 0x58799e51
        __asm _emit 0xeb
        __asm _emit 0x9f
        push 1
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 41 35 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 158h]
        mov dword ptr [ebp - 4], 6
        push 588b6e6ch
        push eax
        ; Exact mapped bytes E8 19 A7 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa7
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 158h]
        push eax
        ; Exact mapped bytes E8 17 43 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x43
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 7
        ; Exact mapped bytes E8 3D 0E 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 0c0h]
        ; Exact mapped bytes E8 00 35 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0c0h]
        mov dword ptr [ebp - 4], 0
        push 588b6e10h
        push eax
        ; Exact mapped bytes E8 D8 A6 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa6
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0c0h]
        push eax
        ; Exact mapped bytes E8 D6 42 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x42
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 FC 0D 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 0c0h]
        ; Exact mapped bytes E8 BF 34 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x34
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0c0h]
        mov dword ptr [ebp - 4], 2
        push 588b6e30h
        push eax
        ; Exact mapped bytes E8 97 A6 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa6
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0c0h]
        push eax
        ; Exact mapped bytes E8 95 42 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x42
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 3
        ; Exact mapped bytes E8 BB 0D 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 0c0h]
        ; Exact mapped bytes E8 7E 34 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x34
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0c0h]
        mov dword ptr [ebp - 4], 4
        push 588b6e50h
        push eax
        ; Exact mapped bytes E8 56 A6 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa6
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0c0h]
        push eax
        ; Exact mapped bytes E8 54 42 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x42
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 5
        ; Exact mapped bytes E8 7A 0D 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
