// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044616D .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_0044616d_0044616D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 03 0B 00: call 0x4f64eb
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 424h
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 DD 9A FF FF: call 0x43fc76
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 3D 26 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
