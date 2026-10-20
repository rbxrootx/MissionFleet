// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053A8E9 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_0053a8e9_0053A8E9() {
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
        ; Exact mapped bytes 75 14: jne 0x53a910
        __asm _emit 0x75
        __asm _emit 0x14
        push 3b4h
        push 581fc0h
        ; Exact mapped bytes E8 F5 A0 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53a910
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53a8f3
        __asm _emit 0x75
        __asm _emit 0xdd
        push 5
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
        ; Exact mapped bytes E8 4A C7 FF FF: call 0x537075
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc7
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
