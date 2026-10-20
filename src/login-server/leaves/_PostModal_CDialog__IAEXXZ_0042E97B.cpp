// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E97B .. +0x42 bytes.
extern "C" __declspec(naked) void _PostModal_CDialog__IAEXXZ_0042E97B() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 53 0E 00 00: call 0x42f7d6
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 CC 09 00 00: call 0x42f356
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 54h]
        ; Exact mapped bytes FF 15 A4 C4 43 00: call dword ptr [0x43c4a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x42e9a2
        __asm _emit 0x74
        __asm _emit 0x0b
        push 1
        push dword ptr [esi + 54h]
        ; Exact mapped bytes FF 15 48 C5 43 00: call dword ptr [0x43c548]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        and dword ptr [esi + 54h], 0
        ; Exact mapped bytes E8 08 73 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        pop esi
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x42e9bc
        __asm _emit 0x74
        __asm _emit 0x09
        push 1
        mov ecx, eax
        ; Exact mapped bytes E8 46 62 00 00: call 0x434c02
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
