// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C9DE0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_584c9de0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 54h], 0
        ; Exact mapped bytes 74 13: je 0x584c9e05
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 C3 FF FF FF: call 0x584c9dc0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, ax
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 07: jmp 0x584c9e0c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
