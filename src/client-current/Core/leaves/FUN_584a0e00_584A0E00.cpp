// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A0E00 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_584a0e00_584A0E00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A0 64 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x64
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
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 89 64 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
