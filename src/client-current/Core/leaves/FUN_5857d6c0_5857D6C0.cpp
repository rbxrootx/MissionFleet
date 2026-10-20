// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857D6C0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5857d6c0_5857D6C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 4
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 80013120h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC F2 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf2
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
