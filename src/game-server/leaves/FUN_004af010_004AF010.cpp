// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AF010 .. +0x36E bytes.
extern "C" __declspec(naked) void FUN_004af010_004AF010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        ; Exact mapped bytes A1 F8 13 5D 00: mov eax, dword ptr [0x5d13f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4af038
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 73 33: jae 0x4af071
        __asm _emit 0x73
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        ; Exact mapped bytes E8 83 A3 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4 + 1ch]
        push ecx
        ; Exact mapped bytes E8 6E A3 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, dword ptr [ebp - 8]
        lea edx, [eax + esi + 2]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB BE: jmp 0x4af02f
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4af083
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0ch
        ; Exact mapped bytes 73 34: jae 0x4af0bd
        __asm _emit 0x73
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 38h]
        push eax
        ; Exact mapped bytes E8 37 A3 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 68h]
        push eax
        ; Exact mapped bytes E8 22 A3 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, dword ptr [ebp - 8]
        lea ecx, [eax + esi + 2]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB BD: jmp 0x4af07a
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 98h]
        push eax
        ; Exact mapped bytes E8 04 A3 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 9ch]
        push edx
        ; Exact mapped bytes E8 F0 A2 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, dword ptr [ebp - 8]
        lea eax, [eax + esi + 2]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0a0h]
        push edx
        ; Exact mapped bytes E8 D4 A2 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0a4h]
        push ecx
        ; Exact mapped bytes E8 B8 A2 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        ; Exact mapped bytes E8 9C A2 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 0ach
        push eax
        ; Exact mapped bytes E8 C1 B0 FF FF: call 0x4aa210
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 17 02 00 00: je 0x4af376
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 0ach
        mov dword ptr [ebp - 14h], edx
        push 0ach
        ; Exact mapped bytes A1 F8 13 5D 00: mov eax, dword ptr [0x5d13f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 9B 9E FF FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4af19a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 73 6E: jae 0x4af20e
        __asm _emit 0x73
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + eax*4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 81 AC FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 08 A2 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + eax*4 + 1ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4 + 1ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 4A AC FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 D1 A1 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 83: jmp 0x4af191
        __asm _emit 0xeb
        __asm _emit 0x83
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4af220
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0ch
        ; Exact mapped bytes 73 70: jae 0x4af296
        __asm _emit 0x73
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + ecx*4 + 38h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 38h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 F9 AB FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 80 A1 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + ecx*4 + 68h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 68h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 C2 AB FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 49 A1 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 81: jmp 0x4af217
        __asm _emit 0xeb
        __asm _emit 0x81
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 98h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 8B AB FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 12 A1 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 9ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 9ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 56 AB FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 DD A0 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0a0h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0a0h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 21 AB FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 A8 A0 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0a4h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 EC AA FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 73 A0 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0a8h], edx
        mov eax, dword ptr [ebp - 4]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
