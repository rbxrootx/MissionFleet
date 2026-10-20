// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857CFA0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_5857cfa0_5857CFA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        ; Exact mapped bytes 8B 15 30 05 96 58: mov edx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 80010fa1h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 F9 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf9
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
