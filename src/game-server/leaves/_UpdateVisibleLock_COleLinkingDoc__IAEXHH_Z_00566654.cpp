// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00566654 .. +0x5A bytes.
extern "C" __declspec(naked) void _UpdateVisibleLock_COleLinkingDoc__IAEXHH_Z_00566654() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0fdh
        push 5d0c78h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 F2 4A F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes 74 2C: je 0x5666a8
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 60 5E FE FF: call 0x54c4e4
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0a0h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 02 00 00: call 0x566982
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF 58 FE FF: call 0x54bf97
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
