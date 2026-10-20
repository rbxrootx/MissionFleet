// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B05C0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_585b05c0_585B05C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 89 43 ED FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x585b05e7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x585b05ee
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
