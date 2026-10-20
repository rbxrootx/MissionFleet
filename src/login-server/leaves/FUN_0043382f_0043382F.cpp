// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043382F .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_0043382f_0043382F() {
    __asm {
        mov eax, 43b2c4h
        ; Exact mapped bytes E8 CF BD FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push ecx
        push esi
        push 14h
        ; Exact mapped bytes E8 A9 A0 FF FF: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        mov dword ptr [ebp - 14h], esi
        and dword ptr [ebp - 4], 0
        test esi, esi
        ; Exact mapped bytes 74 31: je 0x433882
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, esi
        ; Exact mapped bytes E8 B8 EE FF FF: call 0x432710
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        lea ecx, [esi + 10h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp + 8]
        push dword ptr [ebp + 10h]
        mov dword ptr [esi + 8], eax
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [ebp - 4], 2
        mov dword ptr [esi], 43f18ch
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes E8 B4 A4 FF FF: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x433884
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        or dword ptr [ebp - 4], 0ffffffffh
        lea eax, [ebp - 10h]
        push 445a40h
        push eax
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 8E BD FE FF: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
