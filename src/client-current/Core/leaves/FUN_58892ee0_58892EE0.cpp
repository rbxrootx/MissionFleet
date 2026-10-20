// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892EE0 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_58892ee0_58892EE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588917f0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push esi
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
        ; Exact mapped bytes 0F B6 05 B0 5E 96 58: movzx eax, byte ptr [0x58965eb0]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        sub eax, 4
        ; Exact mapped bytes 74 37: je 0x58892f46
        __asm _emit 0x74
        __asm _emit 0x37
        sub eax, 2
        ; Exact mapped bytes 74 05: je 0x58892f19
        __asm _emit 0x74
        __asm _emit 0x05
        sub eax, 1
        ; Exact mapped bytes 75 47: jne 0x58892f60
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 8B 35 A8 5E 96 58: mov esi, dword ptr [0x58965ea8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        test esi, esi
        ; Exact mapped bytes 74 3D: je 0x58892f60
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [esi]
        mov ecx, esi
        push dword ptr [eax + 4]
        push esi
        ; Exact mapped bytes E8 70 53 F0 FF: call 0x587982a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0xff
        push 30h
        push dword ptr [esi]
        ; Exact mapped bytes E8 FB E0 F9 FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xe0
        __asm _emit 0xf9
        __asm _emit 0xff
        push 8
        push esi
        ; Exact mapped bytes E8 F3 E0 F9 FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe0
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 1A: jmp 0x58892f60
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes A1 B0 5E 96 58: mov eax, dword ptr [0x58965eb0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        test al, 1
        ; Exact mapped bytes 74 0E: je 0x58892f60
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes FF 35 A8 5E 96 58: push dword ptr [0x58965ea8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 66 FC FF: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 8B 35 B4 5E 96 58: mov esi, dword ptr [0x58965eb4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb4
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 05 A8 5E 96 58: movlpd qword ptr [0x58965ea8], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        test esi, esi
        ; Exact mapped bytes 74 21: je 0x58892f96
        __asm _emit 0x74
        __asm _emit 0x21
        push 584a9d30h
        push 3
        push 18h
        push esi
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 6E ED F9 FF: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xf9
        __asm _emit 0xff
        push 48h
        push esi
        ; Exact mapped bytes E8 A1 E0 F9 FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
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
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
