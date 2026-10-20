// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5F3B .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_004a5f3b_004A5F3B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 0f4h
        push 67d5f0h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 06 43 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4a5f85
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f7h
        push 67d5f0h
        ; Exact mapped bytes E8 C0 2D 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2d
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a5f85
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4a5f6b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 CB A2 02 00: call 0x4d025f
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 06 98 02 00: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 B0 A3 02 00: call 0x4d0351
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x4a5fc5
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x4a5fcc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
