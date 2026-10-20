// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052F00D .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_0052f00d_0052F00D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 28h], ecx
        push 6
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 10 66 00 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        push 21h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 20h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 F6 65 00 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C EC 5D 00: mov eax, dword ptr [0x5dec3c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 8B 0D 38 EC 5D 00: mov ecx, dword ptr [0x5dec38]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        sub ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F5 6C 00 00: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8C FD FB FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 40600h
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x52f091
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        sub edx, dword ptr [ebp - 18h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 89 70 00 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E0 D2 00 00: call 0x53c379
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C6 6E 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 08 99 00 00: call 0x5389b5
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0C D3 00 00: call 0x53c3c5
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
