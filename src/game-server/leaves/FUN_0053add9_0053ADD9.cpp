// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053ADD9 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0053add9_0053ADD9() {
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
        ; Exact mapped bytes 75 14: jne 0x53ae00
        __asm _emit 0x75
        __asm _emit 0x14
        push 3deh
        push 581fc0h
        ; Exact mapped bytes E8 05 9C FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53ae00
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53ade3
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 2C 20 5E 00: call dword ptr [0x5e202c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
