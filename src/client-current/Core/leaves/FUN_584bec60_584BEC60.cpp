// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BEC60 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_584bec60_584BEC60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 50h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 2B: jne 0x584beca3
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3b4h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F 5E FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x5e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C0 7F FC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 60: jmp 0x584bed03
        __asm _emit 0xeb
        __asm _emit 0x60
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 2B: jne 0x584becd4
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3b4h]
        mov dword ptr [ebp - 14h], eax
        push 5
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 5E FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x5e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8F 7F FC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2F: jmp 0x584bed03
        __asm _emit 0xeb
        __asm _emit 0x2f
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 29: jne 0x584bed03
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3b4h]
        mov dword ptr [ebp - 1ch], eax
        push 6
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 5D FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5E 7F FC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
