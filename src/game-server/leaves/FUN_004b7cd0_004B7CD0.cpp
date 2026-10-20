// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B7CD0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_004b7cd0_004B7CD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 0bh
        ; Exact mapped bytes E8 15 D5 FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 19 00 00 00: call 0x4b7d00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        push 0bh
        ; Exact mapped bytes E8 9C D5 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
