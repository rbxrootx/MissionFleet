// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E5640 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_585e5640_585E5640() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 18h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c0h
        push ecx
        ; Exact mapped bytes E8 24 EB 1C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xeb
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
