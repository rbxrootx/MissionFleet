// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58521560 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_58521560_58521560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF 7C FE FF: call 0x58509240
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7C 23: jl 0x585215a0
        __asm _emit 0x7c
        __asm _emit 0x23
        ; Exact mapped bytes 7F 06: jg 0x58521585
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes 76 1B: jbe 0x585215a0
        __asm _emit 0x76
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 EC FF FF: call 0x58520270
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [eax]
        movzx ecx, al
        push ecx
        ; Exact mapped bytes E8 E8 3E FE FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 45: jmp 0x585215e5
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 FC FF FF: call 0x585212a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 40 92 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 F0 99 FE FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x585215d4
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes E8 21 92 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x585215df
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 FF FF FF: call 0x58521500
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
