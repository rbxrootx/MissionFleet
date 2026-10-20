// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419EB3 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_00419eb3_00419EB3() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 00 02 00 00: mov eax, 0x200
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 85 45 08: test dword ptr [ebp + 8], eax
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7D 0C: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 75 04: jne 0x419ecb
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 85 F8: test eax, edi
        __asm _emit 0x85
        __asm _emit 0xf8
        ; Exact mapped bytes 74 23: je 0x419eee
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 23 D0: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 68 F8 FD FF FF: push 0xfffffdf8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 51 6C: call dword ptr [ecx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0A: je 0x419eee
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes B8 FF FD FF FF: mov eax, 0xfffffdff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 21 45 08: and dword ptr [ebp + 8], eax
        __asm _emit 0x21
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 23 F8: and edi, eax
        __asm _emit 0x23
        __asm _emit 0xf8
        ; Exact mapped bytes FF 75 10: push dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes FF 76 20: push dword ptr [esi + 0x20]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x20
        ; Exact mapped bytes E8 8D 50 01 00: call 0x42ef8a
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
