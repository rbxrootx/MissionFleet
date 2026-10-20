// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A000 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_0041a000_0041A000() {
    __asm {
        mov eax, 43ae3ch
        ; Exact mapped bytes E8 FE 55 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        push esi
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ecx]
        and dword ptr [ebp - 4], 0
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 90 88 00 00 00: call dword ptr [eax + 0x88]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        mov esi, dword ptr [eax - 8]
        ; Exact mapped bytes E8 75 3B 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
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
        ret
    }
}
