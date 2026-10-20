// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851EDA0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5851eda0_5851EDA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 2F E2 FF FF: call 0x5851cfe0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x5851edc4
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5851edcb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
