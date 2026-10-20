// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412703 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_00412703_00412703() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0D: jne 0x41272d
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 04: jne 0x41272d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x41277e
        __asm _emit 0xeb
        __asm _emit 0x51
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0C: je 0x41273f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8A F1 FF FF: call 0x4118c9
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 74 34: je 0x41277c
        __asm _emit 0x74
        __asm _emit 0x34
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 29 00 00 00: call 0x41278e
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 56 03 00 00: call 0x412acd
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 02: jmp 0x41277e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 58 60 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x60
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
