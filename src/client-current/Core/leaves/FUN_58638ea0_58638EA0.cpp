// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58638EA0 .. +0x1B3 bytes.
extern "C" __declspec(naked) void FUN_58638ea0_58638EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 0F 84 94 01 00 00: je 0x5863904d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 100h]
        ; Exact mapped bytes E8 A9 7D 18 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x7d
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        sub edx, eax
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 23 4D ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + ecx*4 + 300h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 DC EB FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xdc
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x58638f9c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 14h], edx
        push 0ff000000h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 33ch
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D3 86 18 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 108h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        push eax
        ; Exact mapped bytes E8 43 92 EE FF: call 0x58522190
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x92
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        push 0ff000000h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 98 86 18 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 80h]
        mov dword ptr [ebp - 20h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0E D0 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd0
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6ch]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F7 CF E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xcf
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 76: jmp 0x58639012
        __asm _emit 0xeb
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 104h]
        mov dword ptr [ebp - 28h], ecx
        push 0ff000000h
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588aee50h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 42 86 18 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        mov dword ptr [ebp - 2ch], ecx
        push 0ff000000h
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588aee54h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 20 86 18 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6ch]
        mov dword ptr [ebp - 30h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 99 CF E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xcf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 80h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7F CF E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xcf
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 F0 45 ED FF: call 0x5850d610
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 144h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 96 4D ED FF: call 0x5850ddd0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, ax
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 44 21 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x21
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
