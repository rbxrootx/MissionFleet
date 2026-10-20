// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055626D .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_0055626d_0055626D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 68h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 96 05 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 833h
        push 67c1e0h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 C6 3F F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 DC 00 00 00: call dword ptr [eax + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        neg eax
        sbb eax, eax
        and eax, 7fffbffeh
        add eax, 80004002h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
