// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587488C0 .. +0x266 bytes.
extern "C" __declspec(naked) void FUN_587488c0_587488C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffeh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4c4h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 344h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 328h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 32ch], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 3A D4 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x3a
        __asm _emit 0xd4
        __asm _emit 0xff
        cdq
        mov ecx, 0ah
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 564h], edx
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 84 11 CA 02 00 00: mov word ptr [ecx + edx + 0x2ca], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 0
        mov ecx, 0ffffh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8C 02 CE 02 00 00: mov word ptr [edx + eax + 0x2ce], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ffffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 DC 02 00 00: mov word ptr [ecx + 0x2dc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 DE 02 00 00: mov word ptr [eax + 0x2de], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b0h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4bch], 64h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 560h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 348h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], eax
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 4], 5dch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4b0h], ecx
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 8], 0bb8h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4b4h], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4d4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4d8h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 45ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 468h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 470h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 34ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 324h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 318h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 314h], 0
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 334h], 3e8h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 33ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 33ch]
        mov dword ptr [eax + 320h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4e8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4d0h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 69 D5 FF: call 0x5849f4a0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x69
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 38 D4 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 CB 31 D4 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x31
        __asm _emit 0xd4
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 3200h
        div ecx
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 38 D4 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x38
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 A9 31 D4 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x31
        __asm _emit 0xd4
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 1900h
        div ecx
        mov dword ptr [ebp - 8], edx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 5F D5 FF: call 0x5849ea40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5f
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
