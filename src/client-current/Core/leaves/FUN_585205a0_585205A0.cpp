// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585205A0 .. +0x192 bytes.
extern "C" __declspec(naked) void FUN_585205a0_585205A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888174dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        sub esp, 3ch
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ecx + 4]
        mov ecx, edx
        ; Exact mapped bytes E8 8F AD FE FF: call 0x5850b370
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x58520609
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 24h], eax
        push 0
        push 2
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2E BD FE FF: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        xor al, al
        ; Exact mapped bytes E9 8F 01 00 00: jmp 0x58520798
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 67 BF FE FF: call 0x5850c580
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 09: je 0x5852062b
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B6 AB FE FF: call 0x5850b1e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov byte ptr [ebp - 11h], 0
        movzx eax, byte ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 0F 85 2A 01 00 00: jne 0x58520765
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 C5 75 F6 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x75
        __asm _emit 0xf6
        __asm _emit 0xff
        and eax, 1
        ; Exact mapped bytes 0F 84 11 01 00 00: je 0x58520765
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E2 AC FE FF: call 0x5850b350
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 69 54 FE FF: call 0x58505af0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 A4 6C FE FF: call 0x58507340
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ecx + 4]
        mov ecx, edx
        ; Exact mapped bytes E8 2A B6 FE FF: call 0x5850bce0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 43 0E 00 00: call 0x58521500
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 20: jmp 0x585206e8
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 08 B6 FE FF: call 0x5850bce0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 0E 00 00: call 0x58521560
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 FF A0 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa0
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 B9 A8 FE FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x58520709
        __asm _emit 0x74
        __asm _emit 0x08
        mov byte ptr [ebp - 11h], 1
        ; Exact mapped bytes EB 2B: jmp 0x58520732
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes EB 27: jmp 0x58520730
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 6E 4D FE FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        movzx ecx, al
        push ecx
        push 48h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 BD 04 00 00: call 0x58520be0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 12h], al
        movzx edx, byte ptr [ebp - 12h]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x58520730
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58520732
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 96: jmp 0x585206c8
        __asm _emit 0xeb
        __asm _emit 0x96
    }
}
