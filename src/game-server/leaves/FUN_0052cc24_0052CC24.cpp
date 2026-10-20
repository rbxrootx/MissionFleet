// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052CC24 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_0052cc24_0052CC24() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0ffh
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BE 13 FC FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 100h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F1 DF FC FF: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x52cc72
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0ah
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 82 03 F6 FF: call 0x48cfe0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x52cc70
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 11: jmp 0x52cc83
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 5c916ch
        ; Exact mapped bytes E8 95 2F FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x2f
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A6 14 FC FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
