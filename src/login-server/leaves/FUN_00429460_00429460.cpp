// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429460 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_00429460_00429460() {
    __asm {
        push ebx
        push esi
        push edi
        push ebp
        xor ebp, ebp
        ; Exact mapped bytes FF 15 E4 C1 43 00: call dword ptr [0x43c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebx, eax
        push 4513e0h
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 39 2D 5C 14 45 00: cmp dword ptr [0x45145c], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7E 6F: jle 0x4294f0
        __asm _emit 0x7e
        __asm _emit 0x6f
        lea eax, [ebp*4]
        cmp dword ptr [eax + eax*4 + 451464h], ebx
        lea esi, [eax + eax*4]
        ; Exact mapped bytes 75 53: jne 0x4294e7
        __asm _emit 0x75
        __asm _emit 0x53
        mov eax, dword ptr [esi + 45146ch]
        dec eax
        mov dword ptr [esi + 45146ch], eax
        ; Exact mapped bytes 74 0C: je 0x4294af
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [esp + 14h]
        cmp dword ptr [esi + 451460h], eax
        ; Exact mapped bytes 75 38: jne 0x4294e7
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [esi + 451468h]
        push eax
        ; Exact mapped bytes FF 15 B0 C4 43 00: call dword ptr [0x43c4b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF 0D 5C 14 45 00: dec dword ptr [0x45145c]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 3B 2D 5C 14 45 00: cmp ebp, dword ptr [0x45145c]
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1D: jge 0x4294e7
        __asm _emit 0x7d
        __asm _emit 0x1d
        lea edi, [esi + 451460h]
        lea eax, [edi + 14h]
        mov ecx, 5
        mov esi, eax
        inc ebp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edi, eax
        ; Exact mapped bytes 3B 2D 5C 14 45 00: cmp ebp, dword ptr [0x45145c]
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7C E9: jl 0x4294d0
        __asm _emit 0x7c
        __asm _emit 0xe9
        inc ebp
        ; Exact mapped bytes 3B 2D 5C 14 45 00: cmp ebp, dword ptr [0x45145c]
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7C 91: jl 0x429481
        __asm _emit 0x7c
        __asm _emit 0x91
        push 4513e0h
        ; Exact mapped bytes FF 0D 04 14 45 00: dec dword ptr [0x451404]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 04 14 45 00 00: cmp dword ptr [0x451404], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x42950f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 A1 0B 00 00: call 0x42a0b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x0b
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
