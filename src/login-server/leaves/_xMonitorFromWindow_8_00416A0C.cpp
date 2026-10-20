// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416A0C .. +0x6B bytes.
extern "C" __declspec(naked) void _xMonitorFromWindow_8_00416A0C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        ; Exact mapped bytes E8 C7 FE FF FF: call 0x4168de
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x416a29
        __asm _emit 0x74
        __asm _emit 0x0e
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 FC F5 44 00: call dword ptr [0x44f5fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xf5
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes EB 4A: jmp 0x416a73
        __asm _emit 0xeb
        __asm _emit 0x4a
        test byte ptr [ebp + 0ch], 3
        ; Exact mapped bytes 74 07: je 0x416a36
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 12340042h
        ; Exact mapped bytes EB 3D: jmp 0x416a73
        __asm _emit 0xeb
        __asm _emit 0x3d
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 30 C5 43 00: call dword ptr [0x43c530]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x416a52
        __asm _emit 0x74
        __asm _emit 0x0f
        lea eax, [ebp - 2ch]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 8C C4 43 00: call dword ptr [0x43c48c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x416a5f
        __asm _emit 0xeb
        __asm _emit 0x0d
        lea eax, [ebp - 10h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 90 C4 43 00: call dword ptr [0x43c490]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x416a71
        __asm _emit 0x74
        __asm _emit 0x0e
        push dword ptr [ebp + 0ch]
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 47 FF FF FF: call 0x4169b6
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x416a73
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
