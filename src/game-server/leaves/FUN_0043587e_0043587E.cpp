// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043587E .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_0043587e_0043587E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes E8 C2 BE 03 00: call 0x47177e
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 06 4C FD FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 E9 B6 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 18 BA FC FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xba
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x4358f8
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EB B9 FC FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 38: je 0x435936
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 2E: je 0x435934
        __asm _emit 0x74
        __asm _emit 0x2e
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 7D 4B FD FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 51 4B FD FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 0
        push 4000009h
        push 80020114h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FE 18 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB B7: jmp 0x4358ed
        __asm _emit 0xeb
        __asm _emit 0xb7
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 A0 2E 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x2e
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
