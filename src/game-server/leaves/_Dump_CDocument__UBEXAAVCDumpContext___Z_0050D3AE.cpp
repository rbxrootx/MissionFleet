// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050D3AE .. +0xDE bytes.
extern "C" __declspec(naked) void _Dump_CDocument__UBEXAAVCDumpContext___Z_0050D3AE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D5 DE FE FF: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1ch
        push ecx
        push 5cbc34h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 77 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 08 06 FE FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        add edx, 20h
        push edx
        push 5cbc44h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2A 77 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 EE 05 FE FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 44h]
        push ecx
        push 5cbc58h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 77 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 55 79 02 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 24h]
        push eax
        push 5cbc68h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F5 76 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C7 79 02 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A 4B 02 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 40: jle 0x50d479
        __asm _emit 0x7e
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2C: je 0x50d479
        __asm _emit 0x74
        __asm _emit 0x2c
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        push 5cbc7ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB 76 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7D 79 02 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB CE: jmp 0x50d447
        __asm _emit 0xeb
        __asm _emit 0xce
        push 5cbc88h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 95 76 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x76
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
