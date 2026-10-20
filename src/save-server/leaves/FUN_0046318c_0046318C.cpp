// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046318C .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_0046318c_0046318C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x4631b3
        __asm _emit 0x75
        __asm _emit 0x14
        push 366h
        push 67ca48h
        ; Exact mapped bytes E8 92 5B 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x5b
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4631b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x463196
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D AA 0D 00: call 0x53dbde
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xaa
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
