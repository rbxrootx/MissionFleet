// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00575B49 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_00575b49_00575B49() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ee0ah
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
        sub esp, 10h
        push ebx
        push esi
        push edi
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 C0 A2 F5 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa2
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x575b8a
        __asm _emit 0x75
        __asm _emit 0x14
        push 624h
        push 5cbcc4h
        ; Exact mapped bytes E8 7B EE FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xee
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x575b8a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x575b67
        __asm _emit 0x75
        __asm _emit 0xd7
        push 625h
        push 5cbcc4h
        push 24h
        ; Exact mapped bytes E8 BE 74 F7 FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1A: je 0x575bcb
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 31 FE FF FF: call 0x5759f7
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x575bd2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        push 59b7e8h
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 2D A7 F3 FF: call 0x4b0320
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa7
        __asm _emit 0xf3
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
