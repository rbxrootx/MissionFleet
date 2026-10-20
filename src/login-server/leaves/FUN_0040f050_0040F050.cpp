// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F050 .. +0x31B bytes.
extern "C" __declspec(naked) void FUN_0040f050_0040F050() {
    __asm {
        push -1
        push 43a2e8h
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
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0ch], esi
        ; Exact mapped bytes E8 41 FE 01 00: call 0x42eeb7
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        xor ebp, ebp
        lea edi, [esi + 0c30h]
        mov ecx, 10000h
        xor eax, eax
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        push 20000h
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 40c30h], 43d420h
        mov dword ptr [esi + 40c48h], ebp
        mov dword ptr [esi + 40c34h], 8000h
        mov dword ptr [esi + 40c38h], ebp
        ; Exact mapped bytes E8 32 E8 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 40c44h], eax
        mov dword ptr [esi + 40c3ch], ebp
        mov dword ptr [esi + 40c40h], ebp
        mov dword ptr [esi + 40c38h], ebp
        push 80000h
        mov byte ptr [esp + 24h], 2
        mov dword ptr [esi + 40c58h], 43d41ch
        mov dword ptr [esi + 40c70h], ebp
        mov dword ptr [esi + 40c5ch], 10000h
        mov dword ptr [esi + 40c60h], ebp
        ; Exact mapped bytes E8 EB E7 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 40c6ch], eax
        mov dword ptr [esi + 40c64h], ebp
        mov dword ptr [esi + 40c68h], ebp
        mov dword ptr [esi + 40c60h], ebp
        push 1ch
        mov byte ptr [esp + 28h], 3
        mov dword ptr [esi], 43d340h
        mov dword ptr [esi + 0c28h], ebp
        ; Exact mapped bytes E8 BB E7 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        add esp, 0ch
        mov dword ptr [esp + 10h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 2E: je 0x40f171
        __asm _emit 0x74
        __asm _emit 0x2e
        push 80000h
        mov dword ptr [edi], 43d41ch
        mov dword ptr [edi + 18h], ebp
        mov dword ptr [edi + 4], 10000h
        mov dword ptr [edi + 8], ebp
        ; Exact mapped bytes E8 8C E7 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [edi + 14h], eax
        mov dword ptr [edi + 0ch], ebp
        mov dword ptr [edi + 10h], ebp
        mov dword ptr [edi + 8], ebp
        ; Exact mapped bytes EB 02: jmp 0x40f173
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 1ch
        mov byte ptr [esp + 20h], 3
        mov dword ptr [esi + 40c50h], edi
        ; Exact mapped bytes E8 67 E7 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 2E: je 0x40f1c5
        __asm _emit 0x74
        __asm _emit 0x2e
        push 80000h
        mov dword ptr [edi], 43d41ch
        mov dword ptr [edi + 18h], ebp
        mov dword ptr [edi + 4], 10000h
        mov dword ptr [edi + 8], ebp
        ; Exact mapped bytes E8 38 E7 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [edi + 14h], eax
        mov dword ptr [edi + 0ch], ebp
        mov dword ptr [edi + 10h], ebp
        mov dword ptr [edi + 8], ebp
        ; Exact mapped bytes EB 02: jmp 0x40f1c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [esp + 28h]
        lea edx, [esp + 24h]
        mov byte ptr [esp + 1ch], 3
        push edx
        mov dword ptr [esi + 40c54h], edi
        mov dword ptr [esi + 40h], eax
        mov dword ptr [esi + 58h], 0ffffffffh
        mov dword ptr [esi + 5ch], ecx
        ; Exact mapped bytes E8 31 DA 01 00: call 0x42cc22
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov ecx, 0b4h
        mov dword ptr [esi + 0bach], eax
        mov dword ptr [esi + 54h], 1
        mov dword ptr [esi + 68h], ebp
        lea eax, [esi + 70h]
        mov dword ptr [eax - 4], ebp
        mov dword ptr [eax], ebp
        mov dword ptr [eax + 4], ebp
        mov dword ptr [eax + 8], ebp
        add eax, 10h
        dec ecx
        ; Exact mapped bytes 75 EF: jne 0x40f20b
        __asm _emit 0x75
        __asm _emit 0xef
        push ebp
        push ebp
        push ebp
        push ebp
        push ebp
        push ebp
        push ebp
        push ebp
        push 449974h
        push ebp
        lea edi, [esi + 4ch]
        push ebp
        push ebp
        mov dword ptr [esi + 0bb8h], ebp
        mov dword ptr [esi + 0bc0h], ebp
        mov dword ptr [esi + 0bc8h], ebp
        mov dword ptr [esi + 0bd0h], ebp
        mov dword ptr [esi + 0bd8h], ebp
        mov dword ptr [esi + 0be0h], ebp
        mov dword ptr [esi + 0be8h], ebp
        mov dword ptr [esi + 0bf0h], ebp
        mov dword ptr [esi + 0bf8h], ebp
        mov dword ptr [esi + 0c00h], ebp
        mov dword ptr [esi + 0c08h], ebp
        mov dword ptr [esi + 0c10h], ebp
        mov dword ptr [esi + 0c18h], ebp
        mov dword ptr [esi + 0c20h], ebp
        push ebp
        mov dword ptr [esi + 0bb0h], ebp
        mov dword ptr [esi + 0bb4h], ebp
        mov dword ptr [esi + 0bbch], ebp
        mov dword ptr [esi + 0bc4h], ebp
        mov dword ptr [esi + 0bcch], ebp
        mov dword ptr [esi + 0bd4h], ebp
        mov dword ptr [esi + 0bdch], ebp
        mov dword ptr [esi + 0be4h], ebp
        mov dword ptr [esi + 0bech], ebp
        mov dword ptr [esi + 0bf4h], ebp
        mov dword ptr [esi + 0bfch], ebp
        mov dword ptr [esi + 0c04h], ebp
        mov dword ptr [esi + 0c0ch], ebp
        mov dword ptr [esi + 0c14h], ebp
        mov dword ptr [esi + 0c1ch], ebp
        mov dword ptr [esi + 0c24h], ebp
        mov dword ptr [esi + 48h], ebp
        mov dword ptr [edi], ebp
        mov dword ptr [esi + 3ch], ebp
        ; Exact mapped bytes E8 C4 0B 02 00: call 0x42feb5
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 1E 05 02 00: call 0x42f818
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x40f31e
        __asm _emit 0x74
        __asm _emit 0x20
        push 1
        push ebp
        push ebp
        push ebp
        push 1
        push 2
        ; Exact mapped bytes FF 15 A0 C5 43 00: call dword ptr [0x43c5a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -1
        mov dword ptr [esi + 58h], eax
        ; Exact mapped bytes 75 15: jne 0x40f32a
        __asm _emit 0x75
        __asm _emit 0x15
        push ebp
        push ebp
        push 449960h
        ; Exact mapped bytes EB 07: jmp 0x40f325
        __asm _emit 0xeb
        __asm _emit 0x07
        push ebp
        push ebp
        push 44994ch
        ; Exact mapped bytes E8 ED 59 02 00: call 0x434d17
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 2ch]
        push edi
        push 1
        push esi
        push 40efc0h
        push ebp
        push ebp
        mov dword ptr [esi + 50h], ecx
        mov dword ptr [esi + 44h], ebp
        mov dword ptr [esi + 40c4ch], ebp
        ; Exact mapped bytes FF 15 2C C2 43 00: call dword ptr [0x43c22c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 48h], eax
        mov dword ptr [esi + 64h], 3e8h
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
