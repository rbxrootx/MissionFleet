// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005066D3 .. +0x58 bytes.
extern "C" __declspec(naked) void _CancelLoop_CDockContext__QAEXXZ_005066D3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 45 00 00 00: call 0x50672b
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 60 BC 68 00: call dword ptr [0x68bc60]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 B3 5E 02 00: call 0x52c5a4
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E 5C 02 00: call 0x52c33a
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 1F: je 0x506727
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 84h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0B 57 02 00: call 0x52be25
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 84h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
