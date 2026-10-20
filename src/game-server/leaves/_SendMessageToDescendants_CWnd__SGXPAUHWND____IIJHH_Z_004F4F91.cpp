// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F4F91 .. +0xB8 bytes.
extern "C" __declspec(naked) void _SendMessageToDescendants_CWnd__SGXPAUHWND____IIJHH_Z_004F4F91() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E0 26 5E 00: call dword ptr [0x5e26e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 11: jmp 0x4f4fb7
        __asm _emit 0xeb
        __asm _emit 0x11
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 0F 82 F9 FF: call 0x48d1c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x4f5043
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 30: je 0x4f4ff7
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 34 CA FF FF: call 0x4f1a04
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1C: je 0x4f4ff5
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 87 C6 FF FF: call 0x4f167c
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 16: jmp 0x4f500d
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 2B: je 0x4f503e
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 E0 26 5E 00: call dword ptr [0x5e26e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4f503e
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 53 FF FF FF: call 0x4f4f91
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 63 FF FF FF: jmp 0x4f4fa6
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
