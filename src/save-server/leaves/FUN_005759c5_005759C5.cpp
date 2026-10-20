// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005759C5 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_005759c5_005759C5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 6b9h
        push 67cd14h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 7C 48 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x48
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 75 14: jne 0x575a04
        __asm _emit 0x75
        __asm _emit 0x14
        push 6bch
        push 67cd14h
        ; Exact mapped bytes E8 41 33 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x33
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x575a04
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x5759e4
        __asm _emit 0x75
        __asm _emit 0xda
        push 640c20h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ach]
        push ecx
        ; Exact mapped bytes E8 D8 4E FD FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x575a2b
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 37: jmp 0x575a62
        __asm _emit 0xeb
        __asm _emit 0x37
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
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
