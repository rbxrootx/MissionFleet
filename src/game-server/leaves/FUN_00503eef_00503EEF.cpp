// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503EEF .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_00503eef_00503EEF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 35 FC FF FF: call 0x503b3c
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 05: jne 0x503f15
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x503fc3
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F0 E8 5D 00 00: cmp dword ptr [0x5de8f0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 24: jne 0x503f42
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 6C 21 5E 00: call dword ptr [0x5e216c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 12: je 0x503f42
        __asm _emit 0x74
        __asm _emit 0x12
        push 5c7010h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE 0B 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x503fc3
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        push 10h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7C 28 03 00: call 0x5367cc
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x503f68
        __asm _emit 0x75
        __asm _emit 0x14
        push 4a4h
        push 5c6db0h
        ; Exact mapped bytes E8 9D 0A 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x503f68
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x503f42
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 5c7024h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C 0B 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 45 0D 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 5c7038h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 84 0B 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 61 0D 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        push 5c7058h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C 0B 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3E 0E 03 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        push 5c706ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 0B 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
