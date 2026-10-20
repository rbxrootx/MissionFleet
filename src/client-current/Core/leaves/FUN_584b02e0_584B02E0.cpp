// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B02E0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_584b02e0_584B02E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 16ah]
        cmp ecx, 8
        ; Exact mapped bytes 74 0F: je 0x584b0305
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 16ah]
        cmp eax, 9
        ; Exact mapped bytes 75 04: jne 0x584b0309
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x584b030b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov esp, ebp
        pop ebp
        ret
    }
}
