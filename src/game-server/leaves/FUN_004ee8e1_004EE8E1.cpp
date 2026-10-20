// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE8E1 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_004ee8e1_004EE8E1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ee90d
        __asm _emit 0x75
        __asm _emit 0x11
        push 4ch
        push 5c4f60h
        ; Exact mapped bytes E8 F8 60 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee90d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4ee8eb
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 19: jne 0x4ee935
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 4C 30 00 00: call 0x4f197f
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x4ee94a
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 34h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 34h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 78: call dword ptr [eax + 0x78]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x78
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
