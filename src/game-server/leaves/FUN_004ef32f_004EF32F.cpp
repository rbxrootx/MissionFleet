// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EF32F .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_004ef32f_004EF32F() {
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
        ; Exact mapped bytes 75 14: jne 0x4ef35e
        __asm _emit 0x75
        __asm _emit 0x14
        push 12dh
        push 5c4f60h
        ; Exact mapped bytes E8 A7 56 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ef35e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4ef339
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 13: jne 0x4ef380
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 10 26 5E 00: call dword ptr [0x5e2610]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x4ef398
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 38h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 38h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
