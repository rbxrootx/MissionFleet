// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D21F0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_004d21f0_004D21F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 4d2240h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3B 69 07 00: call 0x548b44
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d2226
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ceh
        push 5c5af0h
        ; Exact mapped bytes E8 DF 27 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x27
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d2226
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d220c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
