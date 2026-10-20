// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58523BD0 .. +0x17E bytes.
extern "C" __declspec(naked) void FUN_58523bd0_58523BD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58881a99h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
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
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x58523c86
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 64b0h
        ; Exact mapped bytes E8 F5 D3 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd3
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 27: je 0x58523c49
        __asm _emit 0x74
        __asm _emit 0x27
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FC 38 23 00: call 0x58757540
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x38
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58523c50
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 14h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 18h], eax
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x58523d28
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 2ch], edx
        push 64b0h
        ; Exact mapped bytes E8 6B D3 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd3
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 27: je 0x58523cd3
        __asm _emit 0x74
        __asm _emit 0x27
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 72 38 23 00: call 0x58757540
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x38
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58523cda
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 1D 0E FA FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0e
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes E8 31 84 F6 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E9 88 FC FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes E8 0E 84 F6 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10h]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
