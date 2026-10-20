// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417BFC .. +0x266 bytes.
extern "C" __declspec(naked) void FUN_00417bfc_00417BFC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push edi
        push ecx
        lea edi, [ebp - 3ch]
        mov ecx, 0fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 28h
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6A FE FF FF: call 0x417aac
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 07: jne 0x417c52
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FF 01 00 00: jmp 0x417e51
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes 72 07: jb 0x417c67
        __asm _emit 0x72
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EA 01 00 00: jmp 0x417e51
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 54h]
        sub ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 7C: jne 0x417d02
        __asm _emit 0x75
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes DF 6D D4: fild qword ptr [ebp - 0x2c]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xd4
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 E0 1C 09 00: call 0x4a9984
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DC 35 28 11 58 00: fdiv qword ptr [0x581128]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 20 11 58 00: fmul qword ptr [0x581120]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DA 4D E4: fimul dword ptr [ebp - 0x1c]
        __asm _emit 0xda
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E8 41 18 09 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes DF 6D CC: fild qword ptr [ebp - 0x34]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xcc
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 A8 1C 09 00: call 0x4a9984
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DC 35 28 11 58 00: fdiv qword ptr [0x581128]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 20 11 58 00: fmul qword ptr [0x581120]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DA 4D E4: fimul dword ptr [ebp - 0x1c]
        __asm _emit 0xda
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E8 09 18 09 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 3D: jmp 0x417d3f
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes DF 6D C4: fild qword ptr [ebp - 0x3c]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xc4
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 64 1C 09 00: call 0x4a9984
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DC 35 28 11 58 00: fdiv qword ptr [0x581128]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 20 11 58 00: fmul qword ptr [0x581120]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DA 4D E4: fimul dword ptr [ebp - 0x1c]
        __asm _emit 0xda
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E8 C5 17 09 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x17
        __asm _emit 0x09
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7E 0B: jle 0x417d50
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 1D: jge 0x417d7e
        __asm _emit 0x7d
        __asm _emit 0x1d
        push 1
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 99 EE FF FF: call 0x416c10
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x417e51
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        sub eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [edx + 18h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [eax + 8], edx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 F9 A8 06 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        shl edx, 10h
        or edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 DA A8 06 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x00
        push 10h
        push 0
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 88 15 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov al, byte ptr [ebp + 10h]
        mov byte ptr [ebp - 14h], al
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        push 0
        push 10h
        lea edx, [ebp - 14h]
        push edx
        push 0
        push 1
        push 8002f009h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 F4 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E6 F3 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 1
        pop edi
        add esp, 3ch
        cmp ebp, esp
        ; Exact mapped bytes E8 84 09 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
