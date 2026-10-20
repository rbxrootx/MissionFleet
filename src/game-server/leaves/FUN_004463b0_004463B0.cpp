// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004463B0 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_004463b0_004463B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 18h
        ; Exact mapped bytes 0F 87 CE 00 00 00: ja 0x4464a2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 24 95 A8 64 44 00: jmp dword ptr [edx*4 + 0x4464a8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, 418h
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x4464a4
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 419h
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x4464a4
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 41ah
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x4464a4
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 41bh
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x4464a4
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 41ch
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x4464a4
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 431h
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x4464a4
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 422h
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x4464a4
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 423h
        ; Exact mapped bytes EB 79: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x79
        mov eax, 424h
        ; Exact mapped bytes EB 72: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x72
        mov eax, 421h
        ; Exact mapped bytes EB 6B: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, 438h
        ; Exact mapped bytes EB 64: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x64
        mov eax, 433h
        ; Exact mapped bytes EB 5D: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov eax, 42ch
        ; Exact mapped bytes EB 56: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x56
        mov eax, 429h
        ; Exact mapped bytes EB 4F: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, 428h
        ; Exact mapped bytes EB 48: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x48
        mov eax, 440h
        ; Exact mapped bytes EB 41: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, 43ah
        ; Exact mapped bytes EB 3A: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, 435h
        ; Exact mapped bytes EB 33: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, 42eh
        ; Exact mapped bytes EB 2C: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, 42bh
        ; Exact mapped bytes EB 25: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, 443h
        ; Exact mapped bytes EB 1E: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, 442h
        ; Exact mapped bytes EB 17: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, 43ch
        ; Exact mapped bytes EB 10: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, 437h
        ; Exact mapped bytes EB 09: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 430h
        ; Exact mapped bytes EB 02: jmp 0x4464a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
