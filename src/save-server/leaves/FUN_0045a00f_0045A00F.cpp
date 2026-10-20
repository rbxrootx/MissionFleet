// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045A00F .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_0045a00f_0045A00F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3A BD 0C 00: call 0x525d5a
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xbd
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 C2 F2 FF FF: call 0x4592f2
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F BE 0C 00: call 0x525e6b
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 DB F3 FF FF: call 0x459424
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
