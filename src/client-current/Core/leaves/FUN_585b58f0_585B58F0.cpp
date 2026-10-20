// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B58F0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_585b58f0_585B58F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 8], ecx
        push 5
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 31 9F EE FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9f
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
