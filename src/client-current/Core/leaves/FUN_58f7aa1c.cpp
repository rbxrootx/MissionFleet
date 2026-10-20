// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F7AA1C .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58f7aa1c() {
    __asm {
        ; Exact mapped bytes 0F 83 4F 96 D9 FF: jae 0x58d14071
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x4f
        __asm _emit 0x96
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 38 1C: mov ecx, dword ptr [eax + edi + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x38
        __asm _emit 0x1c
        ; Exact mapped bytes 81 C2 25 1F EE 4C: add edx, 0x4cee1f25
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x25
        __asm _emit 0x1f
        __asm _emit 0xee
        __asm _emit 0x4c
        ; Exact mapped bytes 8D 14 B1: lea edx, [ecx + esi*4]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xb1
        ; Exact mapped bytes FE CD: dec ch
        __asm _emit 0xfe
        __asm _emit 0xcd
        ; Exact mapped bytes 8B 0C 3A: mov ecx, dword ptr [edx + edi]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x3a
        ; Exact mapped bytes E9 B5 16 F5 FF: jmp 0x58ecc0ee
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x16
        __asm _emit 0xf5
        __asm _emit 0xff
    }
}
