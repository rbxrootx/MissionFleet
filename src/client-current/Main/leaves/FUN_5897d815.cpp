// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897D815 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5897d815() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push 5897cbdah
        push 589cfbd4h
        ; Exact mapped bytes E8 73 02 00 00: call 0x5897daa8
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        pop ebp
        ret
    }
}
