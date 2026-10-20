// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F6720 .. +0x172 bytes.
extern "C" __declspec(naked) void FUN_585f6720_585F6720() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 EB FF FF: call 0x585f5280
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 57 E9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x57
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x585f675a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D9 59 E9 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1B: je 0x585f677b
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 118h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A8 F5 1C 00: call 0x587c5d20
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf5
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D4: jmp 0x585f674f
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585f678d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 1b2h]
        and cl, 0fh
        movzx edx, cl
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7D 12: jge 0x585f67b3
        __asm _emit 0x7d
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        ; Exact mapped bytes E8 C0 CD F2 FF: call 0x58523570
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x585f6784
        __asm _emit 0xeb
        __asm _emit 0xd1
        push 40000000h
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 81 00 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        push 50000h
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 69 13 00: call 0x5872d130
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x69
        __asm _emit 0x13
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D E8 1F 96 58: mov ecx, dword ptr [0x58961fe8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 F7 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 174h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x585f6825
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx]
        and dl, 1
        and dl, 1
        shl dl, 5
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 1b2h]
        and cl, 0dfh
        or cl, dl
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 1b2h], cl
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585f6837
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 29: jge 0x585f6866
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 104h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 4F 01 E9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 150h]
        ; Exact mapped bytes E8 3D 01 E9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x585f682e
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B2 C1 FF FF: call 0x585f2a20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 180h
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 5A FD FF: call 0x585cc2c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x5a
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
