// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585461B0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_585461b0_585461B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d84h]
        ; Exact mapped bytes E8 99 30 F7 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 75 09: jne 0x585461d8
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x585461df
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
