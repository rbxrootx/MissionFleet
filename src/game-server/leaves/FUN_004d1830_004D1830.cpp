// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1830 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_004d1830_004D1830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 3ch
        ; Exact mapped bytes E8 98 25 03 00: call 0x503ddc
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 44h
        ; Exact mapped bytes E8 8D 25 03 00: call 0x503ddc
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4ch
        ; Exact mapped bytes E8 82 25 03 00: call 0x503ddc
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 54h
        ; Exact mapped bytes E8 77 25 03 00: call 0x503ddc
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 3ch
        ; Exact mapped bytes E8 D4 55 06 00: call 0x536e48
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x4d188e
        __asm _emit 0x75
        __asm _emit 0x16
        push 5c8e80h
        push 5c8each
        ; Exact mapped bytes E8 8E E3 FF FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 7C: jmp 0x4d190a
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2C: je 0x4d18c7
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 44h
        ; Exact mapped bytes E8 9E 55 06 00: call 0x536e48
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x4d18c7
        __asm _emit 0x75
        __asm _emit 0x19
        push 5c8eb0h
        push 5c8edch
        ; Exact mapped bytes E8 58 E3 FF FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1A: je 0x4d18e7
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4ch
        ; Exact mapped bytes E8 6C 55 06 00: call 0x536e48
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4d18e7
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 1A: je 0x4d1907
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 54h
        ; Exact mapped bytes E8 4C 55 06 00: call 0x536e48
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4d1907
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
