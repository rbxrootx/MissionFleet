// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004175EF .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_004175ef_004175EF() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x4175fc
        __asm _emit 0x74
        __asm _emit 0x03
        mov eax, dword ptr [eax + 4]
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push eax
        push dword ptr [ecx + 4]
        ; Exact mapped bytes FF 15 9C C3 43 00: call dword ptr [0x43c39c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
