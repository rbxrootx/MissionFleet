// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00498413 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_00498413_00498413() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp - 34h]
        sub eax, 0d4h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 75 0E: jne 0x49843f
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x498507
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x498451
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 83 A6 00 00 00: jae 0x498503
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 24h
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + edx]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        sub edx, 1
        mov dword ptr [ebp - 38h], edx
        cmp dword ptr [ebp - 38h], 1eh
        ; Exact mapped bytes 77 4F: ja 0x4984d1
        __asm _emit 0x77
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 38h]
        xor eax, eax
        mov al, byte ptr [ecx + 49852fh]
        ; Exact mapped bytes FF 24 85 0F 85 49 00: jmp dword ptr [eax*4 + 0x49850f]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 34: jmp 0x4984d1
        __asm _emit 0xeb
        __asm _emit 0x34
        mov dword ptr [ebp - 0ch], 7
        ; Exact mapped bytes EB 2B: jmp 0x4984d1
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes EB 22: jmp 0x4984d1
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes EB 19: jmp 0x4984d1
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes EB 10: jmp 0x4984d1
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes EB 07: jmp 0x4984d1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 2
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 27: je 0x4984fe
        __asm _emit 0x74
        __asm _emit 0x27
        push 3
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 AF 23 00 00: call 0x49a890
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 AC FF FF: call 0x4931f2
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 0B: jmp 0x498509
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes E9 45 FF FF FF: jmp 0x498448
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x498509
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
