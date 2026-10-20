// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58797080 .. +0x1EB bytes.
extern "C" __declspec(naked) void FUN_58797080_58797080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        mov dword ptr [ebp - 24h], ecx
        push 18h
        ; Exact mapped bytes E8 B1 9F 09 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8], eax
        push 18h
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 66 5D 0B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587970bf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D9 DD D5 FF: call 0x584f4ea0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xdd
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 83 B8 00 00 00: jae 0x58797188
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 14 FD FF FF: call 0x58796df0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        cdq
        mov ecx, 32h
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 7C 02: jl 0x587970f2
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB C4: jmp 0x587970b6
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F2 FC FF FF: call 0x58796df0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + ecx*8]
        ; Exact mapped bytes 7E 3F: jle 0x5879714a
        __asm _emit 0x7e
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D9 FC FF FF: call 0x58796df0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        cdq
        mov ecx, 32h
        idiv ecx
        cmp edx, 28h
        ; Exact mapped bytes 7C 23: jl 0x5879714a
        __asm _emit 0x7c
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BD FC FF FF: call 0x58796df0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 8]
        mov dword ptr [esi + eax*8], ecx
        mov dword ptr [esi + eax*8 + 4], edx
        ; Exact mapped bytes E9 6C FF FF FF: jmp 0x587970b6
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9A FC FF FF: call 0x58796df0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + edx*8 + 4]
        cmp edx, dword ptr [eax + 4]
        ; Exact mapped bytes 7D 1E: jge 0x58797183
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7F FC FF FF: call 0x58796df0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 8]
        mov dword ptr [esi + eax*8], ecx
        mov dword ptr [esi + eax*8 + 4], edx
        ; Exact mapped bytes E9 2E FF FF FF: jmp 0x587970b6
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587971a1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 0F 8D A7 00 00 00: jge 0x58797252
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*8 + 4], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x5879724d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*8 + 4]
        sub eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        push ecx
        ; Exact mapped bytes E8 67 9E 09 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 17 5C 0B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 7D 56 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x56
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 14h]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D5 FD FF FF: call 0x58797000
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*8 + 4]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 01 9E 09 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x9e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 46 FF FF FF: jmp 0x58797198
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 EA 9D 09 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
