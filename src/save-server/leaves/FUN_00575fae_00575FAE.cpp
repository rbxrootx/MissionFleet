// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00575FAE .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_00575fae_00575FAE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d4h
        mov dword ptr [ebp - 4], eax
        push 77bh
        push 67cd14h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 90 42 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x42
        __asm _emit 0xf6
        __asm _emit 0xff
        xor edx, edx
        cmp dword ptr [ebp + 0ch], 0
        setne dl
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 99 9C FD FF: call 0x54fc7b
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 6A: je 0x576052
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 51 04: call dword ptr [ecx + 4]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 1C: je 0x576019
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 78h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x575ff4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 78h], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 1F 67 F5 FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x67
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4ch], 1
        push 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 19 2C 00 00: call 0x578c6b
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        push 791h
        push 67cd14h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 FB 41 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x41
        __asm _emit 0xf6
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
