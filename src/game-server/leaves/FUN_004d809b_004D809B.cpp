// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D809B .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_004d809b_004D809B() {
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
        ; Exact mapped bytes 75 14: jne 0x4d80ca
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b4h
        push 5835a8h
        ; Exact mapped bytes E8 3B C9 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc9
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d80ca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d80a5
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 0
        push 1018h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 93 98 01 00: call 0x4f197f
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
