// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00576960 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_00576960_00576960() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f9d5h
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
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d8h
        mov dword ptr [ebp - 1ch], eax
        push 897h
        push 67cd14h
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 C0 38 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x38
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AC 45 FD FF: call 0x54af54
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0B B9 FF FF: call 0x5722c9
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], edx
        push 8a1h
        push 67cd14h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 86 38 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0xf6
        __asm _emit 0xff
        push 63c7a0h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A9 37 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x37
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 19: jne 0x576a09
        __asm _emit 0x75
        __asm _emit 0x19
        push 8a2h
        push 67cd14h
        ; Exact mapped bytes E8 41 23 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 01: je 0x576a09
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CB: jne 0x5769da
        __asm _emit 0x75
        __asm _emit 0xcb
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        ; Exact mapped bytes EB 4B: jmp 0x576a6b
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 636e20h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 63 37 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x37
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x576a45
        __asm _emit 0x75
        __asm _emit 0x14
        push 8a5h
        push 67cd14h
        ; Exact mapped bytes E8 00 23 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x576a45
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
