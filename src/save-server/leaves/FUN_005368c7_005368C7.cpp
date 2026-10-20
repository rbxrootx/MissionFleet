// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005368C7 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_005368c7_005368C7() {
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
        ; Exact mapped bytes 75 14: jne 0x5368ee
        __asm _emit 0x75
        __asm _emit 0x14
        push 392h
        push 636640h
        ; Exact mapped bytes E8 57 24 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5368ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5368d1
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 38 B5 68 00: call dword ptr [0x68b538]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
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
