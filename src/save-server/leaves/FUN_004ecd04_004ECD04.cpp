// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ECD04 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_004ecd04_004ECD04() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 60: je 0x4ecd84
        __asm _emit 0x74
        __asm _emit 0x60
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov dword ptr [ebp - 8], eax
        push 16eh
        push 676ad0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 17 D5 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xff
        push 63a218h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3A D4 FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ecd6e
        __asm _emit 0x75
        __asm _emit 0x14
        push 16fh
        push 676ad0h
        ; Exact mapped bytes E8 D7 BF 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ecd6e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4ecd49
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 B4 00 00 00: call dword ptr [eax + 0xb4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 9A: jmp 0x4ecd1e
        __asm _emit 0xeb
        __asm _emit 0x9a
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
