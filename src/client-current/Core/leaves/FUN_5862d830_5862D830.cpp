// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862D830 .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_5862d830_5862D830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 200h
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x5862d8fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 71 E5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x71
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B1 80 E5 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x80
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x5862d8cb
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 128h]
        ; Exact mapped bytes E8 0F 80 E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x80
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 41: jne 0x5862d8c9
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 128h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 42 86 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x86
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 E5 18 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xe5
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 18h], edx
        push 0
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5862d8f8
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 128h]
        ; Exact mapped bytes E8 B7 7F E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x7f
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 17: jne 0x5862d8f8
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 128h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E9 85 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5F: jmp 0x5862d959
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 20ah
        ; Exact mapped bytes 75 53: jne 0x5862d959
        __asm _emit 0x75
        __asm _emit 0x53
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        shr eax, 10h
        and eax, 0ffffh
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 7E 07: jle 0x5862d929
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 128h]
        ; Exact mapped bytes E8 59 7F E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x7f
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 1A: jne 0x5862d959
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0B: je 0x5862d950
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 01 00 00: call 0x5862db40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x5862d959
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 01 00 00: call 0x5862daf0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
