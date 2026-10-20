// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CE0E .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_0042ce0e_0042CE0E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 24h]
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 28h]
        push eax
        push 0
        push 1006h
        push dword ptr [ecx + 1ch]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
