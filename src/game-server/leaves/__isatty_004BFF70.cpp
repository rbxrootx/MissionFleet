// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BFF70 .. +0x32 bytes.
extern "C" __declspec(naked) void __isatty_004BFF70() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 20 F2 5D 00: cmp eax, dword ptr [0x5df220]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 72 04: jb 0x4bff82
        __asm _emit 0x72
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1E: jmp 0x4bffa0
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        ; Exact mapped bytes 0F BE 44 10 04: movsx eax, byte ptr [eax + edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x04
        and eax, 40h
        pop ebp
        ret
    }
}
