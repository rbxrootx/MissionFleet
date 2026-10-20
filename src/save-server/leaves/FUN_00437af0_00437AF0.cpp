// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437AF0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_00437af0_00437AF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov cl, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 8], cl
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5C 00 01 00: call 0x447b80
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
