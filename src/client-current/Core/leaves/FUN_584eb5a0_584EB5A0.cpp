// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EB5A0 .. +0x14A bytes.
extern "C" __declspec(naked) void FUN_584eb5a0_584EB5A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f7e7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
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
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 78h]
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 79h]
        cmp ecx, eax
        ; Exact mapped bytes 75 0E: jne 0x584eb5e8
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EE DE FF FF: call 0x584e94d0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x584eb6db
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x584eb69a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        ; Exact mapped bytes E8 05 5A 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x5a
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 44: je 0x584eb656
        __asm _emit 0x74
        __asm _emit 0x44
        push 7d00h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 0aah
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 1aeh
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1F 01 00 00: call 0x584eb770
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584eb65d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 58h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1A A7 F9 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa7
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A7 A7 F9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa7
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AE E9 FF FF: call 0x584ea050
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x584eb6d2
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 78h]
        sub eax, 1
        imul ecx, eax, 418h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        add eax, ecx
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D9 F7 FF FF: call 0x584eaea0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B1 E1 FF FF: call 0x584e9880
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x584eb6db
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 16 DD FF FF: call 0x584e93f0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xdd
        __asm _emit 0xff
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
        mov esp, ebp
        pop ebp
        ret
    }
}
