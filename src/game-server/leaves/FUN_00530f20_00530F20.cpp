// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00530F20 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_00530f20_00530F20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C2 FF FF FF: call 0x530ef1
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C2 CB FB FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
