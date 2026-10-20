// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054B7DA .. +0x6D bytes.
extern "C" __declspec(naked) void _UnregisterAll_COleObjectFactory__SGHXZ_0054B7DA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes E8 57 9C FF FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 0
        ; Exact mapped bytes E8 E4 C4 FF FF: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24h
        ; Exact mapped bytes E8 AF 01 00 00: call 0x54b9b0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 09: jmp 0x54b80f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 24: je 0x54b839
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x54b837
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 96 FE FF FF: call 0x54b6c2
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x54b837
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB CD: jmp 0x54b806
        __asm _emit 0xeb
        __asm _emit 0xcd
        push 0
        ; Exact mapped bytes E8 CC C5 FF FF: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
