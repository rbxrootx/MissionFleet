// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055696D .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_0055696d_0055696D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 13bh
        push 67c1ech
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D6 38 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x38
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x5569a7
        __asm _emit 0x75
        __asm _emit 0x14
        push 13ch
        push 67c1ech
        ; Exact mapped bytes E8 9E 23 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5569a7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55698a
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        neg eax
        sbb eax, eax
        inc eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
