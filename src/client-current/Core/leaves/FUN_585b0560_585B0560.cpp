// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B0560 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_585b0560_585B0560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes E8 E9 43 ED FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x585b0587
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x585b058e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
