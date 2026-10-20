// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850E1C0 .. +0x174 bytes.
extern "C" __declspec(naked) void FUN_5850e1c0_5850E1C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880c15h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
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
        mov dword ptr [eax], 588a3e80h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 858h
        ; Exact mapped bytes E8 D1 92 F7 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x92
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 864h
        ; Exact mapped bytes E8 BC 92 F7 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x92
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 858h
        mov dword ptr [ebp - 24h], ecx
        push 40h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 94 BE FA FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xbe
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        add edx, 864h
        mov dword ptr [ebp - 28h], edx
        push 20h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7E BE FA FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xbe
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8fch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 870h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8f8h], 0
        push 9ch
        ; Exact mapped bytes E8 71 2D 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x2d
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 14: je 0x5850e2b7
        __asm _emit 0x74
        __asm _emit 0x14
        push 0
        push 1000h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3E 6E 22 00: call 0x587350f0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x6e
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5850e2be
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 14h], edx
        push 198h
        ; Exact mapped bytes E8 29 2D 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2d
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 16: je 0x5850e301
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a3e30h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B4 20 27 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x20
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5850e308
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 0ch], edx
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
