// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780260 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_58780260_58780260() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [eax + 58947974h]
        and ecx, 10000h
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x58780380
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x58780380
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x587802ba
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587802ba
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4ch], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 51: je 0x5878031a
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x587802dd
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E6: jmp 0x587802c3
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 54 D1 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x54
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 02: jl 0x587802ee
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x5878031a
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D 55 D1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x55
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB A9: jmp 0x587802c3
        __asm _emit 0xeb
        __asm _emit 0xa9
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x58780332
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 07: ja 0x58780332
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 48: je 0x58780380
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 40: je 0x5878037e
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x58780352
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E6: jmp 0x58780338
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 54 D1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x54
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB BA: jmp 0x58780338
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x58780332
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
