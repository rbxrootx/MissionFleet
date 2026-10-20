// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567211 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_00567211_00567211() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ebf7h
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
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        push 5bh
        push 678f7ch
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 1E 30 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        push 60h
        push 678f7ch
        push 38h
        ; Exact mapped bytes E8 AF 4E F6 FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4e
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 24: je 0x567284
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 41 FD FF FF: call 0x566fc0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x56728b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 11: jne 0x5672b5
        __asm _emit 0x75
        __asm _emit 0x11
        push 61h
        push 678f7ch
        ; Exact mapped bytes E8 90 1A FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5672b5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x56729e
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 11: je 0x5672d5
        __asm _emit 0x74
        __asm _emit 0x11
        push 62h
        push 678f7ch
        ; Exact mapped bytes E8 70 1A FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x1a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5672d5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5672bb
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [eax + 28h], edx
        push 66h
        push 678f7ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 69 2F F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
