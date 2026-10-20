// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A1750 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_584a1750_584A1750() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9F 1A 00 00: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 48 0D: movsx ecx, byte ptr [eax + 0xd]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x0d
        test ecx, ecx
        ; Exact mapped bytes 75 63: jne 0x584a17f2
        __asm _emit 0x75
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 20h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 73 67 FE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 10h
        push eax
        ; Exact mapped bytes E8 04 5B FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2E 10 00 00: call 0x584a27f0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x584a17db
        __asm _emit 0x74
        __asm _emit 0x12
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 15: jmp 0x584a17f0
        __asm _emit 0xeb
        __asm _emit 0x15
        mov dword ptr [ebp - 1ch], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 92: jmp 0x584a1784
        __asm _emit 0xeb
        __asm _emit 0x92
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
