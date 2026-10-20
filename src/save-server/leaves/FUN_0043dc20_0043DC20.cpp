// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043DC20 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_0043dc20_0043DC20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sar edx, 2
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 72 0D: jb 0x43dc47
        __asm _emit 0x72
        __asm _emit 0x0d
        push 6711c4h
        ; Exact mapped bytes E8 5C 81 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
