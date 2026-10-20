// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58762720 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_58762720_58762720() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 87 42 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x42
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 40h
        ; Exact mapped bytes 7C 57: jl 0x58762795
        __asm _emit 0x7c
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 42 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x42
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 42 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x42
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 16 30 D3 FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x30
        __asm _emit 0xd3
        __asm _emit 0xff
        sub eax, 96h
        cmp esi, eax
        ; Exact mapped bytes 7F 32: jg 0x58762795
        __asm _emit 0x7f
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 99 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x99
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 40h
        ; Exact mapped bytes 7C 25: jl 0x58762795
        __asm _emit 0x7c
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 99 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x99
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 42 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x42
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 2F D3 FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2f
        __asm _emit 0xd3
        __asm _emit 0xff
        sub eax, 96h
        cmp esi, eax
        ; Exact mapped bytes 7E 07: jle 0x5876279c
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 8]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
