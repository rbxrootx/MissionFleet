// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CE13B .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_004ce13b_004CE13B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E0 1C 00 00: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ce16a
        __asm _emit 0x75
        __asm _emit 0x14
        push 191h
        push 5c4c5ch
        ; Exact mapped bytes E8 9B 68 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ce16a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4ce147
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 41 2D 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 05: jle 0x4ce18b
        __asm _emit 0x7e
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 35: jmp 0x4ce1c0
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 03 EF FB FF: call 0x48d0a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xef
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x4ce1b2
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0ffffffffh
        ; Exact mapped bytes EB 0B: jmp 0x4ce1bd
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
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
