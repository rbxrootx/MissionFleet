// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052F82A .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_0052f82a_0052F82A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C3 F5 FB FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x52f89c
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0fff0h
        cmp ecx, 0f060h
        ; Exact mapped bytes 75 2B: jne 0x52f886
        __asm _emit 0x75
        __asm _emit 0x2b
        push 73h
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
        ; Exact mapped bytes 7D 32: jge 0x52f89c
        __asm _emit 0x7d
        __asm _emit 0x32
        push 12h
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
        ; Exact mapped bytes 7D 23: jge 0x52f89c
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        and ecx, 100h
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x52f89c
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 15 60 FC FF: call 0x4f58ab
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x52f89c
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 10: jmp 0x52f8ac
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 81 C4 FF FF: call 0x52bd2d
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
