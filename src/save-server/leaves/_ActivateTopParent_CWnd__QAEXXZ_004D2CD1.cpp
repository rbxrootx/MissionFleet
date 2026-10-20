// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2CD1 .. +0x54 bytes.
extern "C" __declspec(naked) void _ActivateTopParent_CWnd__QAEXXZ_004D2CD1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5C FE FF FF: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 F7 A1 05 00: call 0x52cee1
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa1
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 26: je 0x4d2d19
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 1ch]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 74 20: je 0x4d2d21
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 D4 BE 68 00: call dword ptr [0x68bed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x4d2d21
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 77 A1 05 00: call 0x52ce98
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xa1
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
