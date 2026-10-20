// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533D0D .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_00533d0d_00533D0D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 70h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC 9B FB FF: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        or edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
