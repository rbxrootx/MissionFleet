// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F9924 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_004f9924_004F9924() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4f9945
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c4h
        push 5c60d0h
        ; Exact mapped bytes E8 C0 B0 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9945
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f992b
        __asm _emit 0x75
        __asm _emit 0xe0
        push 583350h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 1A 00 00: call 0x4fb42a
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f9970
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c5h
        push 5c60d0h
        ; Exact mapped bytes E8 95 B0 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9970
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4f994b
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B 19 00 00: call 0x4fb2e9
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x4f998c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 20 64 FD FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0cah
        push 5c60d0h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 C1 17 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x17
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
        ; Exact mapped bytes E8 82 02 00 00: call 0x4f9c41
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4f99d5
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
        ; Exact mapped bytes EB 5E: jmp 0x4f9a33
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 81 04 00: call 0x541b83
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f99f9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d3h
        push 5c60d0h
        ; Exact mapped bytes E8 0C B0 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f99f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4f99d5
        __asm _emit 0x75
        __asm _emit 0xd6
        mov edx, dword ptr [ebp + 14h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 75 27: jne 0x4f9a30
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA 81 04 00: call 0x541c0b
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 14: jne 0x4f9a2a
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d5h
        push 5c60d0h
        ; Exact mapped bytes E8 DB AF 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9a2a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4f9a09
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
