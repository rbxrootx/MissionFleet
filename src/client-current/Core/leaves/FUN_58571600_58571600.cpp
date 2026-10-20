// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58571600 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_58571600_58571600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0E: jne 0x5857161d
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 31ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 0C: jmp 0x58571629
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3d0h]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
