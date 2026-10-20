// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B89B0 .. +0x1C8 bytes.
extern "C" __declspec(naked) void FUN_585b89b0_585B89B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 90h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 88h], ecx
        mov eax, dword ptr [ebp - 88h]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 0F 84 91 01 00 00: je 0x585b8b6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 0e0ch], 2000h
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 0e10h]
        push eax
        push 588ab164h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 88h]
        cmp dword ptr [eax + 0e10h], 0
        ; Exact mapped bytes 75 25: jne 0x585b8a4d
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ecx + 0e10h], eax
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 0e14h], 0
        push 0
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 0e10h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 09 76 FF FF: call 0x585b0070
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 0e10h]
        mov dword ptr [ebp - 90h], edx
        mov eax, dword ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        push 588ab188h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 0
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 0e10h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 A6 75 FF FF: call 0x585b0070
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x585b8b5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 0dc8h]
        ; Exact mapped bytes E8 7D BE EC FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xbe
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 31: je 0x585b8b1b
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 0dc8h]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0dc8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ecx + 0dc8h]
        ; Exact mapped bytes E8 A6 CF EC FF: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xcf
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 0
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 0e10h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 3B 75 FF FF: call 0x585b0070
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 0e10h], eax
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 0e14h]
        add eax, 1
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 0e14h], eax
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 E7 F9 FF FF: call 0x585b8550
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 DC 84 27 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
