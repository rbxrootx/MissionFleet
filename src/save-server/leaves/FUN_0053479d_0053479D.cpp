// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053479D .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_0053479d_0053479D() {
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
        ; Exact mapped bytes 75 14: jne 0x5347c4
        __asm _emit 0x75
        __asm _emit 0x14
        push 273h
        push 636640h
        ; Exact mapped bytes E8 81 45 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5347c4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5347a7
        __asm _emit 0x75
        __asm _emit 0xdd
        push 2
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 7C B4 68 00: call dword ptr [0x68b47c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5347f5
        __asm _emit 0x75
        __asm _emit 0x14
        push 273h
        push 636640h
        ; Exact mapped bytes E8 50 45 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5347f5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x5347ca
        __asm _emit 0x75
        __asm _emit 0xcf
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
