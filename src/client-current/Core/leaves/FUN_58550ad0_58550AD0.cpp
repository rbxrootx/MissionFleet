// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58550AD0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_58550ad0_58550AD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 8], 0
        ; Exact mapped bytes 74 1A: je 0x58550b00
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E1 24 01 00: call 0x58562fe0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
