// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588924DF .. +0xF bytes.
extern "C" __declspec(naked) void Unwind_588924df() {
    __asm {
        ; Exact mapped bytes 6A 24: push 0x24
        __asm _emit 0x6a
        __asm _emit 0x24
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 4A EB F9 FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x4a
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
