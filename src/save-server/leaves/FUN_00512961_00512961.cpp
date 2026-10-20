// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512961 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_00512961_00512961() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x51297c
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 0ch], 8000h
        ; Exact mapped bytes 72 14: jb 0x512990
        __asm _emit 0x72
        __asm _emit 0x14
        push 28eh
        push 673dc0h
        ; Exact mapped bytes E8 B5 63 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512990
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x51296d
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes E8 17 F1 01 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 74 BE 68 00: call dword ptr [0x68be74]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 62: je 0x512a1d
        __asm _emit 0x74
        __asm _emit 0x62
        push 30h
        push 0
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 F8 2E F5 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x2e
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 37: je 0x512a1d
        __asm _emit 0x74
        __asm _emit 0x37
        lea eax, [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 8A F0 01 00: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E4 BE 68 00: call dword ptr [0x68bee4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x512a1d
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 17: je 0x512a1d
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 ED EC FB FF: call 0x4d1708
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x512a1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
