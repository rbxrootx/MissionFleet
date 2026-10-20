// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043D440 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_0043d440_0043D440() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        mov dword ptr [ebp + 10h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7C 1A: jl 0x43d46d
        __asm _emit 0x7c
        __asm _emit 0x1a
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        cmp esi, esp
        ; Exact mapped bytes E8 7E B3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB D7: jmp 0x43d444
        __asm _emit 0xeb
        __asm _emit 0xd7
        pop esi
        cmp ebp, esp
        ; Exact mapped bytes E8 6B B3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
