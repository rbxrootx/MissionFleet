// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FF740 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_584ff740_584FF740() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 15: je 0x584ff765
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 58h]
        ; Exact mapped bytes E8 65 CD FF FF: call 0x584fc4c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 72 F8 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
