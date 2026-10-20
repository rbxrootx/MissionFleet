// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502090 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58502090_58502090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 77 06 FA FF: call 0x584a2720
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x06
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
