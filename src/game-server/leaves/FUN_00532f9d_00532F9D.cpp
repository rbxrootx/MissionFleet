// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00532F9D .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_00532f9d_00532F9D() {
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
        ; Exact mapped bytes 75 14: jne 0x532fc4
        __asm _emit 0x75
        __asm _emit 0x14
        push 145h
        push 5820dch
        ; Exact mapped bytes E8 41 1A 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x532fc4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x532fa7
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
