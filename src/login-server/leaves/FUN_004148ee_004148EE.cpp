// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004148EE .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_004148ee_004148EE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 2dh], 40h
        ; Exact mapped bytes 75 1E: jne 0x41491a
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 0d8h]
        push -3
        push eax
        push dword ptr [esi + 0bch]
        ; Exact mapped bytes E8 E8 CF FF FF: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 66 83 FF 02: cmp di, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 74 E4: je 0x4148fc
        __asm _emit 0x74
        __asm _emit 0xe4
        ; Exact mapped bytes EB 13: jmp 0x41492d
        __asm _emit 0xeb
        __asm _emit 0x13
        push dword ptr [esi + 0bch]
        ; Exact mapped bytes E8 93 7C 01 00: call 0x42c5b8
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 66 83 FF 02: cmp di, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 74 ED: je 0x41491a
        __asm _emit 0x74
        __asm _emit 0xed
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x414947
        __asm _emit 0x75
        __asm _emit 0x0e
        push dword ptr [esi + 0bch]
        mov eax, dword ptr [esi]
        mov ecx, esi
        push edi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        ; Exact mapped bytes 66 83 FF 63: cmp di, 0x63
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x63
        ; Exact mapped bytes 75 0D: jne 0x41495a
        __asm _emit 0x75
        __asm _emit 0x0d
        push dword ptr [esi + 0bch]
        mov ecx, esi
        ; Exact mapped bytes E8 59 00 00 00: call 0x4149b3
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push eax
        push dword ptr [esi + 0bch]
        ; Exact mapped bytes E8 75 7C 01 00: call 0x42c5e2
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 48: call dword ptr [edx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x41499d
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        cmp eax, -1
        ; Exact mapped bytes 74 1C: je 0x41499d
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp eax, 1
        ; Exact mapped bytes 74 1E: je 0x4149a4
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [esi]
        push 0
        neg eax
        sbb eax, eax
        mov ecx, esi
        and al, 0feh
        add eax, 3f0h
        push eax
        ; Exact mapped bytes FF 52 54: call dword ptr [edx + 0x54]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x54
        ; Exact mapped bytes EB 07: jmp 0x4149a4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        lea ecx, [esi + 0d8h]
        ; Exact mapped bytes E8 87 91 01 00: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        leave
        ret
    }
}
