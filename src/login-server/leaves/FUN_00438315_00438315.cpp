// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438315 .. +0x20B bytes.
extern "C" __declspec(naked) void FUN_00438315_00438315() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        push 4
        pop ebx
        mov dword ptr [edi], ecx
        add edi, ebx
        ; Exact mapped bytes 66 83 7D 14 06: cmp word ptr [ebp + 0x14], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x14
        __asm _emit 0x06
        ; Exact mapped bytes 74 07: je 0x438336
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 66 83 7D 14 0C: cmp word ptr [ebp + 0x14], 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x14
        __asm _emit 0x0c
        ; Exact mapped bytes 75 07: jne 0x43833d
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi], eax
        add edi, ebx
        mov edx, dword ptr [ebp + 18h]
        and dword ptr [ebp - 8], 0
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp + 14h], eax
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 10h], eax
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 0F 84 87 01 00 00: je 0x4384eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        dec dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 0F B6 08: movzx cx, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x08
        mov eax, 0ffh
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 11: je 0x43838c
        __asm _emit 0x74
        __asm _emit 0x11
        test cl, 40h
        ; Exact mapped bytes 74 0C: je 0x43838c
        __asm _emit 0x74
        __asm _emit 0x0c
        and ecx, 0ffbfh
        or ch, 40h
        mov dword ptr [ebp + 8], ecx
        mov esi, dword ptr [ebp - 4]
        cmp dword ptr [ebp + 14h], esi
        ; Exact mapped bytes 0F 8C C6 00 00 00: jl 0x43845e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x4384eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov esi, dword ptr [ebp - 0ch]
        shl eax, 4
        add esi, eax
        ; Exact mapped bytes 66 83 F9 0C: cmp cx, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x438437
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 66 3B CA: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 74 76: je 0x438434
        __asm _emit 0x74
        __asm _emit 0x76
        mov ebx, dword ptr [ebp + 20h]
        mov dword ptr [ebp + 0ch], 8
        add ebx, eax
        ; Exact mapped bytes 66 83 F9 0E: cmp cx, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0e
        ; Exact mapped bytes 74 03: je 0x4383d3
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 66 3B 55 0C: cmp dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 74 18: je 0x4383f1
        __asm _emit 0x74
        __asm _emit 0x18
        push dword ptr [ebp + 0ch]
        push 0
        push esi
        push ebx
        ; Exact mapped bytes FF 15 58 C3 43 00: call dword ptr [0x43c358]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C 08 01 00 00: jl 0x4384f6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 83 F9 0E: cmp cx, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0e
        ; Exact mapped bytes 75 38: jne 0x43842f
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 66 3B 45 0C: cmp ax, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 74 15: je 0x438415
        __asm _emit 0x74
        __asm _emit 0x15
        mov esi, dword ptr [ebx + 8]
        push esi
        ; Exact mapped bytes E8 91 F2 FF FF: call 0x43769a
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        mov dword ptr [ebx + 8], eax
        ; Exact mapped bytes FF 15 44 C3 43 00: call dword ptr [0x43c344]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x438425
        __asm _emit 0xeb
        __asm _emit 0x10
        push dword ptr [esi + 8]
        ; Exact mapped bytes E8 7D F2 FF FF: call 0x43769a
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx + 8], eax
        ; Exact mapped bytes 66 C7 03 08 00: mov word ptr [ebx], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp + 8], 8
        mov ecx, dword ptr [ebp + 8]
        push 4
        mov esi, ebx
        pop ebx
        mov edx, dword ptr [ebp + 18h]
        movzx eax, cx
        cmp eax, 11h
        ; Exact mapped bytes 0F 8F 85 00 00 00: jg 0x4384c8
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 7D: je 0x4384c2
        __asm _emit 0x74
        __asm _emit 0x7d
        add eax, -2
        cmp eax, 0bh
        ; Exact mapped bytes 0F 87 8F 00 00 00: ja 0x4384e0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 20 85 43 00: jmp dword ptr [eax*4 + 0x438520]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 46 08: movsx eax, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes EB 7E: jmp 0x4384dc
        __asm _emit 0xeb
        __asm _emit 0x7e
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 13: jne 0x438476
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [edx + 0ch]
        and dword ptr [ebp - 4], 0
        mov dword ptr [ebp + 14h], eax
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 6A: jmp 0x4384e0
        __asm _emit 0xeb
        __asm _emit 0x6a
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 6F: jne 0x4384eb
        __asm _emit 0x75
        __asm _emit 0x6f
        ; Exact mapped bytes 66 83 F9 0C: cmp cx, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0c
        ; Exact mapped bytes 75 69: jne 0x4384eb
        __asm _emit 0x75
        __asm _emit 0x69
        ; Exact mapped bytes 66 C7 05 18 FC 44 00 0A 00: mov word ptr [0x44fc18], 0xa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 20 FC 44 00 04 00 02 80: mov dword ptr [0x44fc20], 0x80020004
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x80
        mov esi, 44fc18h
        ; Exact mapped bytes EB 9B: jmp 0x438437
        __asm _emit 0xeb
        __asm _emit 0x9b
        ; Exact mapped bytes DD 46 08: fld qword ptr [esi + 8]
        __asm _emit 0xdd
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes DD 1F: fstp qword ptr [edi]
        __asm _emit 0xdd
        __asm _emit 0x1f
        ; Exact mapped bytes EB 0B: jmp 0x4384ae
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 8]
        mov dword ptr [edi], eax
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [edi + 4], eax
        add edi, 8
        ; Exact mapped bytes EB 2D: jmp 0x4384e0
        __asm _emit 0xeb
        __asm _emit 0x2d
        xor eax, eax
        ; Exact mapped bytes 66 39 46 08: cmp word ptr [esi + 8], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x08
        setne al
        ; Exact mapped bytes EB 1E: jmp 0x4384dc
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov dword ptr [edi], esi
        ; Exact mapped bytes EB 1C: jmp 0x4384de
        __asm _emit 0xeb
        __asm _emit 0x1c
        movzx eax, byte ptr [esi + 8]
        ; Exact mapped bytes EB 14: jmp 0x4384dc
        __asm _emit 0xeb
        __asm _emit 0x14
        add eax, 0ffffbffeh
        cmp eax, 10h
        ; Exact mapped bytes 77 0E: ja 0x4384e0
        __asm _emit 0x77
        __asm _emit 0x0e
        ; Exact mapped bytes FF 24 85 50 85 43 00: jmp dword ptr [eax*4 + 0x438550]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov dword ptr [edi], eax
        add edi, ebx
        inc dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes E9 70 FE FF FF: jmp 0x43835b
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7E 0F: jle 0x438500
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, 8002000eh
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 19: jmp 0x438519
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 10h]
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 74 0F: je 0x438517
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        mov eax, 8002000fh
        ; Exact mapped bytes EB 02: jmp 0x438519
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
