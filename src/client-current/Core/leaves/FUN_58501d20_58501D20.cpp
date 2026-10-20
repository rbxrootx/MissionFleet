// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501D20 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_58501d20_58501D20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 94 F0 F9 FF: call 0x584a0dd0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FB 0B 00 00: call 0x58502940
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
