// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CB3E .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0042cb3e_0042CB3E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov eax, dword ptr [ebp + 1ch]
        push esi
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 0ch]
        dec eax
        mov esi, ecx
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 0fffff894h
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 2B 33 FF FF: call 0x41feab
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi], eax
        pop ecx
        mov eax, esi
        pop esi
        leave
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
