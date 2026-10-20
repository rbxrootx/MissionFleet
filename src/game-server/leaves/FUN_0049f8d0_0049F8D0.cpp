// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049F8D0 .. +0x1A6 bytes.
extern "C" __declspec(naked) void FUN_0049f8d0_0049F8D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57eec3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 30h
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C2 DF 04 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 85 16 09 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 09: jne 0x49f937
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 36: jmp 0x49f96d
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 6A 9E 00 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], esp
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 56 16 FF FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 AC 24 5E 00: call dword ptr [0x5e24ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 8D B0 00 00 00: jge 0x49fa40
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 80020005h
        ; Exact mapped bytes 75 3B: jne 0x49f9d4
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ecx], 0
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 8C CE 0A 00: call 0x54c842
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xce
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 80 DE 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x49fa63
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 8002000ah
        ; Exact mapped bytes 75 38: jne 0x49fa15
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [edx + 4], 80000000h
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [eax], 0
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 48 CE 0A 00: call 0x54c842
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xce
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 3C DE 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes EB 4E: jmp 0x49fa63
        __asm _emit 0xeb
        __asm _emit 0x4e
        push 5cbf54h
        push 5cbf80h
        ; Exact mapped bytes E8 F1 01 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [ebp - 18h], 8007000eh
        ; Exact mapped bytes 75 07: jne 0x49fa37
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 77 03 03 00: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x49fa40
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 4A DA 0A 00: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F8 CD 0A 00: call 0x54c842
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xcd
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 EC DD 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        lea esp, [ebp - 3ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
