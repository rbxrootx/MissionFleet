// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052A1D7 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_0052a1d7_0052A1D7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 5E B2 01 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 1070h
        ; Exact mapped bytes E8 7E 95 01 00: call 0x543770
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 EC D2 01 00: call 0x5474f0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
