// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434D4F .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_00434d4f_00434D4F() {
    __asm {
        mov eax, 43a7d4h
        ; Exact mapped bytes E8 AF A8 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push dword ptr [ebp + 8]
        and dword ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0C D8 FF FF: call 0x43257d
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        cmp eax, -1
        ; Exact mapped bytes 75 03: jne 0x434d7c
        __asm _emit 0x75
        __asm _emit 0x03
        mov eax, dword ptr [ebp + 8]
        push esi
        push eax
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8E FF FF FF: call 0x434d17
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        mov esi, eax
        ; Exact mapped bytes E8 14 8E FF FF: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, esi
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
