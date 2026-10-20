// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58797B50 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58797b50_58797B50() {
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
        ; Exact mapped bytes E8 B5 1E D1 FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x1e
        __asm _emit 0xd1
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
