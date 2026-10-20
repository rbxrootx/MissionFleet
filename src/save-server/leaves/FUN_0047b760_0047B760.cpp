// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047B760 .. +0x273 bytes.
extern "C" __declspec(naked) void FUN_0047b760_0047B760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 420h
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 420h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 07: jne 0x47b786
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 49 02 00 00: jmp 0x47b9cf
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 6889a0h]
        ; Exact mapped bytes 0F BE 4C 10 04: movsx ecx, byte ptr [eax + edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x04
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x47b7b8
        __asm _emit 0x74
        __asm _emit 0x10
        push 2
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 5B FE FF FF: call 0x47b610
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 6889a0h]
        ; Exact mapped bytes 0F BE 44 0A 04: movsx eax, byte ptr [edx + ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x04
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x47b8ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 83 EE 00 00 00: jae 0x47b8ea
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 414h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ebp - 414h]
        sub ecx, edx
        cmp ecx, 400h
        ; Exact mapped bytes 7D 5F: jge 0x47b877
        __asm _emit 0x7d
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 54: jae 0x47b877
        __asm _emit 0x73
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 41ch], dl
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F BE 8D E4 FB FF FF: movsx ecx, byte ptr [ebp - 0x41c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, 0ah
        ; Exact mapped bytes 75 1E: jne 0x47b861
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 420h]
        add edx, 1
        mov dword ptr [ebp - 420h], edx
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax], 0dh
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [ebp - 41ch]
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 8E: jmp 0x47b805
        __asm _emit 0xeb
        __asm _emit 0x8e
        push 0
        lea edx, [ebp - 418h]
        push edx
        mov eax, dword ptr [ebp - 8]
        lea ecx, [ebp - 414h]
        sub eax, ecx
        push eax
        lea edx, [ebp - 414h]
        push edx
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 6889a0h]
        mov eax, dword ptr [edx + ecx]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x47b8da
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 418h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        lea eax, [ebp - 414h]
        sub edx, eax
        cmp dword ptr [ebp - 418h], edx
        ; Exact mapped bytes 7D 02: jge 0x47b8d8
        __asm _emit 0x7d
        __asm _emit 0x02
        ; Exact mapped bytes EB 12: jmp 0x47b8ea
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes EB 0B: jmp 0x47b8e5
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 05: jmp 0x47b8ea
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 03 FF FF FF: jmp 0x47b7ed
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 50: jmp 0x47b93c
        __asm _emit 0xeb
        __asm _emit 0x50
        push 0
        lea ecx, [ebp - 418h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 6889a0h]
        mov ecx, dword ptr [eax + edx]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x47b933
        __asm _emit 0x74
        __asm _emit 0x12
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 418h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 09: jmp 0x47b93c
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x47b9c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 2E: je 0x47b97a
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 75 17: jne 0x47b969
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes E8 29 1D FF FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 2E 1D FF FF: call 0x46d690
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 0C: jmp 0x47b975
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 6E 1C FF FF: call 0x46d5e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 55: jmp 0x47b9cf
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 6889a0h]
        ; Exact mapped bytes 0F BE 44 0A 04: movsx eax, byte ptr [edx + ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x04
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x47b9ab
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 1ah
        ; Exact mapped bytes 75 04: jne 0x47b9ab
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 24: jmp 0x47b9cf
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes E8 D0 1C FF FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 1ch
        ; Exact mapped bytes E8 D5 1C FF FF: call 0x46d690
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 09: jmp 0x47b9cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp - 420h]
        mov esp, ebp
        pop ebp
        ret
    }
}
