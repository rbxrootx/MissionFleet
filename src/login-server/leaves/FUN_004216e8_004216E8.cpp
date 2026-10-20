// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004216E8 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_004216e8_004216E8() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43fbc0h
        push 423118h
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
        ; Exact mapped bytes A1 6C 10 45 00: mov eax, dword ptr [0x45106c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 46: jne 0x42175b
        __asm _emit 0x75
        __asm _emit 0x46
        push 9
        ; Exact mapped bytes E8 EE 0E 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        and dword ptr [ebp - 4], 0
        mov esi, dword ptr [ebp + 8]
        push esi
        ; Exact mapped bytes E8 B5 1C 00 00: call 0x4233df
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 1ch], eax
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x42173d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov esi, dword ptr [esi - 4]
        sub esi, 9
        mov dword ptr [ebp - 20h], esi
        ; Exact mapped bytes EB 03: jmp 0x421740
        __asm _emit 0xeb
        __asm _emit 0x03
        mov esi, dword ptr [ebp - 20h]
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 09 00 00 00: call 0x421752
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 55: jmp 0x4217a4
        __asm _emit 0xeb
        __asm _emit 0x55
        mov esi, dword ptr [ebp - 20h]
        push 9
        ; Exact mapped bytes E8 12 0F 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ret
        cmp eax, 2
        ; Exact mapped bytes 75 46: jne 0x4217a6
        __asm _emit 0x75
        __asm _emit 0x46
        push 9
        ; Exact mapped bytes E8 A3 0E 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 4], 1
        lea eax, [ebp - 24h]
        push eax
        lea eax, [ebp - 2ch]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 29 00 00: call 0x42413a
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], eax
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x421794
        __asm _emit 0x74
        __asm _emit 0x0b
        movzx esi, byte ptr [eax]
        shl esi, 4
        mov dword ptr [ebp - 20h], esi
        ; Exact mapped bytes EB 03: jmp 0x421797
        __asm _emit 0xeb
        __asm _emit 0x03
        mov esi, dword ptr [ebp - 20h]
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 2D 00 00 00: call 0x4217cd
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 13: jne 0x4217b9
        __asm _emit 0x75
        __asm _emit 0x13
        push dword ptr [ebp + 8]
        push 0
        ; Exact mapped bytes FF 35 68 10 45 00: push dword ptr [0x451068]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 4C C1 43 00: call dword ptr [0x43c14c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        mov eax, esi
        mov ecx, dword ptr [ebp - 10h]
    }
}
