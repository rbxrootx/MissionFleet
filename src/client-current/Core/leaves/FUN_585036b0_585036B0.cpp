// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585036B0 .. +0x360 bytes.
extern "C" __declspec(naked) void FUN_585036b0_585036B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880259h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 188h
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
        mov dword ptr [ebp - 4], 0
        sub esp, 18h
        mov eax, esp
        mov dword ptr [ebp - 178h], esp
        lea ecx, [ebp + 8]
        push ecx
        push 588a37b0h
        push eax
        ; Exact mapped bytes E8 C4 DA FF FF: call 0x585011c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea edx, [ebp - 160h]
        push edx
        ; Exact mapped bytes E8 A5 F7 FF FF: call 0x58502eb0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        mov dword ptr [ebp - 17ch], eax
        mov byte ptr [ebp - 4], 1
        lea eax, [ebp - 148h]
        push eax
        lea ecx, [ebp - 160h]
        ; Exact mapped bytes E8 16 F6 FF FF: call 0x58502d40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 180h]
        push ecx
        lea ecx, [ebp - 160h]
        ; Exact mapped bytes E8 33 F7 FF FF: call 0x58502e70
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 148h]
        ; Exact mapped bytes E8 D7 EE F9 FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xee
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x585037ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 148h]
        ; Exact mapped bytes E8 D1 E8 FF FF: call 0x58502030
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        push 588a37f0h
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 144h]
        push ecx
        ; Exact mapped bytes E8 96 38 FC FF: call 0x584c7010
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 164h], eax
        mov edx, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 168h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 168h]
        mov dword ptr [ebp - 170h], eax
        sub esp, 18h
        mov ecx, esp
        mov dword ptr [ebp - 184h], esp
        mov edx, dword ptr [ebp - 16ch]
        push edx
        mov eax, dword ptr [ebp - 170h]
        push eax
        push ecx
        ; Exact mapped bytes E8 72 19 FC FF: call 0x584c5130
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E8 EA FE FF FF: call 0x585036b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 144h]
        ; Exact mapped bytes E8 58 65 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 148h]
        ; Exact mapped bytes E8 8C E8 FF FF: call 0x58502070
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 41 FF FF FF: jmp 0x5850372b
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        sub esp, 18h
        mov ecx, esp
        mov dword ptr [ebp - 188h], esp
        lea edx, [ebp + 8]
        push edx
        push 588a37f8h
        push ecx
        ; Exact mapped bytes E8 BC D9 FF FF: call 0x585011c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 158h]
        push eax
        ; Exact mapped bytes E8 7D F8 FF FF: call 0x58503090
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        mov dword ptr [ebp - 18ch], eax
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 14ch]
        push ecx
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 FE FD F9 FF: call 0x584a3630
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea edx, [ebp - 190h]
        push edx
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 2B FF F9 FF: call 0x584a3770
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14ch]
        ; Exact mapped bytes E8 CF ED F9 FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xed
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 6D 01 00 00: je 0x585039c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 79 3A FC FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        push 104h
        push 0
        lea ecx, [ebp - 114h]
        push ecx
        ; Exact mapped bytes E8 92 95 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 14ch]
        ; Exact mapped bytes E8 34 EE F9 FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xee
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AD 24 FC FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 588a3838h
        push 104h
        lea edx, [ebp - 114h]
        push edx
        ; Exact mapped bytes E8 46 D5 FA FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd5
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 10h
        lea eax, [ebp - 114h]
        push eax
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 A1 3C FC FF: call 0x584c7560
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        push 588a383ch
        lea ecx, [ebp - 12ch]
        push ecx
        ; Exact mapped bytes E8 8F D8 FF FF: call 0x58501160
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x5850399f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a3848h
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 71 3C FC FF: call 0x584c7560
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 22 E8 FF FF: call 0x58502120
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 150h]
        push ecx
        push 0f003fh
        push 0
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 29 24 FC FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 174h], eax
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 74 42: je 0x58503974
        __asm _emit 0x74
        __asm _emit 0x42
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 EF 63 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 50 E6 FF FF: call 0x58501fa0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 160h]
        ; Exact mapped bytes E8 21 E6 FF FF: call 0x58501f80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 C2 63 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x585039f7
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push 58947238h
        push 4
        push 0
        push 588a3888h
        mov edx, dword ptr [ebp - 150h]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 150h]
        push eax
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 0
        lea ecx, [ebp - 194h]
        push ecx
        lea ecx, [ebp - 14ch]
        ; Exact mapped bytes E8 DD E6 FF FF: call 0x58502090
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 6D 63 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6A FE FF FF: jmp 0x58503833
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 C8 E5 FF FF: call 0x58501fa0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 160h]
        ; Exact mapped bytes E8 99 E5 FF FF: call 0x58501f80
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 3A 63 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x63
        __asm _emit 0xfa
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
        ; Exact mapped bytes E8 44 D6 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd6
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
