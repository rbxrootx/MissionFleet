// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056084C .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_0056084c_0056084C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 FE F3 FF: call 0x4a0721
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        or ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
