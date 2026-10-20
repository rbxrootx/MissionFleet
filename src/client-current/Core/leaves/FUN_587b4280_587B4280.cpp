// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4280 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_587b4280_587B4280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        movzx eax, word ptr [ebp + 8]
        cmp eax, 100h
        ; Exact mapped bytes 73 18: jae 0x587b42ac
        __asm _emit 0x73
        __asm _emit 0x18
        movzx ecx, word ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + ecx]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587b42ac
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x587b42b3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
