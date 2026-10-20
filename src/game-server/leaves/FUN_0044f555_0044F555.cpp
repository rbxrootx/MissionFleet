// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044F555 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_0044f555_0044F555() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 10h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x44f5a7
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 0
        push 0
        push 1
        push 0
        ; Exact mapped bytes FF 15 08 24 5E 00: call dword ptr [0x5e2408]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 45 92 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x92
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx*4 + 5d7b80h], eax
        ; Exact mapped bytes EB CD: jmp 0x44f574
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 38h], 0
        push 400h
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 40h
        push ecx
        ; Exact mapped bytes E8 AC 9D 05 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9d
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        add edx, 40h
        mov esi, esp
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 38h]
        push ecx
        ; Exact mapped bytes FF 15 5C 24 5E 00: call dword ptr [0x5e245c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FC 91 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x91
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x44f5f6
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 0
        push 5b7154h
        ; Exact mapped bytes E8 8B E2 0B 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, 40h
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 3ch
        ; Exact mapped bytes E8 F5 E4 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe4
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b7170h
        mov ecx, dword ptr [ebp - 8]
        add ecx, 3ch
        ; Exact mapped bytes E8 3D E9 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 3ch
        ; Exact mapped bytes E8 83 19 0E 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x19
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AB 91 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x91
        __asm _emit 0x05
        __asm _emit 0x00
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 A0 91 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x91
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
