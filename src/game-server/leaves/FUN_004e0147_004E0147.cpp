// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E0147 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_004e0147_004E0147() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e016e
        __asm _emit 0x75
        __asm _emit 0x14
        push 13ch
        push 5841b8h
        ; Exact mapped bytes E8 97 48 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e016e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e0151
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x4e0186
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D8 AA FF FF: call 0x4dac5a
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e019a
        __asm _emit 0x75
        __asm _emit 0x14
        push 13ch
        push 5841b8h
        ; Exact mapped bytes E8 6B 48 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e019a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4e0174
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AA AA FF FF: call 0x4dac5a
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 B0 1E 5E 00: call dword ptr [0x5e1eb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
