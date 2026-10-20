// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A6EA0 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_584a6ea0_584A6EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 24h], 15eh
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 0F 84 48 01 00 00: je 0x584a7012
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 0F 84 38 01 00 00: je 0x584a7012
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 DC FA FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0a4h]
        imul edx, dword ptr [ebp - 24h]
        add eax, edx
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 B0 51 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0a8h]
        imul edx, dword ptr [ebp - 24h]
        add eax, edx
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 71 18 00 00: call 0x584a8790
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x584a7012
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 7C 51 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 7F FA FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 FB 10 00 00: call 0x584a8050
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 47 FA FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 2A 51 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7E 14: jle 0x584a6fa5
        __asm _emit 0x7e
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 25 FA FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        add eax, 0c8h
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 1A: jmp 0x584a6fbf
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7E 12: jle 0x584a6fbf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 09 FA FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        sub eax, 0c8h
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 14: jle 0x584a6fdb
        __asm _emit 0x7e
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 DF 50 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 0c8h
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 1A: jmp 0x584a6ff5
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 12: jle 0x584a6ff5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 C3 50 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, 0c8h
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 F8 1B 00 00: call 0x584a8c00
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x584a7014
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 32 A0 38 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa0
        __asm _emit 0x38
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
