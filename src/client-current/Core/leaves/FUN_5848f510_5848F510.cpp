// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848F510 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_5848f510_5848F510() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 4]
        and eax, 0fffffffch
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 7fffh
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        and edx, 0fffe0003h
        or edx, ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 7fffh
        shl eax, 11h
        mov ecx, dword ptr [ebp - 4]
        and ecx, 1ffffh
        or ecx, eax
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C6 A6 2D 00: call 0x58769c30
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa6
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
