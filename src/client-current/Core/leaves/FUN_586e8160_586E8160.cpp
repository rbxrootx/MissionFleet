// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E8160 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_586e8160_586E8160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0ch
        ; Exact mapped bytes E8 0F F8 D9 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 30 F1 D9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf1
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1E 0E 00 00: call 0x586e8fb0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
