// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896C540 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_5896c540() {
    __asm {
        sub esp, 1ch
        push edi
        mov edi, dword ptr [esp + 24h]
        test edi, edi
        ; Exact mapped bytes 74 77: je 0x5896c5c3
        __asm _emit 0x74
        __asm _emit 0x77
        push ebx
        ; Exact mapped bytes 8B 1D F4 C3 98 58: mov ebx, dword ptr [0x5898c3f4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xf4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push ebp
        push esi
        ; Exact mapped bytes 8B 35 F0 C3 98 58: mov esi, dword ptr [0x5898c3f0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov ebp, 1
        add edi, 2ch
        push 8
        push -1
        push 0
        push edi
        push 1
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        sub eax, 0
        ; Exact mapped bytes 74 33: je 0x5896c5a6
        __asm _emit 0x74
        __asm _emit 0x33
        sub eax, 1
        ; Exact mapped bytes 75 3B: jne 0x5896c5b3
        __asm _emit 0x75
        __asm _emit 0x3b
        push 1
        push eax
        push eax
        push eax
        lea eax, [esp + 20h]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x5896c5b3
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [esp + 14h], 12h
        ; Exact mapped bytes 75 02: jne 0x5896c591
        __asm _emit 0x75
        __asm _emit 0x02
        xor ebp, ebp
        push 1
        push 0
        push 0
        push 0
        lea ecx, [esp + 20h]
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 75 E4: jne 0x5896c588
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes EB 0D: jmp 0x5896c5b3
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [esp + 30h]
        ; Exact mapped bytes E8 01 FD FF FF: call 0x5896c2b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5896c5b7
        __asm _emit 0x74
        __asm _emit 0x04
        test ebp, ebp
        ; Exact mapped bytes 75 AC: jne 0x5896c563
        __asm _emit 0x75
        __asm _emit 0xac
        pop esi
        pop ebp
        pop ebx
        xor eax, eax
        pop edi
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        pop edi
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
