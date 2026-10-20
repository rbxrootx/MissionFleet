// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D5290 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_585d5290_585D5290() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, 200h
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 77 53: ja 0x585d5307
        __asm _emit 0x77
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 85 10 53 5D 58: jmp dword ptr [eax*4 + 0x585d5310]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x53
        __asm _emit 0x5d
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 00 00 00: call 0x585d5340
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3A: jmp 0x585d5307
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 13 00 00: call 0x585d66a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2B: jmp 0x585d5307
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 11 00 00: call 0x585d6430
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x585d5307
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 10 00 00: call 0x585d6350
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0D: jmp 0x585d5307
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 1B 00 00: call 0x585d6e20
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
