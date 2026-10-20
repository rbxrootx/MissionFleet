// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857CCF0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5857ccf0_5857CCF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        push 0
        push 80010f04h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 FC 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0x2a
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
