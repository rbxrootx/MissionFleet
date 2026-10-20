// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892490 .. +0xF bytes.
extern "C" __declspec(naked) void Unwind_58892490() {
    __asm {
        ; Exact mapped bytes 6A 6C: push 0x6c
        __asm _emit 0x6a
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 99 EB F9 FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xeb
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
