// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FD530 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_004fd530_004FD530() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0fh
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 28h], eax
        push 10h
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ch], eax
        push 14h
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], eax
        push 12h
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 34h], eax
        push 6
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 38h], eax
        push 0fh
        ; Exact mapped bytes FF 15 7C 28 5E 00: call dword ptr [0x5e287c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 75 11: jne 0x4fd5a8
        __asm _emit 0x75
        __asm _emit 0x11
        push 78h
        push 5ca20ch
        ; Exact mapped bytes E8 5D 74 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd5a8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4fd58e
        __asm _emit 0x75
        __asm _emit 0xe0
        push 6
        ; Exact mapped bytes FF 15 7C 28 5E 00: call dword ptr [0x5e287c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20h], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 11: jne 0x4fd5d6
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ah
        push 5ca20ch
        ; Exact mapped bytes E8 2F 74 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd5d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4fd5bc
        __asm _emit 0x75
        __asm _emit 0xe0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
