// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051A29A .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_0051a29a_0051A29A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 50h], 1
        ; Exact mapped bytes 75 11: jne 0x51a2c0
        __asm _emit 0x75
        __asm _emit 0x11
        push 61h
        push 5ca2b4h
        ; Exact mapped bytes E8 45 A7 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51a2c0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x51a2a6
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 83 3D DC E8 5D 00 00: cmp dword ptr [0x5de8dc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 44: jne 0x51a313
        __asm _emit 0x75
        __asm _emit 0x44
        push 7f8bh
        push 0
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 DC E8 5D 00: mov dword ptr [0x5de8dc], eax
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D DC E8 5D 00 00: cmp dword ptr [0x5de8dc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1C: jne 0x51a306
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 53 B2 01 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 7901h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 DC E8 5D 00: mov dword ptr [0x5de8dc], eax
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D DC E8 5D 00 00: cmp dword ptr [0x5de8dc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x51a313
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 18: jmp 0x51a32b
        __asm _emit 0xeb
        __asm _emit 0x18
        lea eax, [ebp - 8]
        push eax
        push 0
        push 0
        push 0e145h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
