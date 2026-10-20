// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FC380 .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_584fc380_584FC380() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 264h]
        ; Exact mapped bytes E8 09 08 00 00: call 0x584fcba0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 13 01 00 00: je 0x584fc4b2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 264h]
        ; Exact mapped bytes E8 A3 01 00 00: call 0x584fc550
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 4], edx
        push 0bh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 86 F8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EA F9 2B 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf9
        __asm _emit 0x2b
        __asm _emit 0x00
        push 0bh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 86 F8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 260h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 37 AE FB FF: call 0x584b7260
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 264h]
        ; Exact mapped bytes E8 68 07 00 00: call 0x584fcba0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4D: je 0x584fc489
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 264h]
        ; Exact mapped bytes E8 B6 0C 00 00: call 0x584fd100
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + 80h]
        cmp edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 7C 26: jl 0x584fc489
        __asm _emit 0x7c
        __asm _emit 0x26
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x584fc487
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 24h], eax
        push 88h
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 B7 4B 33 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4b
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 29: jmp 0x584fc4b2
        __asm _emit 0xeb
        __asm _emit 0x29
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x584fc4ad
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 28h], edx
        push 88h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 91 4B 33 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4b
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 D7 FE FF FF: jmp 0x584fc389
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
