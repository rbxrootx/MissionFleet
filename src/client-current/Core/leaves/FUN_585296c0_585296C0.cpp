// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585296C0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_585296c0_585296C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 32 E3 F5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
