// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534248 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_00534248_00534248() {
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
        ; Exact mapped bytes 75 14: jne 0x53426f
        __asm _emit 0x75
        __asm _emit 0x14
        push 23bh
        push 636640h
        ; Exact mapped bytes E8 D6 4A FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53426f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x534252
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 50 B4 68 00: call dword ptr [0x68b450]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xb4
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
