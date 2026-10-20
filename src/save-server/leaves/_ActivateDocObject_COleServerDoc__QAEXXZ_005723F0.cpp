// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005723F0 .. +0x25 bytes.
extern "C" __declspec(naked) void _ActivateDocObject_COleServerDoc__QAEXXZ_005723F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0d0h], 0
        ; Exact mapped bytes 74 0E: je 0x572411
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes E8 AD F5 EE FF: call 0x4619be
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf5
        __asm _emit 0xee
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
