// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F84D .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_0054f84d_0054F84D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 6fh
        push 67bf90h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 FC A9 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 71 75 FD FF: call 0x526de0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
