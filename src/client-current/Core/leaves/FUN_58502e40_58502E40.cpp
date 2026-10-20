// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502E40 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58502e40_58502E40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 09: jne 0x58502e5b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x58502e62
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
