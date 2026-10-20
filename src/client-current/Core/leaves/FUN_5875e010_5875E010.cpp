// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875E010 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_5875e010_5875E010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 76 D3 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x76
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        lea edx, [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EF 16 DB FF: call 0x5850f730
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x16
        __asm _emit 0xdb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x5875e116
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5875e05b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 40h
        ; Exact mapped bytes 0F 8D B1 00 00 00: jge 0x5875e116
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 6244h]
        ; Exact mapped bytes E8 49 69 D2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x5875e111
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 1
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 14h]
        imul ecx, dword ptr [ebp - 4], 7
        add eax, ecx
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 13 DC D2 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xdc
        __asm _emit 0xd2
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov eax, dword ptr [ebp + 8]
        lea ecx, [eax + edx - 32h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp + 14h]
        imul eax, dword ptr [ebp - 4], 7
        add edx, eax
        push edx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 E9 DB D2 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0xd2
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx - 32h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp + 14h], 708h
        ; Exact mapped bytes 7D 07: jge 0x5875e0ea
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 6244h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D2 37 DB FF: call 0x585118e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x37
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x5875e116
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 3C FF FF FF: jmp 0x5875e052
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
