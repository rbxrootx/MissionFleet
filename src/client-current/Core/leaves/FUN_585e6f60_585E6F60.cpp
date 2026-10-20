// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E6F60 .. +0x14D bytes.
extern "C" __declspec(naked) void FUN_585e6f60_585E6F60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ach
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 88h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F 31 EC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x31
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 54 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x54
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA DA E9 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xda
        __asm _emit 0xe9
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 94h], eax
        push 588ad150h
        ; Exact mapped bytes E8 47 B0 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb0
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 D9 FE FF: call 0x585d49d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x585e700f
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 20f10h]
        mov dword ptr [ebp - 9ch], edx
        push 0ffff00h
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 C4 E4 1D 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe4
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x585e7039
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 20f14h]
        mov dword ptr [ebp - 0a0h], edx
        push 0ffffh
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 98 E4 1D 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xe4
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        push 1dh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A DA E9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xda
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 56 4D 1D 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x4d
        __asm _emit 0x1d
        __asm _emit 0x00
        push 1dh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 DA E9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xda
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ach], edx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 54 FF FF FF: call dword ptr [ebp - 0xac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 A9 9F 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x9f
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
