// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00406F6F .. +0x1FD bytes.
extern "C" __declspec(naked) void FUN_00406f6f_00406F6F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c0h
        mov dword ptr [ebp - 0c0h], ecx
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 0c0000000h
        mov eax, dword ptr [ebp - 0c0h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 50 C2 43 00: call dword ptr [0x43c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        cmp dword ptr [ebp - 0b4h], -1
        ; Exact mapped bytes 0F 84 B0 01 00 00: je 0x407163
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], 0ffffffffh
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 4]
        push eax
        push 5ch
        lea ecx, [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 15 54 C2 43 00: call dword ptr [0x43c254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp - 64h], -1
        ; Exact mapped bytes 75 07: jne 0x406ffb
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0ffffffffh
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 4]
        push edx
        push 4
        lea eax, [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], 0ffffffffh
        mov dword ptr [ebp - 10h], 0
        push 2
        push 0
        push 0
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], eax
        push 0
        lea ecx, [ebp - 4]
        push ecx
        push 50h
        lea edx, [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1B: je 0x4070aa
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 36: je 0x4070e6
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        add edx, 4ch
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 4]
        push ecx
        push 4
        lea edx, [ebp - 0b8h]
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 34: jmp 0x40711a
        __asm _emit 0xeb
        __asm _emit 0x34
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4ch
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 4]
        push eax
        push 4
        lea ecx, [ebp - 0b8h]
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 4]
        push edx
        push 4
        lea eax, [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes EB 03: jmp 0x407166
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
