// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D8859 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_004d8859_004D8859() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes E8 60 7E 06 00: call 0x5406c4
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 08: jne 0x4d887e
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 F5 91 05 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x91
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
