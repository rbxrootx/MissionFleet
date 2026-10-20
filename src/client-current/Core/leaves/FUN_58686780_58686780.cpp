// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58686780 .. +0x2B6 bytes.
extern "C" __declspec(naked) void FUN_58686780_58686780() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58889ff0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 48h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 67 94 FF FF: call 0x5867fc30
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b0098h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 30h], edx
        push 12ch
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B E3 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xe3
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2C F7 DF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf7
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 0cch
        ; Exact mapped bytes E8 F5 A7 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa7
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 25: je 0x58686844
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 13h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 27h
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A1 02 F0 FF: call 0x58586ae0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868684b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 34h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + eax + 0ach], edx
        push 0cch
        ; Exact mapped bytes E8 90 A7 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa7
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 25: je 0x586868a9
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        add eax, 25h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 27h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3C 02 F0 FF: call 0x58586ae0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x586868b0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [edx + ecx + 0ach], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 3ch], ecx
        push 7d0h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 8F F5 DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 40h], ecx
        push 7d0h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 6D F5 DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 44h], edx
        push 4
        push 0
        push 3
        push 14h
        ; Exact mapped bytes A1 6C 75 94 58: mov eax, dword ptr [0x5894756c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C2 06 F0 FF: call 0x58587000
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x06
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 48h], eax
        push 4
        push 0
        push 3
        push 14h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 96 06 F0 FF: call 0x58587000
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 92 A6 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa6
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 38: je 0x586869ba
        __asm _emit 0x74
        __asm _emit 0x38
        push 0bh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 E1 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe1
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 0bb8h
        mov edx, dword ptr [ebp + 10h]
        add edx, 16h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5B FE DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586869c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 0a8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 54h], ecx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 63 8B E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8b
        __asm _emit 0xe1
        __asm _emit 0xff
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 A4 00 00 00: mov word ptr [eax + 0xa4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A A6 00 00 00: mov word ptr [edx + 0xa6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 21h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E E0 DF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xe0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
