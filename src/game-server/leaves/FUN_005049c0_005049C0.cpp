// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005049C0 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_005049c0_005049C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 D3 02 00: call 0x531d1a
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E D3 02 00: call 0x531d1a
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        and ecx, 0ffffh
        cmp ecx, 40h
        ; Exact mapped bytes 73 23: jae 0x504a1d
        __asm _emit 0x73
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 50h]
        and edx, 0ffffh
        push edx
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A 05 00 00: call 0x504f8a
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        and ecx, 0ffffh
        cmp eax, ecx
        ; Exact mapped bytes 74 04: je 0x504a21
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 78: jmp 0x504a99
        __asm _emit 0xeb
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 50h]
        and edx, 0ffffh
        mov byte ptr [ebp + edx - 4ch], 0
        ; Exact mapped bytes E8 0F 0A 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0
        ; Exact mapped bytes E8 9C 32 04 00: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 27 6B FF FF: call 0x4fb570
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 09: jmp 0x504a57
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 22: je 0x504a7f
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        push eax
        lea ecx, [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x504a7d
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        ; Exact mapped bytes E8 94 33 04 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 1C: jmp 0x504a99
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes EB CF: jmp 0x504a4e
        __asm _emit 0xeb
        __asm _emit 0xcf
        push 0
        ; Exact mapped bytes E8 86 33 04 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [ebp - 4ch]
        push edx
        push 5c765ch
        ; Exact mapped bytes E8 81 B1 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb1
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
