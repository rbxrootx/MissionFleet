// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505A60 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_58505a60_58505A60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 45 08: movsd xmm0, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 7A 58 00 00: call 0x5850b2f0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 7F 09: jg 0x58505a86
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x58505a8d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
