// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054BE31 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_0054be31_0054BE31() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        sar eax, 10h
        and eax, 1fffh
        cmp eax, 9
        ; Exact mapped bytes 72 07: jb 0x54be4b
        __asm _emit 0x72
        __asm _emit 0x07
        mov eax, 67ac80h
        ; Exact mapped bytes EB 13: jmp 0x54be5e
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 10h
        and ecx, 1fffh
        mov eax, dword ptr [ecx*4 + 67abc0h]
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
