// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550FBC .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_00550fbc_00550FBC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 39 A8 FB FF: call 0x50b82a
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 90 BC 00 00 00: call dword ptr [eax + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FD FE FF FF: call 0x550f0b
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x5510da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1ch
        ; Exact mapped bytes E8 84 FF FD FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x551038
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 36: jmp 0x55106e
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 69 87 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], esp
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 55 FF F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes E8 39 45 FE FF: call 0x5355ac
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x551085
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 36: jmp 0x5510bb
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 1C 87 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], esp
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 08 FF F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        ; Exact mapped bytes E9 28 FF FF FF: jmp 0x551002
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea esp, [ebp - 2ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
