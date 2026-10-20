// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005775EA .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_005775ea_005775EA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fa2fh
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
        push ecx
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 0dch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 8007000eh
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 95 AC FF FF: call 0x5722c9
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], ecx
        push 9d1h
        push 67cd14h
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 10 2C F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x2c
        __asm _emit 0xf6
        __asm _emit 0xff
        push 63c7a0h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 33 2B F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x2b
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 19: jne 0x57767f
        __asm _emit 0x75
        __asm _emit 0x19
        push 9d2h
        push 67cd14h
        ; Exact mapped bytes E8 CB 16 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x16
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 01: je 0x57767f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CB: jne 0x577650
        __asm _emit 0x75
        __asm _emit 0xcb
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 39: jmp 0x5776c7
        __asm _emit 0xeb
        __asm _emit 0x39
        push 636e20h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F5 2A F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x2a
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5776b3
        __asm _emit 0x75
        __asm _emit 0x14
        push 9d5h
        push 67cd14h
        ; Exact mapped bytes E8 92 16 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5776b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x57768e
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D7 28 F6 FF: call 0x4d9f98
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x28
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, 5776c7h
        ret
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp - 14h], 0
    }
}
