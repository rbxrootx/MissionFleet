// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00441D27 .. +0x32 bytes.
extern "C" __declspec(naked) void __0CWnd__QAE_XZ_00441D27() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C0 0D 10 00: call 0x542aff
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 581420h
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 8B 6A 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6a
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
