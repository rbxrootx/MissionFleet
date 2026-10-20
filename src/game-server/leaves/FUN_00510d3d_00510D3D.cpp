// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00510D3D .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_00510d3d_00510D3D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 209h
        push 5c84b0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 04 A4 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B0 F9 FF FF: call 0x51071c
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 585e68h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 A3 FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x510d94
        __asm _emit 0x75
        __asm _emit 0x14
        push 20dh
        push 5c84b0h
        ; Exact mapped bytes E8 71 3C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x510d94
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x510d6f
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 10: jne 0x510dc1
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 F4 00 00 00: call dword ptr [edx + 0xf4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
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
