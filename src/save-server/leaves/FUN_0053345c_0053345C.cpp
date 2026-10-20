// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053345C .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_0053345c_0053345C() {
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
        ; Exact mapped bytes 75 14: jne 0x533483
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a2h
        push 636640h
        ; Exact mapped bytes E8 C2 58 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x533483
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x533466
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 8]
        push edx
        push 18h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 8C B6 68 00: call dword ptr [0x68b68c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb6
        __asm _emit 0x68
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
