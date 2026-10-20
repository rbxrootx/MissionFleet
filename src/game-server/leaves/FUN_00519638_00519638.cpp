// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519638 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_00519638_00519638() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 83 3D 38 8C 5C 00 FF: cmp dword ptr [0x5c8c38], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x519668
        __asm _emit 0x75
        __asm _emit 0x14
        push 52ah
        push 5c8c2ch
        ; Exact mapped bytes E8 9D B3 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519668
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x51964b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 81 3D 38 8C 5C 00 47 00 04 00: cmp dword ptr [0x5c8c38], 0x40047
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 7C 1F: jl 0x5196a0
        __asm _emit 0x7c
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 75 57 FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 8800h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2F 58 FD FF: call 0x4eeecc
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CA 81 FD FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x5196c4
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push -10h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 C0 28 5E 00: call dword ptr [0x5e28c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
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
