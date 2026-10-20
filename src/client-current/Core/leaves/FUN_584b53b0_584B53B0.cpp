// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B53B0 .. +0x13A bytes.
extern "C" __declspec(naked) void FUN_584b53b0_584B53B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 64h], -1
        ; Exact mapped bytes 75 16: jne 0x584b53e0
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 18 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x584b5419
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C7 F6 FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 48 18 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 80h], -1
        ; Exact mapped bytes 75 16: jne 0x584b5443
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 20 18 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3C: jmp 0x584b547f
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 61 F6 FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E2 17 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b4h], 1
        ; Exact mapped bytes 74 17: je 0x584b54a2
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 EA 06 00 00: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        ; Exact mapped bytes E8 DF 06 00 00: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 FA 68 30 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
