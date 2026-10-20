// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F6BE4 .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_004f6be4_004F6BE4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 2A: jne 0x4f6c20
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes E8 F4 00 00 00: call 0x4f6cef
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0D: je 0x4f6c11
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A0 49 03 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0F: jmp 0x4f6c20
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes E8 5A AF 03 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8F 49 03 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 24: je 0x4f6c4a
        __asm _emit 0x74
        __asm _emit 0x24
        push -10h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4f6c4a
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D6: jmp 0x4f6c20
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 02: jne 0x4f6c5e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 15: jmp 0x4f6c73
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB E3: jmp 0x4f6c56
        __asm _emit 0xeb
        __asm _emit 0xe3
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 13: jne 0x4f6c8c
        __asm _emit 0x75
        __asm _emit 0x13
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0D: je 0x4f6c8c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 A8 BF 68 00: call dword ptr [0x68bfa8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 3B: je 0x4f6ccd
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 2C: je 0x4f6cc4
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 AC BF 68 00: call dword ptr [0x68bfac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x4f6cc4
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 16: je 0x4f6cc4
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        push 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 B8 BF 68 00: call dword ptr [0x68bfb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x4f6ccd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
