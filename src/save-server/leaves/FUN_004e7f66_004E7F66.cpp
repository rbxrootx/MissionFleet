// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E7F66 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_004e7f66_004E7F66() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e7f8f
        __asm _emit 0x75
        __asm _emit 0x14
        push 330h
        push 6733e0h
        ; Exact mapped bytes E8 B6 0D 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7f8f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e7f72
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 1D: je 0x4e7fc7
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC AB 04 00: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 3C B6 68 00: call dword ptr [0x68b63c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 1D: je 0x4e7fed
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 AB 04 00: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 3C B6 68 00: call dword ptr [0x68b63c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
