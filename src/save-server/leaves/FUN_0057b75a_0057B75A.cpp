// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057B75A .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0057b75a_0057B75A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 572h
        push 67d108h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 EA EA F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xea
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 3ch
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 98 00 00 00: call dword ptr [edx + 0x98]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
