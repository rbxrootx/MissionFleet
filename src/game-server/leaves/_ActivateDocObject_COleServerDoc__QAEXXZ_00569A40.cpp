// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00569A40 .. +0x25 bytes.
extern "C" __declspec(naked) void _ActivateDocObject_COleServerDoc__QAEXXZ_00569A40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0d0h], 0
        ; Exact mapped bytes 74 0E: je 0x569a61
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes E8 4D B9 F3 FF: call 0x4a53ae
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
