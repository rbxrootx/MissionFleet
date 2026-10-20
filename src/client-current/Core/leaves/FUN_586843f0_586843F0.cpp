// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586843F0 .. +0x366 bytes.
extern "C" __declspec(naked) void FUN_586843f0_586843F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        mov dword ptr [ebp - 4], ecx
        push 20h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 138h
        push eax
        ; Exact mapped bytes E8 04 8A 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x8a
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        push 20h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 90ch
        push ecx
        ; Exact mapped bytes E8 EE 89 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x89
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 908h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f4h], 0
        push 20h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 9a0h
        push edx
        ; Exact mapped bytes E8 B1 89 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x89
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 8a8h
        push eax
        ; Exact mapped bytes E8 9C 89 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x89
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        push 20h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 878h
        push ecx
        ; Exact mapped bytes E8 86 89 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x89
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        push 20h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 8c8h
        push edx
        ; Exact mapped bytes E8 70 89 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x89
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        push 20h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 0f8h
        push eax
        ; Exact mapped bytes E8 5B 89 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x89
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586844ca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 7D 1E: jge 0x586844ee
        __asm _emit 0x7d
        __asm _emit 0x1e
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 0f8h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 98 EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x98
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D3: jmp 0x586844c1
        __asm _emit 0xeb
        __asm _emit 0xd3
        push 20h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 118h
        push edx
        ; Exact mapped bytes E8 0F 89 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x89
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        push 20h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 8e8h
        push eax
        ; Exact mapped bytes E8 FA 88 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x88
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        push 40h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 158h
        push ecx
        ; Exact mapped bytes E8 E4 88 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x88
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        push 40h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 198h
        push edx
        ; Exact mapped bytes E8 CE 88 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x88
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58684557
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x58684608
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 198h]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 198h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        xor eax, 3a9e2b0dh
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 198h]
        mov dword ptr [ecx + edx], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 198h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        xor eax, 3a9e2b0dh
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 198h]
        mov dword ptr [edx + ecx], eax
        ; Exact mapped bytes E9 46 FF FF FF: jmp 0x5868454e
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 6a0h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 1d8h
        push eax
        ; Exact mapped bytes E8 F3 87 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x87
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a50h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 51 6B 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x6b
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a50h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 32 6B 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6b
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a50h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 14 6B 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x6b
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0a50h]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F5 6A 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x6a
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a48h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 DF 6A 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x6a
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586846c4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 2F: jge 0x586846f9
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 978h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AC 18 E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x18
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 9c0h]
        ; Exact mapped bytes E8 3A 06 EB FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C2: jmp 0x586846bb
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5868470b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 13: jge 0x58684724
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 898h], 55h
        ; Exact mapped bytes EB DE: jmp 0x58684702
        __asm _emit 0xeb
        __asm _emit 0xde
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58684736
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 15: jge 0x58684751
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 9e0h]
        ; Exact mapped bytes E8 32 14 E3 FF: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x14
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB DC: jmp 0x5868472d
        __asm _emit 0xeb
        __asm _emit 0xdc
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
