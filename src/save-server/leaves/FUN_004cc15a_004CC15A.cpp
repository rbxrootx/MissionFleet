// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC15A .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_004cc15a_004CC15A() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        neg eax
        sbb eax, eax
        and eax, 3
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 EC B1 F9 FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb1
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
