// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585651E0 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_585651e0_585651E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 31ch]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 31ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3d0h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3d0h], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 104h], 55555555h
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F 17 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x17
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], eax
        ; Exact mapped bytes 75 20: jne 0x5856525c
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
        ; Exact mapped bytes E8 65 8B FE FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 36: jne 0x58565298
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 31ch]
        sub ecx, dword ptr [eax + 0e0h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 31ch], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 31ch], 0
        ; Exact mapped bytes 7D 0D: jge 0x58565296
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 31ch], 0
        ; Exact mapped bytes EB 3A: jmp 0x585652d2
        __asm _emit 0xeb
        __asm _emit 0x3a
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 34: jne 0x585652d2
        __asm _emit 0x75
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 3d0h]
        sub ecx, dword ptr [eax + 0e0h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3d0h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3d0h], 0
        ; Exact mapped bytes 7D 0D: jge 0x585652d2
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3d0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 31ch], 0
        ; Exact mapped bytes 75 15: jne 0x585652f3
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3d0h], 0
        ; Exact mapped bytes 75 09: jne 0x585652f3
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x585652fa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 40000000h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0f8h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 31ch]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 31ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3d0h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3d0h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
