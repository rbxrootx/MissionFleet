// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428CE0 .. +0x233 bytes.
extern "C" __declspec(naked) void FUN_00428ce0_00428CE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c78h
        ; Exact mapped bytes E8 4B C7 0F 00: call 0x525458
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc7
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c88h
        ; Exact mapped bytes E8 F5 0A 00 00: call 0x429810
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c8ch
        ; Exact mapped bytes E8 77 0A 00 00: call 0x4297a0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c90h
        ; Exact mapped bytes E8 29 0B 00 00: call 0x429860
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax], 6343bch
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 104h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 108h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x428d7e
        __asm _emit 0x74
        __asm _emit 0x1e
        push 40h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 8E C5 03 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx + 43h], 0
        ; Exact mapped bytes EB 07: jmp 0x428d85
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 110h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 10ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 114h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 118h], 0
        mov esi, esp
        ; Exact mapped bytes FF 15 CC C0 68 00: call dword ptr [0x68c0cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 29 C0 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 11ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 120h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 124h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 128h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 12ch], 0
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 130h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x428e23
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0b4h
        ; Exact mapped bytes 7D 52: jge 0x428e7e
        __asm _emit 0x7d
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 4]
        shl edx, 4
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx + 134h], 0
        mov ecx, dword ptr [ebp - 4]
        shl ecx, 4
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx + 138h], 0
        mov eax, dword ptr [ebp - 4]
        shl eax, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax + 13ch], 0
        mov edx, dword ptr [ebp - 4]
        shl edx, 4
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx + 140h], 0
        ; Exact mapped bytes EB 9C: jmp 0x428e1a
        __asm _emit 0xeb
        __asm _emit 0x9c
        lea ecx, [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 30 97 07 00: call 0x4a25b7
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c78h
        ; Exact mapped bytes E8 02 C6 0F 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc6
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        imul edx, edx, 3e8h
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0c74h], edx
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 0c7ch], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0c80h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0c84h], 0
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c90h
        ; Exact mapped bytes E8 93 09 00 00: call 0x429880
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c88h
        ; Exact mapped bytes E8 31 09 00 00: call 0x429830
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 E3 BE 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
