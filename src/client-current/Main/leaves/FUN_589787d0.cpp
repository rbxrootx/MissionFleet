// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589787D0 .. +0x185 bytes.
extern "C" __declspec(naked) void FUN_589787d0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes 0F BF 38: movsx edi, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x38
        sub edi, dword ptr [esp + 1ch]
        mov eax, edi
        ; Exact mapped bytes 79 03: jns 0x589787e6
        __asm _emit 0x79
        __asm _emit 0x03
        neg eax
        dec edi
        mov ebp, dword ptr [esp + 14h]
        xor esi, esi
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x58978811
        __asm _emit 0x74
        __asm _emit 0x21
        inc esi
        sar eax, 1
        ; Exact mapped bytes 75 FB: jne 0x589787f0
        __asm _emit 0x75
        __asm _emit 0xfb
        cmp esi, 0bh
        ; Exact mapped bytes 7E 17: jle 0x58978811
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ecx]
        mov dword ptr [edx + 14h], 6
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        add esp, 4
        mov eax, dword ptr [esp + 20h]
        ; Exact mapped bytes 0F BE 94 06 00 04 00 00: movsx edx, byte ptr [esi + eax + 0x400]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + esi*4]
        push edx
        push eax
        push ebp
        ; Exact mapped bytes E8 38 01 00 00: call 0x58978960
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test al, al
        ; Exact mapped bytes 75 05: jne 0x58978834
        __asm _emit 0x75
        __asm _emit 0x05
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        test esi, esi
        ; Exact mapped bytes 74 14: je 0x5897884c
        __asm _emit 0x74
        __asm _emit 0x14
        push esi
        push edi
        push ebp
        ; Exact mapped bytes E8 20 01 00 00: call 0x58978960
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test al, al
        ; Exact mapped bytes 75 05: jne 0x5897884c
        __asm _emit 0x75
        __asm _emit 0x05
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov eax, 589a37c4h
        xor esi, esi
        mov dword ptr [esp + 14h], eax
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F BF 3C 4A: movsx edi, word ptr [edx + ecx*2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x3c
        __asm _emit 0x4a
        test edi, edi
        ; Exact mapped bytes 75 06: jne 0x5897886b
        __asm _emit 0x75
        __asm _emit 0x06
        inc esi
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x58978915
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 0fh
        ; Exact mapped bytes 7E 2C: jle 0x5897889c
        __asm _emit 0x7e
        __asm _emit 0x2c
        mov eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 0F BE 88 F0 04 00 00: movsx ecx, byte ptr [eax + 0x4f0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 3c0h]
        push ecx
        push edx
        push ebp
        ; Exact mapped bytes E8 D7 00 00 00: call 0x58978960
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test al, al
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x58978947
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, 10h
        cmp esi, 0fh
        ; Exact mapped bytes 7F D4: jg 0x58978870
        __asm _emit 0x7f
        __asm _emit 0xd4
        test edi, edi
        mov dword ptr [esp + 1ch], edi
        ; Exact mapped bytes 7D 0B: jge 0x589788af
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov eax, dword ptr [esp + 1ch]
        neg edi
        dec eax
        mov dword ptr [esp + 1ch], eax
        sar edi, 1
        mov ebx, 1
        ; Exact mapped bytes 74 21: je 0x589788d9
        __asm _emit 0x74
        __asm _emit 0x21
        inc ebx
        sar edi, 1
        ; Exact mapped bytes 75 FB: jne 0x589788b8
        __asm _emit 0x75
        __asm _emit 0xfb
        cmp ebx, 0ah
        ; Exact mapped bytes 7E 17: jle 0x589788d9
        __asm _emit 0x7e
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 14h], 6
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov eax, dword ptr [esp + 24h]
        shl esi, 4
        add esi, ebx
        ; Exact mapped bytes 0F BE 8C 06 00 04 00 00: movsx ecx, byte ptr [esi + eax + 0x400]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + esi*4]
        push ecx
        push edx
        push ebp
        ; Exact mapped bytes E8 6B 00 00 00: call 0x58978960
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test al, al
        ; Exact mapped bytes 74 4B: je 0x58978947
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [esp + 1ch]
        push ebx
        push eax
        push ebp
        ; Exact mapped bytes E8 58 00 00 00: call 0x58978960
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test al, al
        ; Exact mapped bytes 74 38: je 0x58978947
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [esp + 14h]
        xor esi, esi
        add eax, 4
        cmp eax, 589a38c0h
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8C 30 FF FF FF: jl 0x58978857
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 7E 23: jle 0x5897894e
        __asm _emit 0x7e
        __asm _emit 0x23
        mov eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 0F BE 88 00 04 00 00: movsx ecx, byte ptr [eax + 0x400]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push ecx
        push edx
        push ebp
        ; Exact mapped bytes E8 20 00 00 00: call 0x58978960
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test al, al
        ; Exact mapped bytes 75 07: jne 0x5897894e
        __asm _emit 0x75
        __asm _emit 0x07
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret
    }
}
