// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E2090 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_586e2090_586E2090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes A3 FC 04 96 58: mov dword ptr [0x589604fc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        xor eax, 55555555h
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 09 00 00: call 0x586e2a70
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x09
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
