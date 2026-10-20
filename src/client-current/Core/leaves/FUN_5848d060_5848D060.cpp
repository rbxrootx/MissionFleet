// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848D060 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5848d060_5848D060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 30h], 0
        ; Exact mapped bytes 74 12: je 0x5848d088
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 30h]
        movzx edx, byte ptr [ecx]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 07: jmp 0x5848d08f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        movzx eax, word ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
