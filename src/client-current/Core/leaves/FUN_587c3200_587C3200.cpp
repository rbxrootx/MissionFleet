// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3200 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_587c3200_587C3200() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889237dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        push 4
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 20 08 00 00: call 0x587c3a50
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588be374h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 20h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 28h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 18h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C2 01 00 00: call 0x587c3450
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0D: je 0x587c32a2
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DF 02 00 00: call 0x587c3580
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
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
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
