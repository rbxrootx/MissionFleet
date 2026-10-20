// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040506F .. +0x293 bytes.
extern "C" __declspec(naked) void FUN_0040506f_0040506F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0d4h
        mov dword ptr [ebp - 0d4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov dword ptr [ebp - 64h], 0
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 0c0000000h
        mov eax, dword ptr [ebp - 0d4h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 50 C2 43 00: call dword ptr [0x43c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 0c8h], eax
        cmp dword ptr [ebp - 0c8h], -1
        ; Exact mapped bytes 0F 84 38 02 00 00: je 0x4052f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], 0ffffffffh
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 60h]
        push eax
        push 60h
        lea ecx, [ebp - 0c4h]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        ; Exact mapped bytes FF 15 54 C2 43 00: call dword ptr [0x43c254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 54h
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 60h]
        push edx
        push 4
        lea eax, [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        ; Exact mapped bytes FF 15 54 C2 43 00: call dword ptr [0x43c254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 68h]
        add edx, 1
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 70h], -1
        ; Exact mapped bytes 75 07: jne 0x405146
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0ffffffffh
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 60h]
        push edx
        push 60h
        lea eax, [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        add edx, 58h
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 60h]
        push ecx
        push 4
        lea edx, [ebp - 0d0h]
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 54h]
        push edx
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0ffffffffh
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 18: jne 0x4051fd
        __asm _emit 0x75
        __asm _emit 0x18
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 15: jmp 0x405212
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 60h]
        push ecx
        push 58h
        lea edx, [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1B: je 0x40524c
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 33: je 0x405285
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        add edx, 54h
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 60h]
        push ecx
        push 4
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x4052b6
        __asm _emit 0xeb
        __asm _emit 0x31
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 54h
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 60h]
        push eax
        push 4
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
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
        add eax, 58h
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 60h]
        push edx
        push 4
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 03: jmp 0x4052fc
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
