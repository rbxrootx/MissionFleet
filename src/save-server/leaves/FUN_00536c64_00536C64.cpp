// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00536C64 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_00536c64_00536C64() {
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
        ; Exact mapped bytes 75 14: jne 0x536c8b
        __asm _emit 0x75
        __asm _emit 0x14
        push 3b0h
        push 636640h
        ; Exact mapped bytes E8 BA 20 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x536c8b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x536c6e
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 5C B5 68 00: call dword ptr [0x68b55c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 B7 C0 FF FF: call 0x532d5d
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc0
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
