// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534986 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_00534986_00534986() {
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
        ; Exact mapped bytes 75 14: jne 0x5349ad
        __asm _emit 0x75
        __asm _emit 0x14
        push 27fh
        push 636640h
        ; Exact mapped bytes E8 98 43 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5349ad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x534990
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 E1 FF FF: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 8C B4 68 00: call dword ptr [0x68b48c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb4
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
