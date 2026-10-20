// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587562B0 .. +0x1A8 bytes.
extern "C" __declspec(naked) void FUN_587562b0_587562B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f922h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
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
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b4fdch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1808h
        ; Exact mapped bytes E8 E1 11 D3 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x11
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 584877e0h
        push 584874d0h
        push 200h
        push 0ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1814h
        push ecx
        ; Exact mapped bytes E8 6F B9 0D 00: call 0x58831c85
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb9
        __asm _emit 0x0d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 198h
        ; Exact mapped bytes E8 E0 AC 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xac
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 16: je 0x5875634a
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b4f78h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6B A0 02 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58756351
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 28h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax + 3024h], ecx
        push 198h
        ; Exact mapped bytes E8 93 AC 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xac
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 16: je 0x58756397
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b4f88h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1E A0 02 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5875639e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 2ch], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 3028h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 1808h
        mov dword ptr [ebp - 30h], edx
        push 80h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 13 3D D6 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x3d
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x587563e0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 200h
        ; Exact mapped bytes 7D 40: jge 0x58756429
        __asm _emit 0x7d
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 808h], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 1008h], 0
        imul edx, dword ptr [ebp - 14h], 0ch
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 1814h]
        mov dword ptr [ebp - 34h], ecx
        push 10h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 BA 3C D6 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3c
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x587563d7
        __asm _emit 0xeb
        __asm _emit 0xae
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3014h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A2 0E 00 00: call 0x587572e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
