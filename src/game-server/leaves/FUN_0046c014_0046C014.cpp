// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046C014 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_0046c014_0046C014() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes DB 45 F8: fild dword ptr [ebp - 8]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes DB 45 F4: fild dword ptr [ebp - 0xc]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xf4
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes DB 45 F0: fild dword ptr [ebp - 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes D8 35 70 10 58 00: fdiv dword ptr [0x581070]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D8 1D 74 1C 58 00: fcomp dword ptr [0x581c74]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x74
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 06: jne 0x46c080
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 B8 F9 FF: mov ax, 0xfff9
        __asm _emit 0x66
        __asm _emit 0xb8
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 3B: jmp 0x46c0bb
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes DB 45 EC: fild dword ptr [ebp - 0x14]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xec
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes DB 45 E8: fild dword ptr [ebp - 0x18]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xe8
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes DB 45 E4: fild dword ptr [ebp - 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes D8 35 70 10 58 00: fdiv dword ptr [0x581070]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes E8 41 D4 03 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
