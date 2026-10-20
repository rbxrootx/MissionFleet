// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F217D .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_004f217d_004F217D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 75 14: jne 0x4f21a5
        __asm _emit 0x75
        __asm _emit 0x14
        push 353h
        push 678234h
        ; Exact mapped bytes E8 A0 6B 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f21a5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4f2189
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 04: jne 0x4f21b7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 40: jmp 0x4f21f7
        __asm _emit 0xeb
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 28h
        ; Exact mapped bytes E8 0B 49 03 00: call 0x526ad1
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 636f20h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA 7F FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f21ee
        __asm _emit 0x75
        __asm _emit 0x14
        push 358h
        push 678234h
        ; Exact mapped bytes E8 57 6B 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f21ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4f21c9
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
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
