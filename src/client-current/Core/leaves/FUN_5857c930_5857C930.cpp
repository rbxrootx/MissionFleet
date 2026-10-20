// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857C930 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5857c930_5857C930() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        push 0
        push 4
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 80015000h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 34 00 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x2b
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
