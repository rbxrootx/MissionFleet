// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878D430 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_5878d430() {
    __asm {
        cmp dword ptr [ecx + 1213ch], 12h
        ; Exact mapped bytes 75 41: jne 0x5878d47a
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ecx + 12108h]
        test eax, eax
        ; Exact mapped bytes 75 38: jne 0x5878d47b
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes A1 88 45 A2 58: mov eax, dword ptr [0x58a24588]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x5878d480
        __asm _emit 0x74
        __asm _emit 0x34
        cmp dword ptr [eax + 30h], 2
        ; Exact mapped bytes 75 2E: jne 0x5878d480
        __asm _emit 0x75
        __asm _emit 0x2e
        mov dword ptr [ecx + 12104h], 0
        mov dword ptr [ecx + 12108h], 1
        add ecx, 1209ch
        push 68h
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 BB 02 00: call 0x587b9020
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        ret
        cmp eax, 1
        ; Exact mapped bytes 75 FA: jne 0x5878d47a
        __asm _emit 0x75
        __asm _emit 0xfa
        ; Exact mapped bytes E9 EB D6 FF FF: jmp 0x5878ab70
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
