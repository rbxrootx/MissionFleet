// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858604 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58858604_58858604() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        xor eax, eax
        push eax
        push eax
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push -1
        push dword ptr [ebp + 0ch]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 75 01 00: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 20h
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
