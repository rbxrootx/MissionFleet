// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF99F .. +0x1A5 bytes.
extern "C" __declspec(naked) void FUN_004ff99f_004FF99F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e92dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 15ch
        push ebx
        push esi
        push edi
        push 1
        push 104h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 86 04 FD FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ff9e8
        __asm _emit 0x75
        __asm _emit 0x14
        push 216h
        push 5cb750h
        ; Exact mapped bytes E8 1D 50 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ff9e8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4ff9c0
        __asm _emit 0x75
        __asm _emit 0xd2
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 104h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 F8 22 5E 00: call dword ptr [0x5e22f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 35: jne 0x4ffa3e
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4ffa24
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 5cb7c8h
        ; Exact mapped bytes E8 F4 01 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        push 104h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x4ffb31
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C1 14 03 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 EA 00 00 00: call 0x4ffb44
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        push 0
        push 0
        push 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 36 15 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 FC 22 5E 00: call dword ptr [0x5e22fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 37: jne 0x4ffab6
        __asm _emit 0x75
        __asm _emit 0x37
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 23 15 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push 5cb7f4h
        ; Exact mapped bytes E8 83 01 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 164h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 9E DD FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 164h]
        ; Exact mapped bytes EB 7B: jmp 0x4ffb31
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 18h]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 75 0A: jne 0x4ffaca
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 A4 26 5E 00: call dword ptr [0x5e26a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 75 3E: jne 0x4ffb12
        __asm _emit 0x75
        __asm _emit 0x3e
        lea edx, [ebp - 15ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 54 24 5E 00: call dword ptr [0x5e2454]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 160h], eax
        cmp dword ptr [ebp - 160h], -1
        ; Exact mapped bytes 74 1E: je 0x4ffb12
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        ; Exact mapped bytes FF 15 00 23 5E 00: call dword ptr [0x5e2300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [ebp - 130h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 168h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 21 DD FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 168h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
