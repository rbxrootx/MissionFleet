// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053A8A0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_0053a8a0_0053A8A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x53a8c7
        __asm _emit 0x75
        __asm _emit 0x14
        push 3b2h
        push 581fc0h
        ; Exact mapped bytes E8 3E A1 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53a8c7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53a8aa
        __asm _emit 0x75
        __asm _emit 0xdd
        push 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 F0 1F 5E 00: call dword ptr [0x5e1ff0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A0 C1 FF FF: call 0x536a82
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
