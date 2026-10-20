// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D94F0 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_004d94f0_004D94F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 298h
        push 6725f0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 54 0D 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 17: jne 0x4d952b
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A5 FE FF FF: call 0x4d93c5
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4d952b
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 5C: jmp 0x4d9587
        __asm _emit 0xeb
        __asm _emit 0x5c
        ; Exact mapped bytes E8 40 86 05 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D 20 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 63 A4 FF FF: call 0x4d39a8
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4d9550
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 37: jmp 0x4d9587
        __asm _emit 0xeb
        __asm _emit 0x37
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2F: je 0x4d9585
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 4E 63 FF FF: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D2 95 FF FF: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 14: je 0x4d9585
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 98 00 00 00: call dword ptr [edx + 0x98]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x4d9587
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
