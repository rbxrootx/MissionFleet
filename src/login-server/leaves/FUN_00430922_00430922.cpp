// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430922 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_00430922_00430922() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 3D 20 C4 43 00: mov edi, dword ptr [0x43c420]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 61: je 0x430999
        __asm _emit 0x74
        __asm _emit 0x61
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 1E: je 0x43095c
        __asm _emit 0x74
        __asm _emit 0x1e
        push esi
        ; Exact mapped bytes E8 BB E9 FF FF: call 0x42f2ff
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x43096c
        __asm _emit 0x74
        __asm _emit 0x24
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [eax + 1ch]
        push eax
        ; Exact mapped bytes E8 BD E7 FF FF: call 0x42f117
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x43096c
        __asm _emit 0xeb
        __asm _emit 0x10
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 1C: je 0x43098e
        __asm _emit 0x74
        __asm _emit 0x1c
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x43098e
        __asm _emit 0x74
        __asm _emit 0x15
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 94 FF FF FF: call 0x430922
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        push esi
        ; Exact mapped bytes FF 15 78 C4 43 00: call dword ptr [0x43c478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 99: jmp 0x430932
        __asm _emit 0xeb
        __asm _emit 0x99
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
