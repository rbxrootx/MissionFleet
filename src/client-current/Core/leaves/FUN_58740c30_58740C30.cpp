// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58740C30 .. +0x195 bytes.
extern "C" __declspec(naked) void FUN_58740c30_58740C30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b4a2ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 74 37: je 0x58740c82
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x58740c71
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58740c78
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 60h], 0
        ; Exact mapped bytes 74 49: je 0x58740cdd
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58740cc3
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58740cca
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 60h], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 60h], 0
        ; Exact mapped bytes 74 49: je 0x58740d38
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x58740d1e
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58740d25
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 60h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 37: je 0x58740d78
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x58740d67
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 34h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58740d6e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 74 37: je 0x58740db8
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x58740da7
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 C4: call dword ptr [ebp - 0x3c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc4
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58740dae
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 40 00 00: call 0x58744e70
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
