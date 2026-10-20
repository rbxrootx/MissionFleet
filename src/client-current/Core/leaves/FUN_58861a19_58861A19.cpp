// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861A19 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_58861a19_58861A19() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        push edi
        lea eax, [ebp - 8]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push eax
        ; Exact mapped bytes 66 0F 13 45 F8: movlpd qword ptr [ebp - 8], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes FF 15 D0 43 89 58: call dword ptr [0x588943d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        sub ecx, 0d53e8000h
        push 0
        push 989680h
        sbb eax, 19db1deh
        push eax
        push ecx
        ; Exact mapped bytes E8 8D B6 01 00: call 0x5887d0e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        cmp edx, 7
        ; Exact mapped bytes 7F 0D: jg 0x58861a65
        __asm _emit 0x7f
        __asm _emit 0x0d
        ; Exact mapped bytes 7C 07: jl 0x58861a61
        __asm _emit 0x7c
        __asm _emit 0x07
        cmp eax, 93582affh
        ; Exact mapped bytes 77 04: ja 0x58861a65
        __asm _emit 0x77
        __asm _emit 0x04
        mov edi, edx
        ; Exact mapped bytes EB 07: jmp 0x58861a6c
        __asm _emit 0xeb
        __asm _emit 0x07
        or eax, 0ffffffffh
        mov edx, eax
        mov edi, eax
        mov ecx, dword ptr [ebp + 8]
        mov esi, eax
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x58861a7a
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], edx
        mov edx, edi
        mov eax, esi
        pop edi
        pop esi
        leave
        ret
    }
}
