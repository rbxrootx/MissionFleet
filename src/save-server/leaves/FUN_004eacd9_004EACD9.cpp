// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EACD9 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_004eacd9_004EACD9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F5 AD 03 00: call 0x525ae3
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        cmp ecx, 0ffffh
        ; Exact mapped bytes 74 0A: je 0x4ead09
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        ; Exact mapped bytes EB 0F: jmp 0x4ead18
        __asm _emit 0xeb
        __asm _emit 0x0f
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 29 AE 03 00: call 0x525b3e
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
