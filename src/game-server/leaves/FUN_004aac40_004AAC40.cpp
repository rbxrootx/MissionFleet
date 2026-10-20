// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AAC40 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_004aac40_004AAC40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 9
        ; Exact mapped bytes E8 A5 A5 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 0
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 97 FA FF FF: call 0x4aa700
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov dword ptr [ebp - 4], eax
        push 9
        ; Exact mapped bytes E8 1A A6 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
