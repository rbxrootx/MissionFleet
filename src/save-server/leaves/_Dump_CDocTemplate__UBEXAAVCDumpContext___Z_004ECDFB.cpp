// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ECDFB .. +0xF8 bytes.
extern "C" __declspec(naked) void _Dump_CDocTemplate__UBEXAAVCDumpContext___Z_004ECDFB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EA 0C 05 00: call 0x53dafa
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        push 676d20h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 BA 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D0 BB 03 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        add eax, 60h
        push eax
        push 676d34h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C BA 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 40 FC FD FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 1F: je 0x4ece6d
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [eax]
        push ecx
        push 676d48h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E7 B9 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E0 B9 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4ece7a
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 676d58h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D1 B9 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 8E 03 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5A: jle 0x4ecee0
        __asm _emit 0x7e
        __asm _emit 0x5a
        push 676d6ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 B9 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2C: je 0x4eced3
        __asm _emit 0x74
        __asm _emit 0x2c
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 676d80h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 B9 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FA BB 03 00: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB CE: jmp 0x4ecea1
        __asm _emit 0xeb
        __asm _emit 0xce
        push 676d8ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B B9 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        push 676d90h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E B9 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
