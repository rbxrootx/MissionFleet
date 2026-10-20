// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585858C0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_585858c0_585858C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        movzx edx, byte ptr [ebp - 1]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 10 BA F1 FF: call 0x584a12f0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xba
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C3 FB FF FF: call 0x585854b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
