// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CDBB .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_0042cdbb_0042CDBB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], 5
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp + 14h]
        cmp eax, -1
        ; Exact mapped bytes 74 0A: je 0x42cde6
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [ebp - 20h], 7
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 18h]
        cmp eax, -1
        ; Exact mapped bytes 74 07: je 0x42cdf5
        __asm _emit 0x74
        __asm _emit 0x07
        or dword ptr [ebp - 20h], 8
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 20h]
        push eax
        push dword ptr [ebp + 8]
        push 101bh
        push dword ptr [ecx + 1ch]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
