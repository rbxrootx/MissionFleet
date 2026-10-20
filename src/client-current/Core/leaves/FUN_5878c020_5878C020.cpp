// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878C020 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_5878c020_5878C020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D9 08 00 00: call 0x5878c930
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x08
        __asm _emit 0x00
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
