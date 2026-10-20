// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421030 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_00421030_00421030() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B7 BB FF FF: call 0x41cc00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 8A 77 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x77
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
