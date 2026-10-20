// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F6178 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_004f6178_004F6178() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 75 8C FF FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 56: jne 0x4f61e8
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes E8 69 F4 03 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 48: je 0x4f61e8
        __asm _emit 0x74
        __asm _emit 0x48
        push 10h
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 7C 39: jl 0x4f61e8
        __asm _emit 0x7c
        __asm _emit 0x39
        push 11h
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 7C 2A: jl 0x4f61e8
        __asm _emit 0x7c
        __asm _emit 0x2a
        push 12h
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 7C 1B: jl 0x4f61e8
        __asm _emit 0x7c
        __asm _emit 0x1b
        push 0
        push 0e146h
        push 111h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 59 04 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 08: jmp 0x4f61f0
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 82 B6 FF FF: call 0x4f1872
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
