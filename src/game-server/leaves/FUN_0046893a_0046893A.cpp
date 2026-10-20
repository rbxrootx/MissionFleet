// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046893A .. +0x24B bytes.
extern "C" __declspec(naked) void FUN_0046893a_0046893A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        push 8
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 528h
        push eax
        ; Exact mapped bytes E8 FD 09 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x468988
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 6D: jge 0x4689fb
        __asm _emit 0x7d
        __asm _emit 0x6d
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 25 FE FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        imul eax, eax, 370h
        lea eax, [esi + eax + 16bdch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4 + 270h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 3A: je 0x4689f9
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 278h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, -1
        ; Exact mapped bytes 74 15: je 0x4689f9
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx + 52ch]
        add dl, 1
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [eax + 52ch], dl
        ; Exact mapped bytes EB 84: jmp 0x46897f
        __asm _emit 0xeb
        __asm _emit 0x84
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 24 FE FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        imul eax, eax, 370h
        lea edx, [esi + eax + 16c04h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 40cc8h]
        mov ecx, dword ptr [edx + 0ca0h]
        ; Exact mapped bytes E8 BB 10 FC FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 36 01 00 00: je 0x468b74
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1fh
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 12: jmp 0x468a60
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 83 0A 01 00 00: jae 0x468b74
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 18h], 0
        mov byte ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 258h]
        mov ecx, dword ptr [ebp - 14h]
        shl eax, cl
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x468a8d
        __asm _emit 0x74
        __asm _emit 0x04
        mov byte ptr [ebp - 1ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 254h]
        mov ecx, dword ptr [ebp - 14h]
        shl edx, cl
        and edx, 80000000h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x468aa9
        __asm _emit 0x74
        __asm _emit 0x04
        mov byte ptr [ebp - 18h], 1
        mov eax, dword ptr [ebp - 1ch]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x468add
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x468add
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 4
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 45 02 00 00: call 0x468d1d
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x468b6f
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 24: je 0x468b0e
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x468b0e
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 2
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 11 02 00 00: call 0x468d1d
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 61: jmp 0x468b6f
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 75 25: jne 0x468b40
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 18h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 18: je 0x468b40
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 3
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 DF 01 00 00: call 0x468d1d
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2F: jmp 0x468b6f
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 1ch]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x468b6f
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 75 16: jne 0x468b6f
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AE 01 00 00: call 0x468d1d
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DA FE FF FF: jmp 0x468a4e
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 61 FC 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
