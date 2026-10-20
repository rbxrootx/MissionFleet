// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053BE5F .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_0053be5f_0053BE5F() {
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
        ; Exact mapped bytes 75 11: jne 0x53be8b
        __asm _emit 0x75
        __asm _emit 0x11
        push 40h
        push 582398h
        ; Exact mapped bytes E8 7A 8B FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53be8b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x53be69
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 A4 27 5E 00: call dword ptr [0x5e27a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
