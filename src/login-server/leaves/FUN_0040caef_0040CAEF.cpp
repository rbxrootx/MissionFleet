// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040CAEF .. +0x406 bytes.
extern "C" __declspec(naked) void FUN_0040caef_0040CAEF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2a4h
        mov dword ptr [ebp - 2a0h], ecx
        mov eax, dword ptr [ebp - 2a0h]
        cmp dword ptr [eax + 0cbch], 1
        ; Exact mapped bytes 0F 85 8F 03 00 00: jne 0x40cea0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2a0h]
        mov dword ptr [ecx + 0cb0h], 0
        mov edx, dword ptr [ebp - 2a0h]
        mov dword ptr [edx + 0cbch], 0
        mov eax, dword ptr [ebp - 2a0h]
        cmp dword ptr [eax + 0cb4h], 0
        ; Exact mapped bytes 0F 84 4C 03 00 00: je 0x40ce90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x40cb5a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 2a0h]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 0cc0h]
        ; Exact mapped bytes 0F 8D 27 02 00 00: jge 0x40cd96
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp - 2a0h]
        mov eax, dword ptr [edx + 0cc8h]
        cmp dword ptr [eax + ecx + 48h], 0
        ; Exact mapped bytes 0F 85 DB 01 00 00: jne 0x40cd6a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x40cbaa
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 28ch]
        add ecx, 1
        mov dword ptr [ebp - 28ch], ecx
        mov edx, dword ptr [ebp - 2a0h]
        mov eax, dword ptr [ebp - 28ch]
        cmp eax, dword ptr [edx + 0cc0h]
        ; Exact mapped bytes 7D 7C: jge 0x40cc3a
        __asm _emit 0x7d
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 28ch]
        shl ecx, 4
        lea edx, [ebp + ecx - 288h]
        push edx
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 0b0h
        mov ecx, dword ptr [ebp - 2a0h]
        mov edx, dword ptr [ecx + 0cc8h]
        add edx, eax
        push edx
        ; Exact mapped bytes FF 15 64 C2 43 00: call dword ptr [0x43c264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 44: jne 0x40cc35
        __asm _emit 0x75
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 0b0h
        mov ecx, dword ptr [ebp - 2a0h]
        mov edx, dword ptr [ecx + 0cc8h]
        mov dword ptr [edx + eax + 48h], 4
        mov eax, dword ptr [ebp - 2a0h]
        mov ecx, dword ptr [eax + 0cb4h]
        mov edx, dword ptr [ecx + 108h]
        add edx, 1
        mov eax, dword ptr [ebp - 2a0h]
        mov ecx, dword ptr [eax + 0cb4h]
        mov dword ptr [ecx + 108h], edx
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x40cb9b
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 0b0h
        mov eax, dword ptr [ebp - 2a0h]
        mov ecx, dword ptr [eax + 0cc8h]
        cmp dword ptr [ecx + edx + 48h], 0
        ; Exact mapped bytes 0F 85 0E 01 00 00: jne 0x40cd68
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2a0h]
        mov eax, dword ptr [edx + 0cb4h]
        mov ecx, dword ptr [eax + 104h]
        add ecx, 1
        mov edx, dword ptr [ebp - 2a0h]
        mov eax, dword ptr [edx + 0cb4h]
        mov dword ptr [eax + 104h], ecx
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp - 2a0h]
        mov eax, dword ptr [edx + 0cc8h]
        add eax, ecx
        push eax
        push 449618h
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffh
        shl ecx, 4
        lea edx, [ebp + ecx - 288h]
        mov dword ptr [ebp - 2a4h], edx
        mov eax, dword ptr [ebp - 2a4h]
        push eax
        mov cl, byte ptr [ebp - 4]
        add cl, 1
        mov byte ptr [ebp - 4], cl
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 45 F7 FF FF: call 0x40c420
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        ; Exact mapped bytes EB 11: jmp 0x40ccf4
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 12 F7 FF FF: call 0x40c400
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        cmp dword ptr [ebp - 290h], 0
        ; Exact mapped bytes 74 6B: je 0x40cd68
        __asm _emit 0x74
        __asm _emit 0x6b
        mov edx, dword ptr [ebp - 2a0h]
        mov eax, dword ptr [ebp - 290h]
        cmp eax, dword ptr [edx + 0cb4h]
        ; Exact mapped bytes 74 52: je 0x40cd63
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp - 2a0h]
        mov eax, dword ptr [edx + 0cc8h]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 10 1E 01 00: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp - 2a0h]
        mov eax, dword ptr [edx + 0cc8h]
        add eax, ecx
        push eax
        push 0
        push 0
        push 80016000h
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 9D 32 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7B FF FF FF: jmp 0x40cce3
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x40cd91
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 2a0h]
        mov edx, dword ptr [ecx + 0cb4h]
        mov eax, dword ptr [edx + 108h]
        add eax, 1
        mov ecx, dword ptr [ebp - 2a0h]
        mov edx, dword ptr [ecx + 0cb4h]
        mov dword ptr [edx + 108h], eax
        ; Exact mapped bytes E9 BB FD FF FF: jmp 0x40cb51
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 2a0h]
        mov ecx, dword ptr [eax + 0cc0h]
        imul ecx, ecx, 0b0h
        push ecx
        mov edx, dword ptr [ebp - 2a0h]
        mov eax, dword ptr [edx + 0cc8h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 2a0h]
        mov edx, dword ptr [ecx + 0cc0h]
        push edx
        push 80021000h
        mov eax, dword ptr [ebp - 2a0h]
        mov ecx, dword ptr [eax + 0cb4h]
        ; Exact mapped bytes E8 23 32 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2a0h]
        mov dword ptr [ecx + 0cc0h], 0
        mov edx, dword ptr [ebp - 2a0h]
        mov ecx, dword ptr [edx + 40d00h]
        ; Exact mapped bytes E8 33 45 FF FF: call 0x401331
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2a0h]
        cmp dword ptr [eax + 0cc4h], 0
        ; Exact mapped bytes 74 31: je 0x40ce3e
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 2a0h]
        mov edx, dword ptr [ecx + 0cc4h]
        mov dword ptr [ebp - 298h], edx
        mov eax, dword ptr [ebp - 298h]
        push eax
        ; Exact mapped bytes E8 EA 0A 02 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 2a0h]
        mov dword ptr [ecx + 0cc4h], 0
        mov edx, dword ptr [ebp - 2a0h]
        cmp dword ptr [edx + 0cc8h], 0
        ; Exact mapped bytes 74 31: je 0x40ce7e
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 2a0h]
        mov ecx, dword ptr [eax + 0cc8h]
        mov dword ptr [ebp - 29ch], ecx
        mov edx, dword ptr [ebp - 29ch]
        push edx
        ; Exact mapped bytes E8 AA 0A 02 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 2a0h]
        mov dword ptr [eax + 0cc8h], 0
        mov ecx, dword ptr [ebp - 2a0h]
        mov dword ptr [ecx + 0cb4h], 0
        ; Exact mapped bytes EB 10: jmp 0x40cea0
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 2a0h]
        mov dword ptr [edx + 0cc0h], 0
        mov eax, dword ptr [ebp - 2a0h]
        cmp dword ptr [eax + 0cb0h], 0
        ; Exact mapped bytes 75 42: jne 0x40cef1
        __asm _emit 0x75
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 2a0h]
        mov edx, dword ptr [ecx + 114h]
        mov dword ptr [ebp - 294h], edx
        cmp dword ptr [ebp - 294h], 0
        ; Exact mapped bytes 74 27: je 0x40cef1
        __asm _emit 0x74
        __asm _emit 0x27
        push 32h
        mov eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 19 F9 FF FF: call 0x40c7f7
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 17 F5 FF FF: call 0x40c400
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        ; Exact mapped bytes EB D0: jmp 0x40cec1
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov esp, ebp
        pop ebp
        ret
    }
}
