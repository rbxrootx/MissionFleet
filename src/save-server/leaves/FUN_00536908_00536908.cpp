// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00536908 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_00536908_00536908() {
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
        ; Exact mapped bytes 75 14: jne 0x53692f
        __asm _emit 0x75
        __asm _emit 0x14
        push 394h
        push 636640h
        ; Exact mapped bytes E8 16 24 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53692f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x536912
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 3C B5 68 00: call dword ptr [0x68b53c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
