// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054DD33 .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_0054dd33_0054DD33() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 16: jne 0x54dd71
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push 0
        push 0
        push 67ad14h
        ; Exact mapped bytes FF 15 24 B4 68 00: call dword ptr [0x68b424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 85 01 00 00: jmp 0x54def6
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
        ; Exact mapped bytes 75 09: jne 0x54dd87
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 11: jmp 0x54dd98
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
        ; Exact mapped bytes 75 09: jne 0x54ddda
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 28: jmp 0x54de02
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
        ; Exact mapped bytes E8 B1 81 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], esp
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 51 1E F1 FF: call 0x45fc50
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x1e
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x54de17
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 35: jmp 0x54de4c
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 6B 81 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], esp
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 87 AF F0 FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xaf
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x54de61
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 35: jmp 0x54de96
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 21 81 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], esp
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 3D AF F0 FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xaf
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x54deab
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 35: jmp 0x54dee0
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 D7 80 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x80
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], esp
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 F3 AE F0 FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xae
        __asm _emit 0xf0
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
        ; Exact mapped bytes FF 15 24 B4 68 00: call dword ptr [0x68b424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0x68
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
