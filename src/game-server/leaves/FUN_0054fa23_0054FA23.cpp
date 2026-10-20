// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054FA23 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_0054fa23_0054FA23() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f7edh
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
        sub esp, 18h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 02: jl 0x54fa46
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 40: jmp 0x54fa86
        __asm _emit 0xeb
        __asm _emit 0x40
        push 0
        push -1
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 ED 11 FE FF: call 0x530c41
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 93 FE FF FF: call 0x54f8fb
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 39 C0 FA FF: call 0x4fbab0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 39 12 FE FF: call 0x530cbf
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
