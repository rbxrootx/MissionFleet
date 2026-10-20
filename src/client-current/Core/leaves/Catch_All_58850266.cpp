// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850266 .. +0x14 bytes.
extern "C" __declspec(naked) void Catch_All_58850266() {
    __asm {
        ; Exact mapped bytes E8 BB F3 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 89 48 1C: mov dword ptr [eax + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1c
        ; Exact mapped bytes E8 6B D1 FF FF: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
