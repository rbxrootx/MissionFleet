// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B9DA0 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_584b9da0_584B9DA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 7D: je 0x584b9e2c
        __asm _emit 0x74
        __asm _emit 0x7d
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 76 0C: jbe 0x584b9dc7
        __asm _emit 0x76
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584b9dd9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 4B: jae 0x584b9e2c
        __asm _emit 0x73
        __asm _emit 0x4b
        imul edx, dword ptr [ebp - 4], 60h
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 1]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5B F1 FF FF: call 0x584b8f50
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2C: je 0x584b9e2a
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 2C 06 96 58: cmp edx, dword ptr [0x5896062c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 0D: jne 0x584b9e19
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AC F7 FF FF: call 0x584b95c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cwde
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x584b9e2a
        __asm _emit 0x7c
        __asm _emit 0x11
        imul ecx, dword ptr [ebp - 4], 60h
        add ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 57 AD 00 00: call 0x584c4b80
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A4: jmp 0x584b9dd0
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
