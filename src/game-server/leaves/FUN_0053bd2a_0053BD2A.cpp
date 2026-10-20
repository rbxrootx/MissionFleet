// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053BD2A .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0053bd2a_0053BD2A() {
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
        ; Exact mapped bytes 75 11: jne 0x53bd56
        __asm _emit 0x75
        __asm _emit 0x11
        push 38h
        push 582398h
        ; Exact mapped bytes E8 AF 8C FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53bd56
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x53bd34
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B4 27 5E 00: call dword ptr [0x5e27b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 EA F8 FB FF: call 0x4fb659
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
