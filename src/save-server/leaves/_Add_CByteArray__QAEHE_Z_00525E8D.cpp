// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525E8D .. +0x2B bytes.
extern "C" __declspec(naked) void _Add_CByteArray__QAEHE_Z_00525E8D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        mov dl, byte ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 03 66 F9 FF: call 0x4bc4b2
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x66
        __asm _emit 0xf9
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
