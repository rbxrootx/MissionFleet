// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466810 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_00466810_00466810() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63e180h
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
        add esp, -0ch
        push ebx
        push esi
        push edi
        push 9
        ; Exact mapped bytes E8 76 A0 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 77 00 00 00: call 0x4668d0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x46686d
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x466878
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}
