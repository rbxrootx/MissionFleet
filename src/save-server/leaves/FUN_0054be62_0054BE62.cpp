// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054BE62 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_0054be62_0054BE62() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 11 FF FF FF: call 0x54bd80
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1D: je 0x54be95
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        push 67ac94h
        push 68716ch
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 5A: jmp 0x54beef
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 26 FF FF FF: call 0x54bdc4
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1D: je 0x54bec4
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        push 67aca0h
        push 68716ch
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 2B: jmp 0x54beef
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 60 FF FF FF: call 0x54be31
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 3F FF FF FF: call 0x54be1a
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 67acb4h
        push 68716ch
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 14h
        mov eax, 68716ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
