// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D5D0C .. +0x47 bytes.
extern "C" __declspec(naked) void _OnDestroy_CTabCtrl__IAEXXZ_004D5D0C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0
        push 0
        push 1302h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B3 5E 06 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x5e
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 41 05 00 00: call 0x4d6273
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4d5d47
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 0
        push 1303h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 92 5E 06 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x5e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BF CA 01 00: call 0x4f280e
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
