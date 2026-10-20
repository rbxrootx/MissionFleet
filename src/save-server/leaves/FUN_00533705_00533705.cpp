// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533705 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_00533705_00533705() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x53372e
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c4h
        push 636640h
        ; Exact mapped bytes E8 17 56 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53372e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x533711
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 4]
        push edx
        push 2
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 8C B6 68 00: call dword ptr [0x68b68c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
