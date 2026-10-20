// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888CDD3 .. +0xF bytes.
extern "C" __declspec(naked) void Unwind_5888cdd3() {
    __asm {
        ; Exact mapped bytes 6A 5C: push 0x5c
        __asm _emit 0x6a
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 45 94: mov eax, dword ptr [ebp - 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x94
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 56 42 FA FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x42
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
