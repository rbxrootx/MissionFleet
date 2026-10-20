// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A8420 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_584a8420_584A8420() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 10h]
        sub eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        imul edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        imul eax, dword ptr [ebp - 8]
        add edx, eax
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 C7 8B 3A 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x8b
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
