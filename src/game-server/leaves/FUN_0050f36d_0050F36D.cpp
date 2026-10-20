// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050F36D .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_0050f36d_0050F36D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d0afh
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
        sub esp, 24h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 5c6b38h
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 61 1B 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 2ch]
        push edx
        push 0f114h
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 C0 C8 00 00: call 0x51bc7f
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f114h
        push 30h
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 DC 1B 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 AD E4 FF FF: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 D6 E2 FD FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB ED FF FF: call 0x50e1bf
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 59 E4 FD FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
