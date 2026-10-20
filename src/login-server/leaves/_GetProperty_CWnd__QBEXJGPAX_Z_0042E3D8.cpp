// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E3D8 .. +0x22 bytes.
extern "C" __declspec(naked) void _GetProperty_CWnd__QBEXJGPAX_Z_0042E3D8() {
    __asm {
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 74 19: je 0x42e3f7
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push dword ptr [esp + 10h]
        push dword ptr [esp + 10h]
        push 2
        push dword ptr [esp + 14h]
        push ecx
        ; Exact mapped bytes E8 BD FF FF FF: call 0x42e3b1
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
