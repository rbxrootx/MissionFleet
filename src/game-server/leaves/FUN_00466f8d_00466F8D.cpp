// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466F8D .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_00466f8d_00466F8D() {
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
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1b0h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 E8 80 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x467060
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 16ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 06 FE FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        and edx, 0ffffh
        cmp edx, 8
        ; Exact mapped bytes 75 64: jne 0x467060
        __asm _emit 0x75
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 120h], 0
        ; Exact mapped bytes 76 26: jbe 0x46702e
        __asm _emit 0x76
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes DF 6D EC: fild qword ptr [ebp - 0x14]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xec
        ; Exact mapped bytes DC C0: fadd st(0), st(0)
        __asm _emit 0xdc
        __asm _emit 0xc0
        ; Exact mapped bytes E8 D7 24 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 120h], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 13ch], 0
        ; Exact mapped bytes 76 26: jbe 0x467060
        __asm _emit 0x76
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 13ch]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes DF 6D E4: fild qword ptr [ebp - 0x1c]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xe4
        ; Exact mapped bytes DC C0: fadd st(0), st(0)
        __asm _emit 0xdc
        __asm _emit 0xc0
        ; Exact mapped bytes E8 A5 24 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 13ch], eax
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 76 17 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
