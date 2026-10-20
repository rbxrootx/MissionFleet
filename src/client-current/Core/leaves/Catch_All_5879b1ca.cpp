// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B1CA .. +0x19 bytes.
extern "C" __declspec(naked) void Catch_All_5879b1ca() {
    __asm {
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes E8 53 11 D7 FF: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x11
        __asm _emit 0xd7
        __asm _emit 0xff
        ; Exact mapped bytes B8 E3 B1 79 58: mov eax, 0x5879b1e3
        __asm _emit 0xb8
        __asm _emit 0xe3
        __asm _emit 0xb1
        __asm _emit 0x79
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
