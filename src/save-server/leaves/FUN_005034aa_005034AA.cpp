// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005034AA .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_005034aa_005034AA() {
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
        ; Exact mapped bytes 75 11: jne 0x5034d0
        __asm _emit 0x75
        __asm _emit 0x11
        push 61h
        push 676a3ch
        ; Exact mapped bytes E8 75 58 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5034d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5034b6
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 83 3D F4 6D 68 00 00: cmp dword ptr [0x686df4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 44: jne 0x503523
        __asm _emit 0x75
        __asm _emit 0x44
        push 7f8bh
        push 0
        ; Exact mapped bytes FF 15 48 BD 68 00: call dword ptr [0x68bd48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 F4 6D 68 00: mov dword ptr [0x686df4], eax
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F4 6D 68 00 00: cmp dword ptr [0x686df4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1C: jne 0x503516
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 B3 E5 02 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 7901h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 48 BD 68 00: call dword ptr [0x68bd48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 F4 6D 68 00: mov dword ptr [0x686df4], eax
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F4 6D 68 00 00: cmp dword ptr [0x686df4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x503523
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 18: jmp 0x50353b
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
