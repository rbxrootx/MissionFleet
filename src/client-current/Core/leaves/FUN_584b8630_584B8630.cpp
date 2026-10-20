// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B8630 .. +0x181 bytes.
extern "C" __declspec(naked) void FUN_584b8630_584B8630() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e6bdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
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
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x584b8777
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 1B: jne 0x584b869f
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 23 EC FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E7 E8 FC FF: call 0x58486f80
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x584b8762
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 69 F8 FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 FD EB FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 1D FD FF FF: call 0x584b83e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 66 F8 FC FF: call 0x58487f40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, -1
        add ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 C5 EB FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 B6 EB FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 8F EC FC FF: call 0x584873a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, 4
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 4
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 79 FD FF FF: call 0x584b84b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 BE C2 FC FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 68 EB FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 5F 01 00 00: call 0x584b88c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0E 18 00 00: call 0x584b9f80
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 29: jmp 0x584b87a0
        __asm _emit 0xeb
        __asm _emit 0x29
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 30 EB FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E0 E8 FC FF: call 0x58487070
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E3 17 00 00: call 0x584b9f80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
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
