// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584953D0 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_584953d0_584953D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 EF 00 00 00: je 0x584954d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 0B: jmp 0x584953f9
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA 6C FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x584954d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 6A FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x584954cd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 15 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x58495445
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 15 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D 6C FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3E A0 00 00: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x58495453
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 6C FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 55 6C FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x58495484
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 49 6C FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E 15 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AF A0 00 00: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x58495492
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 34 15 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x584954b5
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x584954bc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        sub ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 05: jmp 0x584954d2
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 1C FF FF FF: jmp 0x584953ee
        __asm _emit 0xe9
        __asm _emit 0x1c
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
