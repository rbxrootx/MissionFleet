// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F9F6D .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_004f9f6d_004F9F6D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 209h
        push 674fe8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 D4 02 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B0 F9 FF FF: call 0x4f994c
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 636f20h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E4 01 FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f9fc4
        __asm _emit 0x75
        __asm _emit 0x14
        push 20dh
        push 674fe8h
        ; Exact mapped bytes E8 81 ED 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9fc4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4f9f9f
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
        ; Exact mapped bytes 75 10: jne 0x4f9ff1
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
