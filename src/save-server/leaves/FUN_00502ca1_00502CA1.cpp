// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00502CA1 .. +0x1F5 bytes.
extern "C" __declspec(naked) void FUN_00502ca1_00502CA1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 BA D8 FF FF: call 0x500570
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 80h]
        push edx
        push 6757f8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7E 5B 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 27 5D 02 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        push 67580ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 63 5B 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0C 5D 02 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 675824h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 5B 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F1 5C 02 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 90h]
        mov eax, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        push 67583ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 5B 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 16 2E FE FF: call 0x4e5b50
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        push 675850h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E7 5A 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E6 2D FE FF: call 0x4e5b50
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 2F 02 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 09 01 00 00: jle 0x502e83
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 4], edx
        push 0
        push 0
        push 418h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x502dac
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 8D CB 00 00 00: jge 0x502e83
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 27 DB FF FF: call 0x5008ef
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        push 675874h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 675860h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D 5A 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B2 5C 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5F 5A 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        push edx
        push 67587ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E 5A 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 93 5C 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 17h]
        and eax, 0ffh
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0ffh
        shl ecx, 10h
        or eax, ecx
        push eax
        push 675888h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 5A 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 00 5C 02 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 17h]
        and edx, 0ffh
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 1A: je 0x502e59
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 20h]
        push eax
        push 675894h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 59 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 40 5C 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x502e71
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 6758b4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E1 59 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 26 5C 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        push 6758d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 59 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 20 FF FF FF: jmp 0x502da3
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 6758dch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 59 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
