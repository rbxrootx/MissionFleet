// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056203A .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_0056203a_0056203A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9F 08 FE FF: call 0x54290a
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 5ce74ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C 2A FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6E 2D FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        push 5ce760h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 2A FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 92 2C FD FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov al, byte ptr [edx + 42h]
        push eax
        push 5ce774h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 66 2A FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9D 2B FD FF: call 0x534c59
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 24h
        push edx
        ; Exact mapped bytes FF 15 24 2A 5E 00: call dword ptr [0x5e2a24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 6C: jne 0x562144
        __asm _emit 0x75
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x5620ed
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 35: jmp 0x562122
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 B5 76 F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x76
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], esp
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 91 A6 F3 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa6
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 5ce788h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 29 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 29 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 34h]
        push eax
        push 5ce794h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 29 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 2C FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 38h]
        push edx
        push 5ce7a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 29 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED 2B FD FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 3ch]
        push ecx
        push 5ce7c0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D 29 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 86 29 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov al, byte ptr [edx + 40h]
        push eax
        push 5ce7d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 29 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 2A FD FF: call 0x534c59
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov dl, byte ptr [ecx + 41h]
        push edx
        push 5ce7ech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 29 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8E 2A FD FF: call 0x534c59
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        push 5ce800h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 29 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        lea esp, [ebp - 20h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
