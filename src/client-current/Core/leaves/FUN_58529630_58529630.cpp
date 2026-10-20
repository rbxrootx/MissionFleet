// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58529630 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_58529630_58529630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        xor eax, eax
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 28h], 2
        mov dword ptr [ebp - 24h], 1
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 6C 45 89 58: call dword ptr [0x5889456c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x585296b6
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 60 45 89 58: call dword ptr [0x58894560]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 589474d8h
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 70 45 89 58: call dword ptr [0x58894570]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, 589474d8h
        ; Exact mapped bytes EB 02: jmp 0x585296b8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
