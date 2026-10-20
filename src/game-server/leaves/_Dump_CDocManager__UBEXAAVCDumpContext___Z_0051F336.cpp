// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F336 .. +0x8E bytes.
extern "C" __declspec(naked) void _Dump_CDocManager__UBEXAAVCDumpContext___Z_0051F336() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4D BF FD FF: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC 2B 01 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 5A: je 0x51f3b1
        __asm _emit 0x74
        __asm _emit 0x5a
        push 5cb97ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 57 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 1F 39 01 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2C: je 0x51f3a4
        __asm _emit 0x74
        __asm _emit 0x2c
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 81 39 01 00: call 0x532d08
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        push 5cb994h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 57 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F9 59 01 00: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB CE: jmp 0x51f372
        __asm _emit 0xeb
        __asm _emit 0xce
        push 5cb9a0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 57 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        push 5cb9a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5D 57 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
