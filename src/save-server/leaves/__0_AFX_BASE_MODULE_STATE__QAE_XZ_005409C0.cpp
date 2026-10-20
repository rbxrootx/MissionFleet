// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005409C0 .. +0x21 bytes.
extern "C" __declspec(naked) void __0_AFX_BASE_MODULE_STATE__QAE_XZ_005409C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 F7 FF FF: call 0x5401b9
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 6374dch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
