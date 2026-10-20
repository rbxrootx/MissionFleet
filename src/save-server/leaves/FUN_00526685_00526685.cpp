// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00526685 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00526685_00526685() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9B 97 F9 FF: call 0x4bfe42
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x97
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
