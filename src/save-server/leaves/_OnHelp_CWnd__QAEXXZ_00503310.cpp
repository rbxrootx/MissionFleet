// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503310 .. +0xDA bytes.
extern "C" __declspec(naked) void _OnHelp_CWnd__QAEXXZ_00503310() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes FF 15 DC BE 68 00: call dword ptr [0x68bedc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2A: je 0x503352
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        push 0
        push 365h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x503344
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x5033e6
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 8C F7 FC FF: call 0x4d2ad9
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB D0: jmp 0x503322
        __asm _emit 0xeb
        __asm _emit 0xd0
        ; Exact mapped bytes FF 15 90 BE 68 00: call dword ptr [0x68be90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 27: je 0x503388
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        push 0
        push 365h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x50337a
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 6C: jmp 0x5033e6
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 56 F7 FC FF: call 0x4d2ad9
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB D3: jmp 0x50335b
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AE F7 FC FF: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 82 02 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 A8 BF 68 00: call dword ptr [0x68bfa8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 27: je 0x5033d2
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        push 0
        push 365h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x5033c4
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 22: jmp 0x5033e6
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 0C F7 FC FF: call 0x4d2ad9
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB D3: jmp 0x5033a5
        __asm _emit 0xeb
        __asm _emit 0xd3
        push 0
        push 0e147h
        push 111h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 53 82 02 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
