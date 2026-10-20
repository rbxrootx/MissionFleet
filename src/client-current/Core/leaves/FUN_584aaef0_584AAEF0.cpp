// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AAEF0 .. +0x19C bytes.
extern "C" __declspec(naked) void FUN_584aaef0_584AAEF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58895284h
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584aaf14
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 7D 57: jge 0x584aaf71
        __asm _emit 0x7d
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 0bch], 0
        ; Exact mapped bytes 74 45: je 0x584aaf6f
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0bch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x584aaf57
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x584aaf5e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 0bch], 0
        ; Exact mapped bytes EB 9A: jmp 0x584aaf0b
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 3D: je 0x584aafba
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x584aafa6
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x584aafad
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b0h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 74 3D: je 0x584ab003
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x584aafef
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x584aaff6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 74 27: je 0x584ab036
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 34h], ecx
        push 1
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 0E 60 38 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x60
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 3D: je 0x584ab07f
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x584ab06b
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584ab072
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ach], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 B0 30 00: call 0x587b6140
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb0
        __asm _emit 0x30
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
