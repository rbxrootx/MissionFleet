// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584954E0 .. +0x102 bytes.
extern "C" __declspec(naked) void FUN_584954e0_584954E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x584955dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A6 6B FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB F4 FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x584955d7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9A 14 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x5849554f
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E 14 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 6B FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 34 9F 00 00: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x5849555d
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 6B FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B 6B FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x5849558e
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F 6B FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 14 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A5 9F 00 00: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x5849559c
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2A 14 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x584955bf
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x584955c6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        sub ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 05: jmp 0x584955dc
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 16 FF FF FF: jmp 0x584954f2
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
