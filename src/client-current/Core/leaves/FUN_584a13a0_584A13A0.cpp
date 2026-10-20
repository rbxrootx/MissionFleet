// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A13A0 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_584a13a0_584A13A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 00 5F FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 11 01: movsd qword ptr [ecx], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x01
        mov edx, dword ptr [ebp + 8]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 E6 5E FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 17 00 00 00: call 0x584a13f0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
