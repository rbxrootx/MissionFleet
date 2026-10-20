// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A562F .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_004a562f_004A562F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C0 97 02 00: call 0x4cee04
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 6779d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 31 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9C 33 08 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x33
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        push 6779e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 31 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AA 34 08 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 70h]
        push eax
        push 6779fch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BD 31 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8F 34 08 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        push 677a0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 31 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4a56b4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 10h
        ; Exact mapped bytes 7D 23: jge 0x4a56dd
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 6ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        push edx
        push 677a20h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 31 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 49 34 08 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB CE: jmp 0x4a56ab
        __asm _emit 0xeb
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 78h], 4a34d0h
        ; Exact mapped bytes 75 0F: jne 0x4a56f8
        __asm _emit 0x75
        __asm _emit 0x0f
        push 677a24h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 31 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4a5705
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 677a58h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 31 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        push 677a8ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 31 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
