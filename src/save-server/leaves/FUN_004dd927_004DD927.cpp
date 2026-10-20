// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DD927 .. +0xD7 bytes.
extern "C" __declspec(naked) void FUN_004dd927_004DD927() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e3a4h
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
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 40 6E 04 00: call 0x524790
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0ch
        ; Exact mapped bytes E8 A5 73 04 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax], 639f54h
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C8 5A FC FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4dd98f
        __asm _emit 0x75
        __asm _emit 0x11
        push 4fh
        push 677f28h
        ; Exact mapped bytes E8 B6 B3 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd98f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4dd96f
        __asm _emit 0x75
        __asm _emit 0xda
        push 0
        push -1
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 9E 70 04 00: call 0x524a41
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F8 01 00 00: call 0x4ddbb3
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x4dd9d5
        __asm _emit 0x75
        __asm _emit 0x16
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E3 73 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 9B CE FF FF: call 0x4da870
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 DE 70 04 00: call 0x524abf
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 28h]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
