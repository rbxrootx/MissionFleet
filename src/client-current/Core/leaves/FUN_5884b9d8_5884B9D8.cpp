// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884B9D8 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_5884b9d8_5884B9D8() {
    __asm {
        push ebp
        mov ebp, esp
        cmp byte ptr [ecx + 14h], 0
        ; Exact mapped bytes 75 09: jne 0x5884b9ea
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ecx + 0ch], 2000000h
        ; Exact mapped bytes EB 3D: jmp 0x5884ba27
        __asm _emit 0xeb
        __asm _emit 0x3d
        xor eax, eax
        cmp dword ptr [ecx + 18h], eax
        ; Exact mapped bytes 74 18: je 0x5884ba09
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ecx + 20h]
        ; Exact mapped bytes 72 09: jb 0x5884ba02
        __asm _emit 0x72
        __asm _emit 0x09
        mov dword ptr [ecx + 0ch], 30000h
        ; Exact mapped bytes EB 25: jmp 0x5884ba27
        __asm _emit 0xeb
        __asm _emit 0x25
        mov dword ptr [ecx + 1ch], eax
        mov al, 1
        ; Exact mapped bytes EB 20: jmp 0x5884ba29
        __asm _emit 0xeb
        __asm _emit 0x20
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 74 13: je 0x5884ba20
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        push eax
        mov eax, dword ptr [ecx + 8]
        add eax, dword ptr [ebp + 8]
        push eax
        push dword ptr [ecx]
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes EB E5: jmp 0x5884ba05
        __asm _emit 0xeb
        __asm _emit 0xe5
        mov dword ptr [ecx + 0ch], 1000000h
        xor al, al
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
