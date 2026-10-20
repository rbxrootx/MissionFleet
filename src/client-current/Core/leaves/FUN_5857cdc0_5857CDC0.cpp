// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857CDC0 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_5857cdc0_5857CDC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 3
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 80010f12h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 FB 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfb
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
