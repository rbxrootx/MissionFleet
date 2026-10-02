// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 45 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902732 .. +0x2D bytes.
extern "C" __declspec(naked) void Catch_All_58902732_segment_00() {
    __asm {
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 8D 04 CD 00 00 00 00: lea eax, [ecx*8]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 4D A0: mov ecx, dword ptr [ebp - 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa0
        ; Exact mapped bytes 8B 51 10: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0A FB FF FF: call 0x58902260
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 19 A5 07 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa5
        __asm _emit 0x07
        __asm _emit 0x00
    }
}
