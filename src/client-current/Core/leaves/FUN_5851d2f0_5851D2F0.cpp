// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851D2F0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5851d2f0_5851D2F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 74 04: je 0x5851d300
        __asm _emit 0x74
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 35: jmp 0x5851d335
        __asm _emit 0xeb
        __asm _emit 0x35
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 04: jne 0x5851d30a
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 2B: jmp 0x5851d335
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 05 0E 00 00: call 0x5851e120
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5851d32b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5851d332
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov al, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
