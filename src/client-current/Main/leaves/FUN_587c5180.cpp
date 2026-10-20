// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5180 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_587c5180() {
    __asm {
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE 4C 24 04: movsx ecx, byte ptr [esp + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 12 7E 1B 00: call 0x5897cfa2
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x7e
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F 95 C2: setne dl
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc2
        ; Exact mapped bytes 8A C2: mov al, dl
        __asm _emit 0x8a
        __asm _emit 0xc2
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
