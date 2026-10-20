// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588306A8 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_588306a8_588306A8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push edi
        push 0
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 6D FD FF FF: call 0x58830426
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov edi, dword ptr [eax + 0ch]
        lea ebx, [eax + 8]
        test edi, edi
        ; Exact mapped bytes 74 3F: je 0x58830705
        __asm _emit 0x74
        __asm _emit 0x3f
        push esi
        mov eax, dword ptr [ebx]
        dec edi
        mov eax, dword ptr [eax + edi*4]
        mov dword ptr [ebp - 4], eax
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x58830700
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [eax]
        mov esi, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov dword ptr [ebp - 4], eax
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x58830700
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [eax]
        push 1
        mov esi, dword ptr [ecx]
        mov ecx, esi
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test edi, edi
        ; Exact mapped bytes 75 C3: jne 0x588306c7
        __asm _emit 0x75
        __asm _emit 0xc3
        pop esi
        push dword ptr [ebx]
        ; Exact mapped bytes E8 F4 8E 02 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 69 FD FF FF: call 0x5883047e
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebx
        leave
        ret
    }
}
