// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E8F80 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_586e8f80_586E8F80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 55 EE DB FF: call 0x584a7df0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xee
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
