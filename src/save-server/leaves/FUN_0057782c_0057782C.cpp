// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057782C .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_0057782c_0057782C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fa43h
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
        ; Exact mapped bytes E8 53 AA FF FF: call 0x5722c9
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], ecx
        push 9fdh
        push 67cd14h
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 CE 29 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x29
        __asm _emit 0xf6
        __asm _emit 0xff
        push 63c7a0h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F1 28 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x28
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 19: jne 0x5778c1
        __asm _emit 0x75
        __asm _emit 0x19
        push 9feh
        push 67cd14h
        ; Exact mapped bytes E8 89 14 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 01: je 0x5778c1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CB: jne 0x577892
        __asm _emit 0x75
        __asm _emit 0xcb
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 39: jmp 0x577909
        __asm _emit 0xeb
        __asm _emit 0x39
        push 636e20h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B3 28 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x28
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5778f5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a01h
        push 67cd14h
        ; Exact mapped bytes E8 50 14 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x14
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5778f5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5778d0
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 95 26 F6 FF: call 0x4d9f98
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x26
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, 577909h
        ret
        mov dword ptr [ebp - 4], 0ffffffffh
    }
}
