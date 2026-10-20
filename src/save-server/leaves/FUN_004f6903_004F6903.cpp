// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F6903 .. +0x1CA bytes.
extern "C" __declspec(naked) void FUN_004f6903_004F6903() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 128h
        mov dword ptr [ebp - 124h], ecx
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 61 FF FF FF: call 0x4f6880
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 110h]
        push eax
        push 0
        ; Exact mapped bytes E8 B7 02 00 00: call 0x4f6be4
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10ch], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 31: je 0x4f6971
        __asm _emit 0x74
        __asm _emit 0x31
        push 0
        push 0
        push 376h
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 120h], eax
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 0C: je 0x4f6971
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 10ch], edx
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 75 1A: jne 0x4f6994
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 11: je 0x4f6994
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 124h]
        add eax, 0a0h
        mov dword ptr [ebp - 10ch], eax
        mov dword ptr [ebp - 114h], 0
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 24: je 0x4f69cb
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 114h], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 10: je 0x4f69cb
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 10h]
        add eax, 30000h
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0f0h
        test edx, edx
        ; Exact mapped bytes 75 35: jne 0x4f6a0d
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0fh
        mov dword ptr [ebp - 128h], eax
        cmp dword ptr [ebp - 128h], 4
        ; Exact mapped bytes 77 20: ja 0x4f6a0d
        __asm _emit 0x77
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes FF 24 8D CD 6A 4F 00: jmp dword ptr [ecx*4 + 0x4f6acd]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xcd
        __asm _emit 0x6a
        __asm _emit 0x4f
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        or edx, 30h
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes EB 08: jmp 0x4f6a0d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        or al, 30h
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0f0h
        test ecx, ecx
        ; Exact mapped bytes 75 12: jne 0x4f6a2c
        __asm _emit 0x75
        __asm _emit 0x12
        push 6711fch
        push 67122ch
        ; Exact mapped bytes E8 EC 9B FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 11: je 0x4f6a46
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 20: jmp 0x4f6a66
        __asm _emit 0xeb
        __asm _emit 0x20
        lea ecx, [ebp - 108h]
        mov dword ptr [ebp - 118h], ecx
        push 104h
        lea edx, [ebp - 108h]
        push edx
        push 0
        ; Exact mapped bytes FF 15 F4 B7 68 00: call dword ptr [0x68b7f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 B4 BF 68 00: call dword ptr [0x68bfb4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 0E: je 0x4f6a9c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [ecx], edx
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 0F: je 0x4f6ab4
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 B8 BF 68 00: call dword ptr [0x68bfb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 BF FD FF FF: call 0x4f6880
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 11ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
