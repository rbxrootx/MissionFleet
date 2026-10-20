// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005613DA .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_005613da_005613DA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 04: je 0x5613ed
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 72: jmp 0x56145f
        __asm _emit 0xeb
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        push 63ccf8h
        ; Exact mapped bytes E8 05 8E F7 FF: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x56140e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x56145f
        __asm _emit 0xeb
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 74 43: je 0x56145d
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 17 00 00: call 0x562b89
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 32: je 0x56145d
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
        ; Exact mapped bytes E8 E3 A1 FC FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x56145f
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
