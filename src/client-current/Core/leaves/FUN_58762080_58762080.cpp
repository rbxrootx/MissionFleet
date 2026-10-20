// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58762080 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_58762080_58762080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 35 AD FA FF: call 0x5870cde0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xad
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 7F 21: jg 0x587620d4
        __asm _emit 0x7f
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7C 19: jl 0x587620d4
        __asm _emit 0x7c
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7F 11: jg 0x587620d4
        __asm _emit 0x7f
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7C 09: jl 0x587620d4
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 07: jmp 0x587620db
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 68 EF 0C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xef
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
