// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00496F27 .. +0x24E bytes.
extern "C" __declspec(naked) void FUN_00496f27_00496F27() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e54eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 7ch
        mov dword ptr [ebp - 80h], ecx
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [eax + 44h], 1
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x496f68
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 0F 8D E4 01 00 00: jge 0x49715b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 28h
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + ecx + 24h]
        ; Exact mapped bytes E8 02 BD 09 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 BD 01 00 00: je 0x497156
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 28h
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ecx + edx + 24h]
        ; Exact mapped bytes E8 FE BC 09 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 5ch], edx
        mov dword ptr [ebp - 1ch], 0fffffffdh
        push 20h
        push 0
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 A5 23 01 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 BD 55 0B 00: call 0x54c593
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x55
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 80h]
        cmp dword ptr [ecx + 48h], 0
        ; Exact mapped bytes 74 4C: je 0x497032
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        push edx
        lea eax, [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 B0 F5 FF FF: call 0x4965a9
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 88h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 88h]
        push edx
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 2C 66 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 80 55 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x55
        __asm _emit 0x0b
        __asm _emit 0x00
        lea eax, [ebp - 50h]
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 11: jmp 0x497043
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 40h]
        add eax, ecx
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 1ch]
        mov dword ptr [ebp - 68h], ecx
        mov dword ptr [ebp - 64h], 1
        mov dword ptr [ebp - 60h], 1
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [edx + 0a0h], 1
        mov eax, dword ptr [ebp - 5ch]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 75 14: jne 0x497081
        __asm _emit 0x75
        __asm _emit 0x14
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 2E 55 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x55
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x496f8f
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 54h]
        push ecx
        push 58d5d0h
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 7D 14: jge 0x4970b8
        __asm _emit 0x7d
        __asm _emit 0x14
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 F7 54 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 D7 FE FF FF: jmp 0x496f8f
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 20h]
        push edx
        lea eax, [ebp - 40h]
        push eax
        push 0
        lea ecx, [ebp - 6ch]
        push ecx
        push 4
        push 0
        push 58e530h
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 94h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 54h]
        push eax
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 54h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 0a0h], 0
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 0A: je 0x497111
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes FF 15 00 25 5E 00: call dword ptr [0x5e2500]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 0A: je 0x497121
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes FF 15 00 25 5E 00: call dword ptr [0x5e2500]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 0A: je 0x497131
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes FF 15 00 25 5E 00: call dword ptr [0x5e2500]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 A7 54 0B 00: call 0x54c5e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 59 54 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 39 FE FF FF: jmp 0x496f8f
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 04 FE FF FF: jmp 0x496f5f
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [eax + 44h], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
