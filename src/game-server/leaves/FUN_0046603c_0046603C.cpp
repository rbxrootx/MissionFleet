// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046603C .. +0x157 bytes.
extern "C" __declspec(naked) void FUN_0046603c_0046603C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 2A: mov cx, word ptr [eax + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x2a
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes DB 45 F0: fild dword ptr [ebp - 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes DB 45 EC: fild dword ptr [ebp - 0x14]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes DE F9: fdivp st(1)
        __asm _emit 0xde
        __asm _emit 0xf9
        ; Exact mapped bytes D9 5D F8: fstp dword ptr [ebp - 8]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xf8
        ; Exact mapped bytes D9 45 F8: fld dword ptr [ebp - 8]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes DC 1D 68 11 58 00: fcomp qword ptr [0x581168]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 21: jne 0x4660bb
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes DB 45 E8: fild dword ptr [ebp - 0x18]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes DC 0D 68 11 58 00: fmul qword ptr [0x581168]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 48 34 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 41 0C: mov word ptr [ecx + 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 8A B4 1D 00 00: mov word ptr [edx + 0x1db4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xb4
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 8A B6 1D 00 00: mov word ptr [edx + 0x1db6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xb6
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 8A B8 1D 00 00: mov word ptr [edx + 0x1db8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xb8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 8A BA 1D 00 00: mov word ptr [edx + 0x1dba], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xba
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 8A BC 1D 00 00: mov word ptr [edx + 0x1dbc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xbc
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 89 8A BE 1D 00 00: mov word ptr [edx + 0x1dbe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xbe
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        cmp eax, edx
        ; Exact mapped bytes 7C 0D: jl 0x466142
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 89 50 08: mov word ptr [eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        add ecx, 5
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        cmp ecx, eax
        ; Exact mapped bytes 7C 0E: jl 0x466169
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 41 0A: mov word ptr [ecx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        cmp edx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x46618d
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 89 4A 0C: mov word ptr [edx + 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x0c
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
