// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055CB3D .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_0055cb3d_0055CB3D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 4c0h
        push 5cebe0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 04 E6 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe6
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 75 14: jne 0x55cb79
        __asm _emit 0x75
        __asm _emit 0x14
        push 4c1h
        push 5cebe0h
        ; Exact mapped bytes E8 8C 7E FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55cb79
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55cb5c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 75 05: jne 0x55cb90
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 31: jmp 0x55cbc1
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BF 3A F9 FF: call 0x4f0657
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x3a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 68h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 FA C1 F6 FF: call 0x4c8da4
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc1
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 69 CB FF FF: call 0x55971c
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0E 3B F9 FF: call 0x4f06cc
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x3b
        __asm _emit 0xf9
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
