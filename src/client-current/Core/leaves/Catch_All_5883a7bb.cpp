// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A7BB .. +0x18 bytes.
extern "C" __declspec(naked) void Catch_All_5883a7bb() {
    __asm {
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF 75 EC: push dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes E8 E5 FA FF FF: call 0x5883a2ac
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 12 2C 01 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
