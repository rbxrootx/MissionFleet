// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004175F7 .. +0x243 bytes.
extern "C" __declspec(naked) void FUN_004175f7_004175F7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + edx*4 + 78h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 28h
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 46 04 00 00: call 0x417aac
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x41767b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D 5B 01 00 00: jge 0x4177e0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 0ah
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 84 0A 2E 01 00 00: mov ax, word ptr [edx + ecx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 5
        ; Exact mapped bytes 0F 85 33 01 00 00: jne 0x4177db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 0ah
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 84 0A 30 01 00 00: mov ax, word ptr [edx + ecx + 0x130]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0bh
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x4177db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 0ah
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + ecx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AC 03 00 00: call 0x417aac
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 0ah
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + ecx + 130h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 90 03 00 00: call 0x417aac
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 0ah
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        mov al, byte ptr [edx + ecx + 134h]
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 0ah
        mov edx, dword ptr [ebp - 14h]
        xor ebx, ebx
        mov bl, byte ptr [edx + ecx + 135h]
        add eax, ebx
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 41 C6 00 00 00: mov dx, word ptr [ecx + eax*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 1E: mov cx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1e
        sub edx, ecx
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes DB 45 CC: fild dword ptr [ebp - 0x34]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes DD 5D DC: fstp qword ptr [ebp - 0x24]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 1E: mov ax, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1e
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes DB 45 C8: fild dword ptr [ebp - 0x38]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes DF 6D C0: fild qword ptr [ebp - 0x40]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xc0
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes DC 6D DC: fsubr qword ptr [ebp - 0x24]
        __asm _emit 0xdc
        __asm _emit 0x6d
        __asm _emit 0xdc
        ; Exact mapped bytes DD 5D DC: fstp qword ptr [ebp - 0x24]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xdc
        ; Exact mapped bytes DD 45 DC: fld qword ptr [ebp - 0x24]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes DC 1D 18 11 58 00: fcomp qword ptr [0x581118]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 32: jne 0x4177db
        __asm _emit 0x75
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 1E: mov ax, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1e
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes DB 45 BC: fild dword ptr [ebp - 0x44]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes DC 7D DC: fdivr qword ptr [ebp - 0x24]
        __asm _emit 0xdc
        __asm _emit 0x7d
        __asm _emit 0xdc
        ; Exact mapped bytes DC 0D 10 11 58 00: fmul qword ptr [0x581110]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 36 1D 09 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2ch]
        imul edx, dword ptr [ecx + 70h]
        mov eax, dword ptr [ebp - 1ch]
        add eax, edx
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E9 92 FE FF FF: jmp 0x417672
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 16: jne 0x4177fc
        __asm _emit 0x75
        __asm _emit 0x16
        push 4
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AE F3 FF FF: call 0x416ba6
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 2C: jmp 0x417828
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 73 16: jae 0x417823
        __asm _emit 0x73
        __asm _emit 0x16
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 87 F3 FF FF: call 0x416ba6
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x417828
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 AC 0F 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x0f
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
