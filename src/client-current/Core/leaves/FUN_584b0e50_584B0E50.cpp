// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B0E50 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_584b0e50_584B0E50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 BE 06 00 00: call 0x584b1540
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 08: jl 0x584b0e96
        __asm _emit 0x7c
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 76 1E: jbe 0x584b0eb4
        __asm _emit 0x76
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 10h], 8007007ah
        ; Exact mapped bytes EB 25: jmp 0x584b0ed9
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 17: jne 0x584b0ed3
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 06: jmp 0x584b0ed9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 08: je 0x584b0ee7
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
