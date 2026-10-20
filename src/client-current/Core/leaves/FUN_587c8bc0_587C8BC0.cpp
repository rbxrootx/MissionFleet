// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C8BC0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_587c8bc0_587C8BC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F AE FF FF: call 0x587c3a50
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be654h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
