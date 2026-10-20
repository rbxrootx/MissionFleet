// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A0D3C .. +0x1A0 bytes.
extern "C" __declspec(naked) void FUN_004a0d3c_004A0D3C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ef2fh
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
        ; Exact mapped bytes E8 56 CB 04 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 19 02 09 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 09: jne 0x4a0da3
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 36: jmp 0x4a0dd9
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
        ; Exact mapped bytes E8 FE 89 00 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], esp
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 EA 01 FF FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x01
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
        ; Exact mapped bytes FF 15 B4 24 5E 00: call dword ptr [0x5e24b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 8D AA 00 00 00: jge 0x4a0ea6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 80020005h
        ; Exact mapped bytes 75 38: jne 0x4a0e3d
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [eax], 0
        mov dword ptr [eax + 4], 0
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 21 BD 0A 00: call 0x54cb40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xbd
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 17 CA 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x4a0ec9
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 8002000ah
        ; Exact mapped bytes 75 35: jne 0x4a0e7b
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ecx], 0
        mov dword ptr [ecx + 4], 0bff00000h
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E0 BC 0A 00: call 0x54cb40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xbc
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 D6 C9 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes EB 4E: jmp 0x4a0ec9
        __asm _emit 0xeb
        __asm _emit 0x4e
        push 5cbfech
        push 5cc018h
        ; Exact mapped bytes E8 8B ED 02 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [ebp - 18h], 8007000eh
        ; Exact mapped bytes 75 07: jne 0x4a0e9d
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 11 EF 02 00: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x4a0ea6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 E4 C5 0A 00: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc5
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 90 BC 0A 00: call 0x54cb40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 86 C9 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc9
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
