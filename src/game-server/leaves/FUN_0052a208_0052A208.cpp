// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052A208 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_0052a208_0052A208() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 2D B2 01 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 1070h
        ; Exact mapped bytes E8 4D 95 01 00: call 0x543770
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 DB D2 01 00: call 0x547510
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
