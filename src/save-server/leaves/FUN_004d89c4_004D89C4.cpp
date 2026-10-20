// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D89C4 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_004d89c4_004D89C4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4d89e5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c4h
        push 6725f0h
        ; Exact mapped bytes E8 60 03 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d89e5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d89cb
        __asm _emit 0x75
        __asm _emit 0xe0
        push 635808h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 1B 00 00: call 0x4da52a
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d8a10
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c5h
        push 6725f0h
        ; Exact mapped bytes E8 35 03 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d8a10
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4d89eb
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CB 19 00 00: call 0x4da3e9
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x4d8a2c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 B0 A4 FC FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0cah
        push 6725f0h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 21 18 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        or al, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 02 00 00: call 0x4d8d44
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4d8a75
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 80 00 00 00: call dword ptr [edx + 0x80]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 5E: jmp 0x4d8ad3
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 8B 05 00: call 0x5315d4
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d8a99
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d3h
        push 6725f0h
        ; Exact mapped bytes E8 AC 02 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d8a99
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4d8a75
        __asm _emit 0x75
        __asm _emit 0xd6
        mov edx, dword ptr [ebp + 14h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 75 27: jne 0x4d8ad0
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB 8B 05 00: call 0x53165c
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 14: jne 0x4d8aca
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d5h
        push 6725f0h
        ; Exact mapped bytes E8 7B 02 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d8aca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4d8aa9
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
