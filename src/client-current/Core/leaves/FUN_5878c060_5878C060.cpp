// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878C060 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_5878c060_5878C060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5B 00 00 00: call 0x5878c0d0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 1
        div ecx
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 4
        mov edx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [eax + edx*4]
        push ecx
        ; Exact mapped bytes E8 11 B2 CF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
