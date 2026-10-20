// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436C3B .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_00436c3b_00436C3B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 1
        push 476h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0b0h
        ; Exact mapped bytes E8 B2 CC FC FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 78 1B 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1b
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
