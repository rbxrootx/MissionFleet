// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BB230 .. +0x193 bytes.
extern "C" __declspec(naked) void FUN_004bb230_004BB230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 0a0h]
        push ecx
        lea edx, [ebp - 0a8h]
        push edx
        lea eax, [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 75 02 00 00: call 0x4bb4d0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4bb269
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 56 01 00 00: jmp 0x4bb3bf
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 132h
        push 58cd14h
        push 2
        lea edx, [ebp - 9ch]
        push edx
        ; Exact mapped bytes E8 4F E1 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        push eax
        ; Exact mapped bytes E8 A3 EF FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x4bb2a0
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x4bb3bf
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 0ch
        mov ecx, dword ptr [eax + 5d1ffch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 5df00ch]
        mov dword ptr [ebp - 4], eax
        push 6
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 6
        add ecx, 5df07ch
        push ecx
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 4C DD FE FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes A1 24 F0 5D 00: mov eax, dword ptr [0x5df024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 9ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 51 EB FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 0ch
        mov dword ptr [ecx + 5d1ffch], eax
        mov edx, dword ptr [ebp - 0a8h]
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax*4 + 5df00ch], edx
        push 6
        lea ecx, [ebp - 0a8h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 6
        add edx, 5df07ch
        push edx
        ; Exact mapped bytes E8 F1 DC FE FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0B: jne 0x4bb343
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes A3 24 F0 5D 00: mov dword ptr [0x5df024], eax
        __asm _emit 0xa3
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 0C: jne 0x4bb355
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes 89 0D 28 F0 5D 00: mov dword ptr [0x5df028], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 0ch
        ; Exact mapped bytes FF 92 00 20 5D 00: call dword ptr [edx + 0x5d2000]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x5d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x4bb39c
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 5d1ffch], ecx
        push 2
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 41 F9 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax*4 + 5df00ch], ecx
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 89 15 24 F0 5D 00: mov dword ptr [0x5df024], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 23: jmp 0x4bb3bf
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp dword ptr [ebp - 0ch], 5d1ee8h
        ; Exact mapped bytes 74 0E: je 0x4bb3b3
        __asm _emit 0x74
        __asm _emit 0x0e
        push 2
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 10 F9 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 0ch
        mov eax, dword ptr [ecx + 5d1ffch]
        mov esp, ebp
        pop ebp
        ret
    }
}
