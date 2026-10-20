// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00565F1A .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_00565f1a_00565F1A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        push 3eh
        push 5d0c78h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 11 52 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 9ch
        ; Exact mapped bytes E8 2F B0 FC FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x565f6f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9F B7 FE FF: call 0x55170c
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 67: jmp 0x565fd6
        __asm _emit 0xeb
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 9ch
        ; Exact mapped bytes E8 2D B0 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x565f8f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 36: jmp 0x565fc5
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 12 38 F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], esp
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 FE AF F2 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xaf
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 38 2A 5E 00: call dword ptr [0x5e2a38]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        lea esp, [ebp - 20h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
