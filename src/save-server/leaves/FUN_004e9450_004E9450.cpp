// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E9450 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_004e9450_004E9450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 88 F6 FF FF: call 0x4e8af0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 05: jne 0x4e9476
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x4e956e
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 08 6E 68 00 00: cmp dword ptr [0x686e08], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 24: jne 0x4e94a3
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 78 B6 68 00: call dword ptr [0x68b678]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 7
        ; Exact mapped bytes 74 12: je 0x4e94a3
        __asm _emit 0x74
        __asm _emit 0x12
        push 673818h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AD F3 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x4e956e
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        push ecx
        push 18h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 73 97 04 00: call 0x532c24
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e94c9
        __asm _emit 0x75
        __asm _emit 0x14
        push 51fh
        push 6733e0h
        ; Exact mapped bytes E8 7C F8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e94c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4e94a3
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 673830h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B F3 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 48 F5 03 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 673840h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 F3 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 30 F5 03 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 673850h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B F3 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 18 F5 03 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 673860h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 F3 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 00 F5 03 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4D F8: mov cx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        push ecx
        push 673874h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A F3 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7A F4 03 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 55 FA: mov dx, word ptr [ebp - 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfa
        push edx
        push 673884h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 F2 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 61 F4 03 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        push 673898h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DD F2 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf2
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
