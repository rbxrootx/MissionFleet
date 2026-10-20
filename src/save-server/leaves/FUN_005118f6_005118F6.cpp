// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005118F6 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_005118f6_005118F6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 5F ED 02 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 1070h
        ; Exact mapped bytes E8 8F CF 02 00: call 0x53e8a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 CD E6 02 00: call 0x53fff0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
