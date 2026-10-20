// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F2C3 .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_0054f2c3_0054F2C3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 16: jne 0x54f301
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push 0
        push 0
        push 5ce53ch
        ; Exact mapped bytes FF 15 08 21 5E 00: call dword ptr [0x5e2108]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 85 01 00 00: jmp 0x54f486
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x54f317
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 11: jmp 0x54f328
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        add ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 8]
        add ecx, eax
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        add ecx, eax
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x54f36a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 28: jmp 0x54f392
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 46: mov ax, word ptr [edx + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x46
        add eax, 97h
        and al, 0fch
        ; Exact mapped bytes E8 41 A4 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], esp
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 B1 42 F5 FF: call 0x4a3640
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x42
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x54f3a7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 35: jmp 0x54f3dc
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 FB A3 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xa3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], esp
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 D7 D3 F4 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd3
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x54f3f1
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 35: jmp 0x54f426
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 B1 A3 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], esp
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 8D D3 F4 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x54f43b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 35: jmp 0x54f470
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 67 A3 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], esp
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 43 D3 F4 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd3
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes FF 15 08 21 5E 00: call dword ptr [0x5e2108]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        lea esp, [ebp - 40h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
