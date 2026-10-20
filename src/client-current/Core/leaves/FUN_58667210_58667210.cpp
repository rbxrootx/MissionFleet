// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58667210 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_58667210_58667210() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 4E E2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4e
        __asm _emit 0xe2
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 E3 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe3
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C 4E E2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x4e
        __asm _emit 0xe2
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF FB E4 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfb
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b0h], 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
