// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C1150 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_004c1150_004C1150() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 0ch
        ; Exact mapped bytes E8 95 40 FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 19 00 00 00: call 0x4c1180
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        push 0ch
        ; Exact mapped bytes E8 1C 41 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
