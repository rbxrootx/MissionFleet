// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F03E7 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_004f03e7_004F03E7() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c9bbh
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
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 39 0F 00 00: call 0x4f1347
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 582a8ch
        mov ecx, dword ptr [ebp + 8]
        shr ecx, 10h
        and ecx, 0ffffh
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x4f0457
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 F3 F9 FD FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f0457
        __asm _emit 0x75
        __asm _emit 0x14
        push 195h
        push 5c5060h
        ; Exact mapped bytes E8 AE 45 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f0457
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C1: jne 0x4f041e
        __asm _emit 0x75
        __asm _emit 0xc1
        push 20h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        push ecx
        ; Exact mapped bytes E8 03 8F FB FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 40h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 40h]
        shr ecx, 10h
        and ecx, 0ffffh
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x4f04aa
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 40: mov ax, word ptr [edx + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
