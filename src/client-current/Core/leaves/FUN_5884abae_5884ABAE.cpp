// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884ABAE .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_5884abae_5884ABAE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        lea eax, [ebp - 14h]
        push eax
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 18 43 89 58: call dword ptr [0x58894318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 4D EC: mov cx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        mov eax, 7b2h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 73 16: jae 0x5884abf1
        __asm _emit 0x73
        __asm _emit 0x16
        xor edx, edx
        mov ecx, eax
        inc edx
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 66 8B F2: mov si, dx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes 66 89 55 EE: mov word ptr [ebp - 0x12], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xee
        ; Exact mapped bytes 66 89 75 F2: mov word ptr [ebp - 0xe], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes EB 08: jmp 0x5884abf9
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 75 F2: mov si, word ptr [ebp - 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes 66 8B 55 EE: mov dx, word ptr [ebp - 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xee
        mov eax, 7f6h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 72 15: jb 0x5884ac18
        __asm _emit 0x72
        __asm _emit 0x15
        push 0ch
        pop edx
        push 1fh
        lea ecx, [eax - 1]
        ; Exact mapped bytes 66 89 55 EE: mov word ptr [ebp - 0x12], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xee
        pop esi
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 66 89 75 F2: mov word ptr [ebp - 0xe], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xf2
        movzx eax, word ptr [ebp - 8]
        and dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 38h], eax
        movzx eax, word ptr [ebp - 0ah]
        mov dword ptr [ebp - 34h], eax
        movzx eax, word ptr [ebp - 0ch]
        mov dword ptr [ebp - 30h], eax
        movzx eax, si
        mov dword ptr [ebp - 2ch], eax
        movzx eax, dx
        dec eax
        mov dword ptr [ebp - 28h], eax
        movzx eax, cx
        sub eax, 76ch
        mov dword ptr [ebp - 24h], eax
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 E9 08 01 00: call 0x5885b53b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 F2 63 FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
