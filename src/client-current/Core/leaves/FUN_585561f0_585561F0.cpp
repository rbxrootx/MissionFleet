// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585561F0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_585561f0_585561F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 13ch], 40000000h
        ; Exact mapped bytes 75 09: jne 0x58556211
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x58556218
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
