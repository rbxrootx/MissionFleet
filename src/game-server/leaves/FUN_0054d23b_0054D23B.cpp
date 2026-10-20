// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054D23B .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_0054d23b_0054D23B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 78 24 5E 00: call dword ptr [0x5e2478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x54d267
        __asm _emit 0x74
        __asm _emit 0x14
        push 115h
        push 5cc198h
        ; Exact mapped bytes E8 9E 77 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54d267
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x54d245
        __asm _emit 0x75
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
