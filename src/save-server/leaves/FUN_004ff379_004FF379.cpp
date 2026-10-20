// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF379 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_004ff379_004FF379() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        push 1e6h
        push 6756ach
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 CB AE FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        sub esp, 8
        mov ecx, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 14 2B 03 00: call 0x531eb9
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 74 0A: je 0x4ff3c3
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        add eax, 10000h
        ; Exact mapped bytes EB 33: jmp 0x4ff3f6
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4ff3ec
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        add edx, 50000h
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 07: jmp 0x4ff3f3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
