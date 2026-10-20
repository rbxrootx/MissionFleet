// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418086 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_00418086_00418086() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        lea eax, [ebp - 20h]
        push dword ptr [ebp + 18h]
        mov esi, ecx
        push eax
        ; Exact mapped bytes FF 15 18 C4 43 00: call dword ptr [0x43c418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp + 2ch]
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 1ch]
        push dword ptr [ebp + 28h]
        sub eax, ecx
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push dword ptr [ebp + 24h]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], edx
        push dword ptr [ebp + 20h]
        sub ecx, edx
        mov dword ptr [ebp - 4], ecx
        mov ecx, esi
        push dword ptr [ebp + 1ch]
        push eax
        lea eax, [ebp - 10h]
        push eax
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 05 00 00 00: call 0x4180e7
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        leave
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
