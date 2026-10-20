// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AB6A2 .. +0x47 bytes.
extern "C" __declspec(naked) void _OnDestroy_CTabCtrl__IAEXXZ_004AB6A2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0
        push 0
        push 1302h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7D FF 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 41 05 00 00: call 0x4abc09
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4ab6dd
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 0
        push 1303h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5C FF 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 59 50 02 00: call 0x4d073e
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
