// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00524997 .. +0x6F bytes.
extern "C" __declspec(naked) void _GetActivePage_CPropertySheet__QBEPAVCPropertyPage__XZ_00524997() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 2e7h
        push 5c8174h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 AD 67 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x67
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 2F: je 0x5249eb
        __asm _emit 0x74
        __asm _emit 0x2f
        push 0
        push 0
        push 476h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A7 CF FC FF: call 0x4f197f
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 584d10h
        ; Exact mapped bytes E8 42 67 FD FF: call 0x4fb125
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x67
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 14: jmp 0x5249ff
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5A 06 00 00: call 0x52504d
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0F F4 00 00: call 0x533e0b
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
