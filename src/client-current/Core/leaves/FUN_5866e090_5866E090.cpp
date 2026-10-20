// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866E090 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_5866e090_5866E090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x5866e0a8
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 07: jmp 0x5866e0af
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 3A: je 0x5866e0fb
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 83 3D 6C 75 94 58 00: cmp dword ptr [0x5894756c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 31: je 0x5866e0fb
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 209h
        push ecx
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 6A E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x6a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 36 7E E1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x7e
        __asm _emit 0xe1
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
