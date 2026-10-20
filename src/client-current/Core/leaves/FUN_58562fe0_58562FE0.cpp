// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58562FE0 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_58562fe0_58562FE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 168h], 0
        ; Exact mapped bytes 74 19: je 0x5856300e
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 73 9A FB FF: call 0x5851ca80
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
