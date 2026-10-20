// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861CC30 .. +0x1CB bytes.
extern "C" __declspec(naked) void FUN_5861cc30_5861CC30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 420h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 408h], ecx
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 AC CC F0 FF: call 0x58529900
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xcc
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8F 01 00 00: je 0x5861cdeb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 38: jne 0x5861cc9a
        __asm _emit 0x75
        __asm _emit 0x38
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 75 32: jne 0x5861cc9a
        __asm _emit 0x75
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 408h]
        mov ecx, dword ptr [eax + 0d14h]
        mov dword ptr [ebp - 410h], ecx
        push 0
        push 0
        push 10101h
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 410h]
        ; Exact mapped bytes E8 0C A8 E9 FF: call 0x584b74a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa8
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 51 01 00 00: jmp 0x5861cdeb
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 589604e0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 3A 01 00 00: je 0x5861cdeb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40ch], 0
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 29: jne 0x5861ccea
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 408h]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 414h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 BE BA 04 00: call 0x586687a0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 40ch], eax
        ; Exact mapped bytes EB 2D: jmp 0x5861cd17
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 27: jne 0x5861cd17
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 408h]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 418h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 EF BA 04 00: call 0x58668800
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 40ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588ae658h
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 3d4h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea edx, [ebp + eax - 404h]
        push edx
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 40ch], 0
        ; Exact mapped bytes 74 37: je 0x5861cd95
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 408h]
        mov ecx, dword ptr [eax + 0d14h]
        mov dword ptr [ebp - 41ch], ecx
        mov edx, dword ptr [ebp - 40ch]
        push edx
        push 0
        push 10101h
        push 0
        lea eax, [ebp - 404h]
        push eax
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 0E A7 E9 FF: call 0x584b74a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 56: jmp 0x5861cdeb
        __asm _emit 0xeb
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 408h]
        mov edx, dword ptr [ecx + 0d14h]
        mov dword ptr [ebp - 420h], edx
        push 0
        push 0
        push 10101h
        push 0
        lea eax, [ebp - 404h]
        push eax
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 DC A6 E9 FF: call 0x584b74a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 408h]
        add edx, 0cfch
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 408h]
        mov dword ptr [eax + 0d18h], 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 5B 42 21 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x42
        __asm _emit 0x21
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
