// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9FF0 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_004c9ff0_004C9FF0() {
    __asm {
        push ebx
        push esi
        push edi
        push ebp
        xor ebp, ebp
        ; Exact mapped bytes FF 15 94 23 5E 00: call dword ptr [0x5e2394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ebx, eax
        push 5e04c0h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 39 2D 3C 05 5E 00: cmp dword ptr [0x5e053c], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 7E 6F: jle 0x4ca080
        __asm _emit 0x7e
        __asm _emit 0x6f
        lea eax, [ebp*4]
        cmp dword ptr [eax + eax*4 + 5e0544h], ebx
        lea esi, [eax + eax*4]
        ; Exact mapped bytes 75 53: jne 0x4ca077
        __asm _emit 0x75
        __asm _emit 0x53
        mov eax, dword ptr [esi + 5e054ch]
        dec eax
        mov dword ptr [esi + 5e054ch], eax
        ; Exact mapped bytes 74 0C: je 0x4ca03f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [esp + 14h]
        cmp dword ptr [esi + 5e0540h], eax
        ; Exact mapped bytes 75 38: jne 0x4ca077
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [esi + 5e0548h]
        push eax
        ; Exact mapped bytes FF 15 DC 25 5E 00: call dword ptr [0x5e25dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF 0D 3C 05 5E 00: dec dword ptr [0x5e053c]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B 2D 3C 05 5E 00: cmp ebp, dword ptr [0x5e053c]
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1D: jge 0x4ca077
        __asm _emit 0x7d
        __asm _emit 0x1d
        lea edi, [esi + 5e0540h]
        lea eax, [edi + 14h]
        mov ecx, 5
        mov esi, eax
        inc ebp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edi, eax
        ; Exact mapped bytes 3B 2D 3C 05 5E 00: cmp ebp, dword ptr [0x5e053c]
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 7C E9: jl 0x4ca060
        __asm _emit 0x7c
        __asm _emit 0xe9
        inc ebp
        ; Exact mapped bytes 3B 2D 3C 05 5E 00: cmp ebp, dword ptr [0x5e053c]
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 7C 91: jl 0x4ca011
        __asm _emit 0x7c
        __asm _emit 0x91
        push 5e04c0h
        ; Exact mapped bytes FF 0D E4 04 5E 00: dec dword ptr [0x5e04e4]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E4 04 5E 00 00: cmp dword ptr [0x5e04e4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x4ca09f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 61 0C 00 00: call 0x4cad00
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
