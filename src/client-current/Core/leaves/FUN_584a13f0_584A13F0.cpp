// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A13F0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_584a13f0_584A13F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B0 5E FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 9A 5E FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
