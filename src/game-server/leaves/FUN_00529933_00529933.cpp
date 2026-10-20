// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00529933 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_00529933_00529933() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ddeah
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
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9E 54 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 75 5A: jne 0x5299c1
        __asm _emit 0x75
        __asm _emit 0x5a
        push 2c3h
        push 5c8f88h
        push 0ch
        ; Exact mapped bytes E8 BB 36 FC FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x36
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0D: je 0x529998
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1D 05 00 00: call 0x529eb0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x52999f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 180h
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 75 18: jne 0x5299fd
        __asm _emit 0x75
        __asm _emit 0x18
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 12: je 0x5299fd
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 0F 3A FC FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
