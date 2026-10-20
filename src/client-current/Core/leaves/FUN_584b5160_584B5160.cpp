// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B5160 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_584b5160_584B5160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 64h], -1
        ; Exact mapped bytes 75 16: jne 0x584b5191
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D2 1A FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3A: jmp 0x584b51cb
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 15 F9 FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 96 1A FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 80h], -1
        ; Exact mapped bytes 75 16: jne 0x584b51f6
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6D 1A FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3D: jmp 0x584b5233
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AD F8 FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2E 1A FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b4h], 1
        ; Exact mapped bytes 74 17: je 0x584b5256
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 36 09 00 00: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        ; Exact mapped bytes E8 2B 09 00 00: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 46 6B 30 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x6b
        __asm _emit 0x30
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
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
