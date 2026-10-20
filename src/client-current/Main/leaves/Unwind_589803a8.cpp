// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589803A8 .. +0x11 bytes.
extern "C" __declspec(naked) void Unwind_589803a8() {
    __asm {
        ; Exact mapped bytes 8B 45 C4: mov eax, dword ptr [ebp - 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D C0: mov ecx, dword ptr [ebp - 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 1B DA DC FF: call 0x5874ddd0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xda
        __asm _emit 0xdc
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
