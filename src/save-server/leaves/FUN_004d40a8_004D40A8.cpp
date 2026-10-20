// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D40A8 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_004d40a8_004D40A8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D5 21 00 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 56: jne 0x4d4118
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes E8 A9 DA 05 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 48: je 0x4d4118
        __asm _emit 0x74
        __asm _emit 0x48
        push 10h
        ; Exact mapped bytes FF 15 FC BE 68 00: call dword ptr [0x68befc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 7C 39: jl 0x4d4118
        __asm _emit 0x7c
        __asm _emit 0x39
        push 11h
        ; Exact mapped bytes FF 15 FC BE 68 00: call dword ptr [0x68befc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 7C 2A: jl 0x4d4118
        __asm _emit 0x7c
        __asm _emit 0x2a
        push 12h
        ; Exact mapped bytes FF 15 FC BE 68 00: call dword ptr [0x68befc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 7C 1B: jl 0x4d4118
        __asm _emit 0x7c
        __asm _emit 0x1b
        push 0
        push 0e146h
        push 111h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 75 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 08: jmp 0x4d4120
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 82 B6 FF FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
