// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58796CB0 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_58796cb0_58796CB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        movzx ecx, byte ptr [ebp - 2]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 94 FA FF FF: call 0x58796760
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], edx
        xor eax, eax
        mov byte ptr [ebp - 1], al
        lea ecx, [ebp - 1]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC 10 CF FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x10
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
