// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DDDA .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_0042ddda_0042DDDA() {
    __asm {
        mov eax, 43a73bh
        ; Exact mapped bytes E8 24 18 FF FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        push ecx
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        and dword ptr [ebp - 14h], 0
        push esi
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp + 10h], 0
        push 1
        pop esi
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes 75 04: jne 0x42de03
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 09: jmp 0x42de0c
        __asm _emit 0xeb
        __asm _emit 0x09
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx]
        push eax
        push ecx
        push dword ptr [ecx - 8]
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7B FF FF FF: call 0x42dd9c
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 F3 FA FF FF: call 0x42d920
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], esi
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6F FD FF FF: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
