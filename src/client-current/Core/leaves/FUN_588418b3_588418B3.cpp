// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588418B3 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_588418b3_588418B3() {
    __asm {
        push ebp
        mov ebp, esp
        push -2
        push 588ecc78h
        push 5884ed90h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ecx
        sub esp, 10h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor dword ptr [ebp - 8], eax
        xor eax, ebp
        push eax
        lea eax, [ebp - 10h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], esp
        mov dword ptr [ebp - 24h], ecx
        and dword ptr [ebp - 1ch], 0
        and dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F B6 05 98 93 96 58: movzx eax, byte ptr [0x58969398]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 05: jne 0x58841904
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 6F: jmp 0x58841973
        __asm _emit 0xeb
        __asm _emit 0x6f
        and dword ptr [ebp - 4], 0
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes EB 47: jmp 0x58841970
        __asm _emit 0xeb
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 20h], eax
        xor eax, eax
    }
}
