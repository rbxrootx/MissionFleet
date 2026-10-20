// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC928 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_004ec928_004EC928() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 75 39: jne 0x4ec976
        __asm _emit 0x75
        __asm _emit 0x39
        push 676b28h
        push 676b64h
        ; Exact mapped bytes E8 C9 3C FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x3c
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4ec96c
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e3h
        push 676ad0h
        ; Exact mapped bytes E8 D9 C3 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec96c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4ec94f
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        ; Exact mapped bytes EB 6B: jmp 0x4ec9e1
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4ch]
        ; Exact mapped bytes E8 68 DA FE FF: call 0x4da3e9
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1A: jne 0x4ec9a4
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [edx]
        push eax
        push 676b68h
        ; Exact mapped bytes E8 78 3C FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x3c
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 3D: jmp 0x4ec9e1
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 63a218h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DF D7 FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ec9c9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0edh
        push 676ad0h
        ; Exact mapped bytes E8 7C C3 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec9c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4ec9a4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
