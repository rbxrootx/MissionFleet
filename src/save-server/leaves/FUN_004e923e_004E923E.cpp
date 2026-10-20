// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E923E .. +0x212 bytes.
extern "C" __declspec(naked) void FUN_004e923e_004E923E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 9A F8 FF FF: call 0x4e8af0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 05: jne 0x4e9264
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 E3 01 00 00: jmp 0x4e9447
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x01
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
        ; Exact mapped bytes 75 24: jne 0x4e9291
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 78 B6 68 00: call dword ptr [0x68b678]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 74 12: je 0x4e9291
        __asm _emit 0x74
        __asm _emit 0x12
        push 6736e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF F5 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 B6 01 00 00: jmp 0x4e9447
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        push ecx
        push 3ch
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 85 99 04 00: call 0x532c24
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e92b7
        __asm _emit 0x75
        __asm _emit 0x14
        push 4f9h
        push 6733e0h
        ; Exact mapped bytes E8 8E FA 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e92b7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4e9291
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 3ch]
        push eax
        push 6736fch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D F5 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5A F7 03 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        push 67370ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 65 F5 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 42 F7 03 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        push edx
        push 67371ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4D F5 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2A F7 03 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        push eax
        push 673730h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 F5 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 12 F7 03 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        push 673748h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D F5 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FA F6 03 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffh
        push edx
        push 673758h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF F4 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 44 F7 03 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 27h]
        and eax, 0ffh
        push eax
        push 673768h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E2 F4 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 27 F7 03 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 26h]
        and ecx, 0ffh
        push ecx
        push 67377ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C4 F4 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 09 F7 03 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 25h]
        and edx, 0ffh
        push edx
        push 673790h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 F4 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EB F6 03 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        and eax, 0ffh
        push eax
        push 6737a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 F4 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CE F6 03 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 23h]
        and ecx, 0ffh
        push ecx
        push 6737bch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B F4 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B0 F6 03 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 22h]
        and edx, 0ffh
        push edx
        push 6737d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4D F4 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 92 F6 03 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 21h]
        and eax, 0ffh
        push eax
        push 6737e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 F4 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 75 F6 03 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        push ecx
        push 673800h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 F4 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 11 F4 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        push 673814h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 F4 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf4
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
