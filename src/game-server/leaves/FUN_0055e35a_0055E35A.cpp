// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E35A .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_0055e35a_0055E35A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 04: je 0x55e36d
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 72: jmp 0x55e3df
        __asm _emit 0xeb
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        push 58a6d0h
        ; Exact mapped bytes E8 85 CD F9 FF: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x55e38e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x55e3df
        __asm _emit 0xeb
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 74 43: je 0x55e3dd
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 17 00 00: call 0x55fb09
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 32: je 0x55e3dd
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        shl ecx, 10h
        or eax, ecx
        push eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        push 117h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 03 D8 FD FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x55e3df
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
