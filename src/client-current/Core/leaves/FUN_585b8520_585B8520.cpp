// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B8520 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_585b8520_585B8520() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 C2 EC F1 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 0
        push 0
        push 0
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 08 F2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x08
        __asm _emit 0xf2
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E5 8B FF FF: call 0x585b1130
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
