// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BD900 .. +0x568 bytes.
extern "C" __declspec(naked) void FUN_584bd900_584BD900() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0d0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 94h], ecx
        mov dword ptr [ebp - 9ch], 0
        mov dword ptr [ebp - 28h], 0
        push 588959b8h
        lea eax, [ebp - 88h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588959e4h
        lea ecx, [ebp - 5ch]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 2ch], eax
        push 17h
        push 0
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 97 F4 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf4
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 60h], 0
        mov byte ptr [ebp - 32h], 0
        mov byte ptr [ebp - 34h], 3
        mov byte ptr [ebp - 33h], 3
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 8]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 95 36 37 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x36
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 98h], eax
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x584bd9dd
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, 1
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [ebp - 8ch]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 84 AC 01 00 00: je 0x584bdb9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 6C F1 FF FF: call 0x584bcb70
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [edx + 130h]
        add eax, 70h
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        ; Exact mapped bytes E8 17 36 37 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x36
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [eax + edx*4], ecx
        push 70h
        mov edx, dword ptr [ebp - 90h]
        add edx, 100h
        push edx
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        ; Exact mapped bytes E8 23 EE 38 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xee
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [eax + 130h]
        push ecx
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [edx + 170h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + ecx*4]
        add eax, 70h
        push eax
        ; Exact mapped bytes E8 EE ED 38 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xed
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [ecx + 16ch], 0
        mov dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584bdad0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0a4h]
        add edx, 1
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 0a4h]
        cmp ecx, dword ptr [eax + 130h]
        ; Exact mapped bytes 7D 30: jge 0x584bdb14
        __asm _emit 0x7d
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [edx + 170h]
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 90h]
        add edx, dword ptr [eax + 16ch]
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [ecx + 16ch], edx
        ; Exact mapped bytes EB AD: jmp 0x584bdac1
        __asm _emit 0xeb
        __asm _emit 0xad
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [edx + 16ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 90h]
        cmp dword ptr [ecx + 170h], 0
        ; Exact mapped bytes 74 31: je 0x584bdb66
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [edx + 170h]
        mov dword ptr [ebp - 0c0h], eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        ; Exact mapped bytes E8 F8 34 37 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x34
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [edx + 170h], 0
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 2A: je 0x584bdb99
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 0c4h], eax
        push 174h
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        ; Exact mapped bytes E8 A8 34 37 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x34
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 90h], 0
        ; Exact mapped bytes E9 30 FE FF FF: jmp 0x584bd9ce
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x584bdbb9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8ch]
        add edx, 1
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [ebp - 8ch]
        cmp ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes 74 54: je 0x584bdc1e
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 8ch]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 3D: je 0x584bdc1c
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0c8h], edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        ; Exact mapped bytes E8 48 34 37 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x34
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes EB 8C: jmp 0x584bdbaa
        __asm _emit 0xeb
        __asm _emit 0x8c
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        push 588959f0h
        ; Exact mapped bytes E8 C6 56 2F 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x56
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0h], eax
        push 0
        lea ecx, [ebp - 0b0h]
        push ecx
        push 84h
        lea edx, [ebp - 88h]
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 9ch], 0
        mov dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584bdc87
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0a8h]
        add ecx, 1
        mov dword ptr [ebp - 0a8h], ecx
        cmp dword ptr [ebp - 0a8h], 84h
        ; Exact mapped bytes 73 1C: jae 0x584bdcaf
        __asm _emit 0x73
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes 0F BE 84 15 78 FF FF FF: movsx eax, byte ptr [ebp + edx - 0x88]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB C9: jmp 0x584bdc78
        __asm _emit 0xeb
        __asm _emit 0xc9
        push 0
        lea ecx, [ebp - 0b0h]
        push ecx
        push 4
        lea edx, [ebp - 9ch]
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x584bdcea
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, 1
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [ebp - 8ch]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x584bdddd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 0b0h]
        push ecx
        push 70h
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 9ch], 0
        mov dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes EB 0F: jmp 0x584bdd4c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ach]
        add eax, 1
        mov dword ptr [ebp - 0ach], eax
        cmp dword ptr [ebp - 0ach], 70h
        ; Exact mapped bytes 73 27: jae 0x584bdd7c
        __asm _emit 0x73
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + ecx*4]
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        add edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 9ch], edx
        ; Exact mapped bytes EB C1: jmp 0x584bdd3d
        __asm _emit 0xeb
        __asm _emit 0xc1
        push 0
        lea eax, [ebp - 0b0h]
        push eax
        push 4
        lea ecx, [ebp - 9ch]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea eax, [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + ecx*4]
        mov ecx, dword ptr [eax + 30h]
        push ecx
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [eax + edx*4]
        add ecx, 70h
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 FE FE FF FF: jmp 0x584bdcdb
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x584bde06
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, 1
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [ebp - 8ch]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 74 28: je 0x584bde3f
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + ecx*4]
        mov dword ptr [ebp - 0cch], eax
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        ; Exact mapped bytes E8 FA 31 37 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x31
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB B8: jmp 0x584bddf7
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 0d0h], edx
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        ; Exact mapped bytes E8 F4 31 37 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x31
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 EC 31 37 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x31
        __asm _emit 0x37
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
