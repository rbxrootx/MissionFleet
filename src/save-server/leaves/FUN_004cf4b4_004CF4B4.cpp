// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CF4B4 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_004cf4b4_004CF4B4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4cf4d7
        __asm _emit 0x75
        __asm _emit 0x14
        push 8ch
        push 671a64h
        ; Exact mapped bytes E8 6E 98 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cf4d7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4cf4bd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 6D 00 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 41: jne 0x4cf52f
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 36 00 00: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 3D 36 00 00: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 29: je 0x4cf52f
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 95 C0 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 36eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A C1 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc1
        __asm _emit 0x05
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
