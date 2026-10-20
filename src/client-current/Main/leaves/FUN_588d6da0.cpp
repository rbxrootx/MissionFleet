// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D6DA0 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_588d6da0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        ; Exact mapped bytes 8B 15 A4 46 A2 58: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 160h], eax
        ; Exact mapped bytes 7E 18: jle 0x588d6dca
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x588d6dca
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [edx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x588d6dca
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [edx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588d6dcc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ecx + 6100h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x588d6e01
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
