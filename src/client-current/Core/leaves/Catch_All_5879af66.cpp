// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879AF66 .. +0x19 bytes.
extern "C" __declspec(naked) void Catch_All_5879af66() {
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
        ; Exact mapped bytes E8 B7 13 D7 FF: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x13
        __asm _emit 0xd7
        __asm _emit 0xff
        ; Exact mapped bytes B8 7F AF 79 58: mov eax, 0x5879af7f
        __asm _emit 0xb8
        __asm _emit 0x7f
        __asm _emit 0xaf
        __asm _emit 0x79
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
