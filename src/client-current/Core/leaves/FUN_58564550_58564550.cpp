// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58564550 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_58564550_58564550() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 104h], 55555555h
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 24 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], eax
        ; Exact mapped bytes 75 20: jne 0x5856459c
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 104h
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 98 FE FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 79 07: jns 0x585645b4
        __asm _emit 0x79
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x585645cf
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 40000000h
        ; Exact mapped bytes EB 07: jmp 0x585645d6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 0f8h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0f8h], 0
        ; Exact mapped bytes 75 10: jne 0x585645fe
        __asm _emit 0x75
        __asm _emit 0x10
        cmp dword ptr [ebp - 0ch], 40000000h
        ; Exact mapped bytes 75 07: jne 0x585645fe
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
