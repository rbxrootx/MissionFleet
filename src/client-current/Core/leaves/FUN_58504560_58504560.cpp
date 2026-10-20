// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58504560 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58504560_58504560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp + 8]
        push ecx
        movzx edx, byte ptr [ebp - 1]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B0 FF FF FF: call 0x58504530
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
