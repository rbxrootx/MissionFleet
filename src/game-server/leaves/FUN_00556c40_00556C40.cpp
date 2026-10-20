// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00556C40 .. +0x19E bytes.
extern "C" __declspec(naked) void FUN_00556c40_00556C40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        push 6c9h
        push 5cfa08h
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 01 45 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0xfa
        __asm _emit 0xff
        push 6cah
        push 5cfa08h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 EE 44 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x44
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58eae8h
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 03 52 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 17: jne 0x556ca3
        __asm _emit 0x75
        __asm _emit 0x17
        push 5cfbb4h
        push 5cfbech
        ; Exact mapped bytes E8 7A 8F F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x556dd5
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x556cbd
        __asm _emit 0x75
        __asm _emit 0x14
        push 6d3h
        push 5cfa08h
        ; Exact mapped bytes E8 48 DD FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556cbd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x556ca3
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x556cdd
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 11: jne 0x556cee
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x556dd5
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58ec68h
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 87 51 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 14: jne 0x556d1c
        __asm _emit 0x75
        __asm _emit 0x14
        push 6dfh
        push 5cfa08h
        ; Exact mapped bytes E8 E9 DC FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556d1c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x556d02
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        lea eax, [ebp - 20h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 77: jne 0x556db1
        __asm _emit 0x75
        __asm _emit 0x77
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 14: je 0x556d54
        __asm _emit 0x74
        __asm _emit 0x14
        push 6e5h
        push 5cfa08h
        ; Exact mapped bytes E8 B1 DC FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556d54
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x556d3a
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 38h]
        push edx
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x556d7e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 2E: jmp 0x556dac
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 16: je 0x556d9a
        __asm _emit 0x74
        __asm _emit 0x16
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 1C 2A 5E 00: call dword ptr [0x5e2a1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x556dac
        __asm _emit 0xeb
        __asm _emit 0x12
        lea ecx, [ebp - 20h]
        push ecx
        lea edx, [ebp - 38h]
        push edx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB B9 00 00: call 0x562797
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x556d22
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
