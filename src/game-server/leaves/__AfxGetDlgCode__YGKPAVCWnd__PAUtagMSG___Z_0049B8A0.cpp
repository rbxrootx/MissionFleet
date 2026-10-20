// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049B8A0 .. +0x4E bytes.
extern "C" __declspec(naked) void __AfxGetDlgCode__YGKPAVCWnd__PAUtagMSG___Z_0049B8A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x49b8b0
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 38: jmp 0x49b8e8
        __asm _emit 0xeb
        __asm _emit 0x38
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x49b8bf
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x49b8c8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 87h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
