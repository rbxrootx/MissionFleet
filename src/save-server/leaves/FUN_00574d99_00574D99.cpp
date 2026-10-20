// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00574D99 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_00574d99_00574D99() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 561h
        push 67cd14h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 AB 54 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x54
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 8], edx
        push 564h
        push 67cd14h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 8C 54 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x54
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E8 80 3A F6 FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x3a
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 27: je 0x574e09
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 20h], edx
        push 0
        push 1
        push 1ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 40 68 FB FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0
        push 1
        push 6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 32 68 FB FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 5A: jmp 0x574e63
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 75 4F: jne 0x574e63
        __asm _emit 0x75
        __asm _emit 0x4f
        push 0
        push 0
        push 1ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 17 68 FB FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0
        push 0
        push 6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 09 68 FB FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7A EC F9 FF: call 0x513ab2
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xec
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 18: je 0x574e59
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 EC 00 00 00: call dword ptr [edx + 0xec]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
