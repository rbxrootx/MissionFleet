// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533A56 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_00533a56_00533A56() {
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
        ; Exact mapped bytes 75 14: jne 0x533a7d
        __asm _emit 0x75
        __asm _emit 0x14
        push 1eah
        push 636640h
        ; Exact mapped bytes E8 C8 52 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x533a7d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x533a60
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F3 F0 FF FF: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EA F0 FF FF: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 0C B4 68 00: call dword ptr [0x68b40c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xb4
        __asm _emit 0x68
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
