// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567854 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_00567854_00567854() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 13ch
        push 67aea0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 ED 29 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x29
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0
        push 18h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 34h]
        push edx
        ; Exact mapped bytes E8 E3 BB F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xbb
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56789b
        __asm _emit 0x75
        __asm _emit 0x14
        push 13dh
        push 67aea0h
        ; Exact mapped bytes E8 AA 14 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56789b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x567873
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 34h]
        ; Exact mapped bytes E8 3D 2B F7 FF: call 0x4da3e9
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x2b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x5678ba
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 22 B6 F3 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb6
        __asm _emit 0xf3
        __asm _emit 0xff
        push 635528h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 28 F7 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5678df
        __asm _emit 0x75
        __asm _emit 0x14
        push 146h
        push 67aea0h
        ; Exact mapped bytes E8 66 14 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5678df
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5678ba
        __asm _emit 0x75
        __asm _emit 0xd5
        push 147h
        push 67aea0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 68 29 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x29
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
