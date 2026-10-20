// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055C15D .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_0055c15d_0055C15D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 3d7h
        push 5cebe0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 E4 EF F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xef
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 75 14: jne 0x55c199
        __asm _emit 0x75
        __asm _emit 0x14
        push 3d8h
        push 5cebe0h
        ; Exact mapped bytes E8 6C 88 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55c199
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55c17c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B0 44 F9 FF: call 0x4f0657
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 68h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 D9 CB F6 FF: call 0x4c8d92
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xcb
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5A D5 FF FF: call 0x55971c
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FF 44 F9 FF: call 0x4f06cc
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x44
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
