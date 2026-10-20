// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533D55 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_00533d55_00533D55() {
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
        ; Exact mapped bytes 75 14: jne 0x533d7c
        __asm _emit 0x75
        __asm _emit 0x14
        push 203h
        push 636640h
        ; Exact mapped bytes E8 C9 4F FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x533d7c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x533d5f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 00 BD 68 00: call dword ptr [0x68bd00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 1A BB F9 FF: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xbb
        __asm _emit 0xf9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
