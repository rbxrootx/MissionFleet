// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E55E0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_585e55e0_585E55E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10dach]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 5B 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x5b
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 10dc0h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 65 5B 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x5b
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
