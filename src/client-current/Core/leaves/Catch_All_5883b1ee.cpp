// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B1EE .. +0x15 bytes.
extern "C" __declspec(naked) void Catch_All_5883b1ee() {
    __asm {
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 93 01 00 00: call 0x5883b38d
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 E2 21 01 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
