// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E56D0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_585e56d0_585E56D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 284h]
        mov dword ptr [ebp - 8], ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EE 07 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x07
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 22 00 00: call 0x585e7920
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
