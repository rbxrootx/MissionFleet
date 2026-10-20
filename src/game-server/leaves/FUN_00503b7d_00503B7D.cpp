// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503B7D .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_00503b7d_00503B7D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB 76 FF FF: call 0x4fb26a
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 2E: je 0x503bc6
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 83 3D F0 E8 5D 00 00: cmp dword ptr [0x5de8f0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x503bc6
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 6C 21 5E 00: call dword ptr [0x5e216c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x503bc6
        __asm _emit 0x75
        __asm _emit 0x14
        push 435h
        push 5c6db0h
        ; Exact mapped bytes E8 3F 0E 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x503bc6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C3: jne 0x503b8f
        __asm _emit 0x75
        __asm _emit 0xc3
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
