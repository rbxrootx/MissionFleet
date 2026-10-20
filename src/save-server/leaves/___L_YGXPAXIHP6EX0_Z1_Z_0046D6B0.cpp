// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046D6B0 .. +0x71 bytes.
extern "C" __declspec(naked) void ___L_YGXPAXIHP6EX0_Z1_Z_0046D6B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63ecb0h
        push 46d504h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, -10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x46d6f3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7D 11: jge 0x46d70c
        __asm _emit 0x7d
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB DE: jmp 0x46d6ea
        __asm _emit 0xeb
        __asm _emit 0xde
        mov dword ptr [ebp - 20h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x46d721
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x46d73d
        __asm _emit 0xeb
        __asm _emit 0x1c
    }
}
