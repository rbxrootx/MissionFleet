// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043553C .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_0043553c_0043553C() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 0ch], 0
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 14h]
        ; Exact mapped bytes 75 05: jne 0x435551
        __asm _emit 0x75
        __asm _emit 0x05
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 12: jmp 0x435563
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 09: je 0x435560
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 1C: jne 0x435579
        __asm _emit 0x75
        __asm _emit 0x1c
        mov esi, dword ptr [edi + 1ch]
        add esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 7D 0B: jge 0x435572
        __asm _emit 0x7d
        __asm _emit 0x0b
        push 0
        push -1
        push 9
        ; Exact mapped bytes E8 BD E2 FF FF: call 0x43382f
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 14h], esi
        mov eax, esi
        ; Exact mapped bytes EB 03: jmp 0x43557c
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
