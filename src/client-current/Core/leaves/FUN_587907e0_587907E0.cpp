// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587907E0 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_587907e0_587907E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 8], ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 51 ED D0 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xed
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0ch], ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CB 55 CF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x55
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 0a4h], cl
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
