// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431B95 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_00431b95_00431B95() {
    __asm {
        ; Exact mapped bytes E8 19 41 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes FF 92 90 00 00 00: call dword ptr [edx + 0x90]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
