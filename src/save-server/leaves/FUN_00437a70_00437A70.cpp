// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437A70 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_00437a70_00437A70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 72 0D: jb 0x437a94
        __asm _emit 0x72
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 0F E3 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        add eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
