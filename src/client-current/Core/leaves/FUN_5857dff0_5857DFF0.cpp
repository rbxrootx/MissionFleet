// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857DFF0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_5857dff0_5857DFF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        movzx eax, word ptr [ebp + 8]
        shl eax, 10h
        movzx ecx, word ptr [ebp + 0ch]
        or eax, ecx
        mov dword ptr [ebp - 4], eax
        push 0
        movzx edx, word ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 80013106h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 69 E9 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
