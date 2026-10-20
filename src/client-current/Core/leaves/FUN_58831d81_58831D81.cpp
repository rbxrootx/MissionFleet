// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831D81 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_58831d81_58831D81() {
    __asm {
        push 18h
        push 588ec5e0h
        ; Exact mapped bytes E8 D3 09 00 00: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        mov dword ptr [ebp - 4], esi
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 24h], esi
        cmp esi, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 3E: je 0x58831ddb
        __asm _emit 0x74
        __asm _emit 0x3e
        sub edi, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 8], edi
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, edi
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        inc esi
        ; Exact mapped bytes EB E1: jmp 0x58831d95
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax], 0e06d7363h
        ; Exact mapped bytes 74 27: je 0x58831df4
        __asm _emit 0x74
        __asm _emit 0x27
    }
}
