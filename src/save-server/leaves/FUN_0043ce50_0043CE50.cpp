// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043CE50 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_0043ce50_0043CE50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 80h
        ; Exact mapped bytes 76 11: jbe 0x43ce6e
        __asm _emit 0x76
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FA F5 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0F: jmp 0x43ce7d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 69 66 00 00: call 0x4434e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
