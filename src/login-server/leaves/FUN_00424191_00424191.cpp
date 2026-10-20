// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00424191 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_00424191_00424191() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 8]
        sub ecx, dword ptr [eax + 10h]
        sar ecx, 0ch
        lea eax, [eax + ecx*8 + 18h]
        mov ecx, dword ptr [esp + 0ch]
        movzx edx, byte ptr [ecx]
        add dword ptr [eax], edx
        and byte ptr [ecx], 0
        cmp dword ptr [eax], 0f0h
        mov dword ptr [eax + 4], 0f1h
        ; Exact mapped bytes 75 17: jne 0x4241d5
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes FF 05 74 FE 44 00: inc dword ptr [0x44fe74]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 74 FE 44 00 20: cmp dword ptr [0x44fe74], 0x20
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 75 08: jne 0x4241d5
        __asm _emit 0x75
        __asm _emit 0x08
        push 10h
        ; Exact mapped bytes E8 A4 FE FF FF: call 0x424078
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ret
    }
}
