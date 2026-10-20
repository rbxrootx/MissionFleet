// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513E4D .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_00513e4d_00513E4D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 18: je 0x513e75
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 80 00 00 00: call dword ptr [eax + 0x80]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 B9 FB FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
