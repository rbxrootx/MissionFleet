// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B2BB5 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_004b2bb5_004B2BB5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4b2be6
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a3h
        push 6732c8h
        ; Exact mapped bytes E8 5F 61 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x61
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b2be6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4b2bc1
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 3C: jne 0x4b2c34
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FD 01 00 00: call 0x4b2dfd
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4b2c1d
        __asm _emit 0x75
        __asm _emit 0x14
        push 0abh
        push 6732d8h
        ; Exact mapped bytes E8 28 61 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x61
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b2c1d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4b2c03
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0B: je 0x4b2c34
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B9 D7 FF FF: call 0x4b03ea
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 04: jne 0x4b2c3e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4A: jmp 0x4b2c88
        __asm _emit 0xeb
        __asm _emit 0x4a
        push 1
        mov edx, dword ptr [ebp - 4]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 16 08 FF FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4b2c68
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b2h
        push 6732e8h
        ; Exact mapped bytes E8 DD 60 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b2c68
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x4b2c3e
        __asm _emit 0x75
        __asm _emit 0xd0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        push 103bh
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
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
