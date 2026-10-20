// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850DF30 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_5850df30_5850DF30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 1C: je 0x5850df5c
        __asm _emit 0x74
        __asm _emit 0x1c
        push 4
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx*4 + 60h]
        push edx
        ; Exact mapped bytes E8 37 E9 33 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
