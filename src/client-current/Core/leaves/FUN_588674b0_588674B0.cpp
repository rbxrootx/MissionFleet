// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588674B0 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_588674b0_588674B0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov ecx, dword ptr [ebp + 10h]
        mov byte ptr [ebp - 4], 0
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x588674d0
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 63: jmp 0x58867533
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes 83 3D 80 99 96 58 00: cmp dword ptr [0x58969980], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x588674ec
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes A1 18 75 90 58: mov eax, dword ptr [0x58907518]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 1C 75 90 58: mov ecx, dword ptr [0x5890751c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 47: jmp 0x58867533
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes E8 AF 16 00 00: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [ebp - 8], ecx
        lea ecx, [ebp - 0ch]
        push ecx
        push eax
        ; Exact mapped bytes E8 17 5A 00 00: call 0x5886cf21
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 69 5A 00 00: call 0x5886cf7f
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add esp, 10h
        mov eax, dword ptr [ecx + 350h]
        test al, 2
        ; Exact mapped bytes 75 0D: jne 0x58867533
        __asm _emit 0x75
        __asm _emit 0x0d
        or eax, 2
        mov dword ptr [ecx + 350h], eax
        mov byte ptr [ebp - 4], 1
        lea eax, [ebp - 0ch]
        push eax
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE FC FF FF: call 0x58867240
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x58867555
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 10h]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov esp, ebp
        pop ebp
        ret
    }
}
