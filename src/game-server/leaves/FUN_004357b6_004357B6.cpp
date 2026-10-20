// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004357B6 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_004357b6_004357B6() {
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
        ; Exact mapped bytes E8 12 BF 03 00: call 0x471706
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 CE 4C FD FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 B1 B7 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 E0 BA FC FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xba
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x435830
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B3 BA FC FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xba
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 38: je 0x43586e
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 2E: je 0x43586c
        __asm _emit 0x74
        __asm _emit 0x2e
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 45 4C FD FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 19 4C FD FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 0
        push 4000008h
        push 80020114h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C6 19 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB B7: jmp 0x435825
        __asm _emit 0xeb
        __asm _emit 0xb7
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 68 2F 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x2f
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
