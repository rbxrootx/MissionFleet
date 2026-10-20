// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00573C2F .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_00573c2f_00573C2F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f924h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 1ch], ecx
        push 385h
        push 67cd14h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 F9 65 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x65
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x573c81
        __asm _emit 0x75
        __asm _emit 0x14
        push 386h
        push 67cd14h
        ; Exact mapped bytes E8 C4 50 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x573c81
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x573c67
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 47 6F FA FF: call 0x51abd3
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x6f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 1C: je 0x573cd2
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 78h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 78h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x573cad
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 78h], ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 20h
        ; Exact mapped bytes E8 66 8A F5 FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x8a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 4ch], 1
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 05: jne 0x573d0f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 CD F1 F2 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf1
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 3D: jmp 0x573d4e
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 636e20h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 72 64 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x64
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x573d36
        __asm _emit 0x75
        __asm _emit 0x14
        push 399h
        push 67cd14h
        ; Exact mapped bytes E8 0F 50 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x573d36
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x573d11
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 2A 6E FA FF: call 0x51ab6f
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x6e
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        push 0
    }
}
