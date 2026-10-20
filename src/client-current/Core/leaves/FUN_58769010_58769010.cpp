// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58769010 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_58769010_58769010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC C6 D2 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F6 66 DA FF: call 0x5850f730
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x66
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x587690e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 60 C0 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc0
        __asm _emit 0xd3
        __asm _emit 0xff
        shl eax, 1
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 6220h]
        ; Exact mapped bytes 7E 78: jle 0x587690d5
        __asm _emit 0x7e
        __asm _emit 0x78
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5876906f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 16: jge 0x5876908b
        __asm _emit 0x7d
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6224h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 02: jne 0x58769089
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x5876908b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB DB: jmp 0x58769066
        __asm _emit 0xeb
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x587690a0
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        imul ecx, eax, 32h
        lea edx, [edx + ecx - 19h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        imul edx, eax, 14h
        lea eax, [ecx + edx - 46h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE E8 DA FF: call 0x585179a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x587690de
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 00 DB FF: call 0x585191d0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x587690e9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 00 DB FF: call 0x585191d0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
