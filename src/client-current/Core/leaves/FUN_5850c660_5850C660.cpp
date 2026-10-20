// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850C660 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_5850c660_5850C660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F ED FF FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0A: jne 0x5850c684
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes E8 71 E1 F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x5850c738
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B4 E8 FF FF: call 0x5850af40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 73 14: jae 0x5850c6a5
        __asm _emit 0x73
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax]
        push ecx
        ; Exact mapped bytes E8 E3 8D FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x5850c738
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 F3 FF FF: call 0x5850ba40
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0B: je 0x5850c6c1
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        and eax, 4
        ; Exact mapped bytes 74 07: je 0x5850c6c8
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 2A E1 F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 70: jmp 0x5850c738
        __asm _emit 0xeb
        __asm _emit 0x70
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 38h
        push edx
        ; Exact mapped bytes E8 48 D2 F9 FF: call 0x584a9920
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd2
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 77 07: ja 0x5850c6ef
        __asm _emit 0x77
        __asm _emit 0x07
        ; Exact mapped bytes E8 03 E1 F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 49: jmp 0x5850c738
        __asm _emit 0xeb
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 38h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 EC FF FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 E8 FF FF: call 0x5850af20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E FB FF FF: call 0x5850c270
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 EC FF FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [eax]
        movzx edx, cl
        push edx
        ; Exact mapped bytes E8 4B 8D FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
