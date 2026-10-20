// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588929C6 .. +0x19 bytes.
extern "C" __declspec(naked) void Unwind_588929c6() {
    __asm {
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 83 E0 01: and eax, 1
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 0C 00 00 00: je 0x588929de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 65 E0 FE: and dword ptr [ebp - 0x20], 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xe0
        __asm _emit 0xfe
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E9 52 73 C1 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x73
        __asm _emit 0xc1
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
