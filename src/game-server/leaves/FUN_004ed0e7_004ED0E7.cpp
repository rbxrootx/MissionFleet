// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED0E7 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_004ed0e7_004ED0E7() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 27: je 0x4ed117
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E8 CB 5D 00: call dword ptr [0x5dcbe8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes EB 4D: jmp 0x4ed164
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        and edx, 0ffffh
        xor eax, eax
        cmp edx, 4
        sete al
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 44 4A 5C 00: call dword ptr [0x5c4a44]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x5c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x4ed162
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 E8 CB 5D 00: call dword ptr [0x5dcbe8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes EB 02: jmp 0x4ed164
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ret
    }
}
