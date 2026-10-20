// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A39FD .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_004a39fd_004A39FD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 90 23 0D 00: call 0x575da0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 04: jge 0x4a3a1d
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 09: jmp 0x4a3a26
        __asm _emit 0xeb
        __asm _emit 0x09
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 06 00 00 00: call 0x4a3a2c
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
