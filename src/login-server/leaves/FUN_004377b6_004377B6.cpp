// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004377B6 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_004377b6_004377B6() {
    __asm {
        mov eax, 43b105h
        ; Exact mapped bytes E8 48 7E FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        push 0ch
        ; Exact mapped bytes E8 23 61 FF FF: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        mov dword ptr [ebp - 10h], esi
        and dword ptr [ebp - 4], 0
        test esi, esi
        ; Exact mapped bytes 74 13: je 0x4377ea
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, esi
        ; Exact mapped bytes E8 32 AF FF FF: call 0x432710
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [esi + 8], 0
        mov dword ptr [esi], 43f0dch
        ; Exact mapped bytes EB 02: jmp 0x4377ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [ebp + 8]
        or dword ptr [ebp - 4], 0ffffffffh
        mov dword ptr [esi + 8], eax
        lea eax, [ebp + 8]
        push 445600h
        push eax
        mov dword ptr [ebp + 8], esi
        ; Exact mapped bytes E8 20 7E FE FF: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
