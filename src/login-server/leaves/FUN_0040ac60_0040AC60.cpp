// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040AC60 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_0040ac60_0040AC60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 66h
        ; Exact mapped bytes 74 05: je 0x40ac7a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x40ad1d
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x40ac8c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 46 04 00 00: call 0x40b0e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 7E: jge 0x40ad1d
        __asm _emit 0x7d
        __asm _emit 0x7e
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 1D 05 00 00: call 0x40b1d0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 61: je 0x40ad18
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 93 21 02 00: call 0x42ce5c
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 46: je 0x40ad18
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        mov dword ptr [ebp - 0ch], 1014h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 449500h
        ; Exact mapped bytes E8 2E A0 02 00: call 0x434d17
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 75 2A: jne 0x40ad18
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x40ad00
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 10: jmp 0x40ad10
        __asm _emit 0xeb
        __asm _emit 0x10
        push 449524h
        ; Exact mapped bytes E8 96 95 FF FF: call 0x4042a0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A8 52 00 00: call 0x40ffc0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x40ac83
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8A 59 02 00: call 0x4306b7
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
